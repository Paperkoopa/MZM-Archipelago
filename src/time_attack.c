#include "time_attack.h"
#include "macros.h"

#include "data/intro_data.h"
#include "data/time_attack_data.h"

#include "structs/in_game_timer.h"
#include "structs/game_state.h"

/**
 * @brief 7f120 | 28 | Performs an exclusive or on all the values of the seed with the value param
 * 
 * @param pSeed Seed pointer
 * @param length Length of seed
 * @param value Value to eor with
 */
void TimeAttackEORSeed(u8* pSeed, i32 length, u8 value)
{
    i32 i;

    for (i = 0; i < length; i++)
        pSeed[i] ^= value;
}

/**
 * @brief 7f148 | 24 | Gets a garbled value from the seed
 * 
 * @param pSeed Seed pointer
 * @param value Reference value
 * @return u8 Seed value
 */
u8 TimeAttackGetGarbledSeedValue(u8* pSeed, i32 value)
{
    u32 shift;
    i32 local = value / 8;

    shift = (value - (local << 3));

    return (u8)(pSeed[local] << shift) >> 7;
}

/**
 * @brief 7f16c | 38 | Garbles a seed value
 * 
 * @param pSeed Seed pointer
 * @param value1 Random value
 * @param value2 Reference value
 */
void TimeAttackGarbleSeedValue(u8* pSeed, i32 value1, i32 value2)
{
    i32 local;
    u8 bicFlag;
    u32 orrFlag;
    u32 shift;

    bicFlag = 1;
    orrFlag = value2 & 1;
    local = value1 / 8;

    shift = 7 - (value1 - (local << 3));

    orrFlag <<= shift;
    bicFlag <<= shift;

    pSeed[local] = (pSeed[local] & ~bicFlag) | orrFlag;
}

/**
 * @brief 7f1a4 | 38 | Garbles 2 seed values
 * 
 * @param pSeed Seed pointer
 * @param value1 Reference value 1
 * @param value2 Reference value 2
 */
void TimeAttackGarbleRandomSeedValues(u8* pSeed, i32 value1, i32 value2)
{
    u32 ref1;
    u32 ref2;

    ref1 = TimeAttackGetGarbledSeedValue(pSeed, value1);
    ref2 = TimeAttackGetGarbledSeedValue(pSeed, value2);
    TimeAttackGarbleSeedValue(pSeed, value1, ref2);
    TimeAttackGarbleSeedValue(pSeed, value2, ref1);
}

/**
 * @brief 7f1dc | 24 | Function that randomizes the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedRandomFunc1(u8* pSeed, i32 length)
{
    i32 i;
    i32 limit;

    limit = length * 4;
    for (i = 0; i < limit; i += 2)
        TimeAttackGarbleRandomSeedValues(pSeed, i, i + limit);
}

/**
 * @brief 7f200 | 38 | Function that randomizes the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedRandomFunc2(u8* pSeed, i32 length)
{
    i32 i;
    i32 limit;
    i32 value;

    limit = length * 4;
    value = length * 8 - 1;
    for (i = 0; i < limit; )
    {
        TimeAttackGarbleRandomSeedValues(pSeed, i, value);
        i++;
        value--;
    }
}

/**
 * @brief 7f228 | 30 | Function that randomizes the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedRandomFunc3(u8* pSeed, i32 length)
{
    i32 i;
    i32 limit;
    i32 value;

    limit = length * 8 / 9;
    value = limit;
    for (i = 0; i < limit; )
    {
        TimeAttackGarbleRandomSeedValues(pSeed, i, value);
        i++;
        value += 8;
    }
}

/**
 * @brief 7f258 | 28 | Function that randomizes the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedRandomFunc4(u8* pSeed, i32 length)
{
    i32 i;
    i32 value;

    value = length;
    for (i = 0; i < length; )
    {
        TimeAttackGarbleRandomSeedValues(pSeed, i, value);
        i++;
        value += 7;
    }
}

/**
 * @brief 7f280 | 30 | Function that randomizes the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedRandomFunc5(u8* pSeed, i32 length)
{
    i32 i;
    i32 limit;
    i32 value;

    limit = length * 8 / 6;
    value = limit;
    for (i = 0; i < limit; )
    {
        TimeAttackGarbleRandomSeedValues(pSeed, i, value);
        i++;
        value += 5;
    }
}

/**
 * @brief 7f2b0 | c0 | Generates a time attack password from a seed
 * 
 * @param pSeed Seed pointer
 * @param pPassword Password pointer (destination)
 * @param length Password length
 */
void TimeAttackGeneratePassword(u8* pSeed, u8* pPassword, i32 length)
{
    u32 input1;
    u32 input2;
    u32 input3;
    u32 input4;
    u32 input5;
    u32 value1;
    u32 value2;
    u32 value3;
    u32 value4;
    u32 value5;
    i32 i;

    if (length > 0)
    {
        input1 = 4;
        input2 = 3;
        input3 = 2;
        input4 = 1;
        input5 = 0;

        for (i = length; i != 0; i--)
        {
            value1 = TimeAttackGetGarbledSeedValue(pSeed, input5);
            value2 = TimeAttackGetGarbledSeedValue(pSeed, input4);
            value3 = TimeAttackGetGarbledSeedValue(pSeed, input3);
            value4 = TimeAttackGetGarbledSeedValue(pSeed, input2);
            value5 = TimeAttackGetGarbledSeedValue(pSeed, input1);

            *pPassword++ = sTimeAttackPasswordCharacters[value1 << 4 | value2 << 3 | value3 << 2 | value4 << 1 | value5];

            input1 += 5;
            input2 += 5;
            input3 += 5;
            input4 += 5;
            input5 += 5;
        }
    }

    *pPassword = 0;
}

/**
 * @brief 7f370 | 210 | Checks the validity of the current save file
 * 
 * @return u8 bool, valid
 */
u8 TimeAttackCheckSaveFileValidity(void)
{
    u32 convertedIgt[MAX_AMOUNT_OF_IGT_AT_BOSSES - 1];
    u8 i;
    u8 j;

    // Concatenate in game timer struct to an u32
    for (i = 0; i < MAX_AMOUNT_OF_IGT_AT_BOSSES - 1; i++)
    {
        convertedIgt[i] = (gInGameTimerAtBosses[i].hours << 24) + (gInGameTimerAtBosses[i].minutes << 16) +
            (gInGameTimerAtBosses[i].seconds << 8) + gInGameTimerAtBosses[i].frames;
    }

    for (i = 0; i < MAX_AMOUNT_OF_IGT_AT_BOSSES - 1; i++)
    {
        // Check beat every boss in order
        for (j = i + 1; j < MAX_AMOUNT_OF_IGT_AT_BOSSES - 1; j++)
        {
            if (convertedIgt[i] >= convertedIgt[j])
                return FALSE;
        }

        // Check is below anti cheat times
        if (convertedIgt[i] <= sTimeAttackAntiCheatTimes[i])
            return FALSE;
    }

    return TRUE;
}

void CheckUnlockTimeAttack(void)
{
    // https://decomp.me/scratch/bFzS6

    u32 igt[4];
    u8 flags[32];
    u8 i;
    u8 j;
    u32 value;
    u32 result;
    u8 shift;
    u8 mask;
    u32 part1;
    u32 part2;
    u32 part3;
    u32 part4;
    u32 part5;
    u32 pen;

    if (gFileScreenOptionsUnlocked.timeAttack & 1 || !TimeAttackCheckSaveFileValidity())
        return;

    pen = GetPercentAndEndingNumber();

    mask = 0xFF;
    // TODO figure out how PEN is structured
    part1 = pen >> 0x18;
    part2 = (pen >> 0x10) & mask;

    part3 = (pen >> 0xC) & 0xF;
    part4 = (pen >> 0x8) & 0xF;
    part5 = (pen >> 0x4) & 0xF;

    if (part1 > 12 || part2 > 50 || part3 > 15 || part4 > 9 || part5 > 14 || part5 < 8 || part2 == 0)
        return;

    for (i = 0; i < ARRAY_SIZE(igt); i++)
        igt[i] = 0;

    for (i = 0; i < ARRAY_SIZE(igt); i++)
    {
        igt[0] += gInGameTimerAtBosses[i].hours;
        igt[1] += gInGameTimerAtBosses[i].minutes;
        igt[2] += gInGameTimerAtBosses[i].seconds;
        igt[3] += gInGameTimerAtBosses[i].frames;
    }

    igt[0] &= 31;

    flags[0]  = (igt[3] >> 7) & 1;
    flags[1]  = (igt[1] >> 0) & 1;
    flags[2]  = (igt[2] >> 7) & 1;
    flags[3]  = (igt[3] >> 6) & 1;
    flags[4]  = (igt[0] >> 0) & 1;
    flags[5]  = (igt[1] >> 1) & 1;
    flags[6]  = (igt[2] >> 6) & 1;
    flags[7]  = (igt[3] >> 5) & 1;
    flags[8]  = (igt[0] >> 1) & 1;
    flags[9]  = (igt[2] >> 5) & 1;
    flags[10] = (igt[3] >> 4) & 1;
    flags[11] = (igt[1] >> 2) & 1;
    flags[12] = (igt[2] >> 4) & 1;
    flags[13] = (igt[3] >> 3) & 1;
    flags[14] = (igt[0] >> 2) & 1;
    flags[15] = (igt[1] >> 3) & 1;
    flags[16] = (igt[1] >> 7) & 1;
    flags[17] = (igt[2] >> 3) & 1;
    flags[18] = (igt[0] >> 3) & 1;
    flags[19] = (igt[3] >> 2) & 1;
    flags[20] = (igt[2] >> 2) & 1;
    flags[21] = (igt[3] >> 1) & 1;
    flags[22] = (igt[1] >> 4) & 1;
    flags[23] = (igt[2] >> 1) & 1;
    flags[24] = (igt[2] >> 0) & 1;
    flags[25] = (igt[3] >> 0) & 1;
    flags[26] = (igt[1] >> 6) & 1;
    flags[27] = (igt[0] >> 4) & 1;
    flags[28] = (igt[1] >> 5) & 1;
    flags[29] = 1 & 1;
    flags[30] = 2 & 1;
    flags[31] = 1;

    gFileScreenOptionsUnlocked.timeAttack = FALSE;

    i = 0;
    result = 0;
    mask = 24;
    while (i < 4)
    {
        value = 0;
        shift = 7;
        for (j = 0; j < 8; j++)
        {
            value += flags[i * 8 + j] << shift;
            shift--;
        }

        result += (value << mask);

        i++;
        mask -= 8;
    }

    gFileScreenOptionsUnlocked.timeAttack = result;
}

u8 unk_7f60c(u8* param_1)
{
    // https://decomp.me/scratch/JPI7a

    u8 i;
    u32 sum;
    u8 mask;
    u32 unk_0;
    u32 j;

    if (!(gFileScreenOptionsUnlocked.timeAttack & 1))
        return FALSE;

    sum = 0;
    mask = 31;
    for (i = 0; i < 32; i++)
    {
        sum += (gFileScreenOptionsUnlocked.timeAttack >> i & 1) << mask;
        mask--;
    }

    j = (sum * 8) >> 6;
    unk_0 = 10000000;

    for (i = 0; i < 7; i++)
    {
        mask = 0;
        while (j >= unk_0)
        {
            j -= unk_0;
            mask++;
        }

        param_1[i] = mask + 48;

        unk_0 /= 10;
    }
    param_1[i] = j + 48;

    return TRUE;
}

/**
 * @brief 7f694 | 44 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc1(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 70);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 73);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackSeedRandomFunc5(pSeed, length);
}

/**
 * @brief 7f6d8 | 44 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc2(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 144);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 94);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
}

/**
 * @brief 7f71c | 44 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc3(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 145);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 227);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
}

/**
 * @brief 7f760 | 50 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc4(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 89);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 99);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 57);
}

/**
 * @brief 7f7b0 | 44 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc5(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 149);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 252);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackSeedRandomFunc5(pSeed, length);
}

/**
 * @brief 7f7f4 | 50 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc6(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 77);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 74);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 83);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
}

/**
 * @brief 7f844 | 58 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc7(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 65);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 89);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 79);
    TimeAttackSeedRandomFunc1(pSeed, length);
}

/**
 * @brief 7f89c | 60 | Function that shuffles the seed
 * 
 * @param pSeed Seed pointer
 * @param length Seed length
 */
void TimeAttackSeedShuffleFunc8(u8* pSeed, i32 length)
{
    TimeAttackEORSeed(pSeed, length, 84);
    TimeAttackSeedRandomFunc3(pSeed, length);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackSeedRandomFunc5(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 79);
    TimeAttackSeedRandomFunc1(pSeed, length);
    TimeAttackSeedRandomFunc2(pSeed, length);
    TimeAttackEORSeed(pSeed, length, 77);
    TimeAttackSeedRandomFunc4(pSeed, length);
    TimeAttackSeedRandomFunc5(pSeed, length);
}

/**
 * @brief 7f8fc | 84 | Randomizes some values of the seed
 * 
 * @param pSeed Seed pointer
 * @param rng Rng
 */
void TimeAttackRandomizeSeed(u8* pSeed, u32 rng)
{
    u8 value0;
    u8 value4;
    u8 value8;
    u8 value10;
    u32 addedValue;

    pSeed[12] = pSeed[0] & 0x80 | (pSeed[4] & 0x40) | (pSeed[8] & 0x20) | (pSeed[10] & 0x10);

    value0 = pSeed[0] & 0x7F;
    value4 = pSeed[4] & 0xBF;
    value8 = pSeed[8] & 0xDF;
    value10 = pSeed[10] & 0xEF;

    addedValue = rng * 16;

    pSeed[0] = value0 | (addedValue & 0x80);
    pSeed[4] = value4 | (addedValue & 0x40);
    pSeed[8] = value8 | (addedValue & 0x20);
    pSeed[10] = value10 | (addedValue & 0x10);
}

u8 TimeAttackGenerateSeed(struct TimeAttackData* pTimeAttack)
{
    u8 seed[16];
    i32 i;
    i32 j;
    i32 seedOffset;
    u32 mask;
    u8 value;
    u32 sum;
    u8* ptr;

    seedOffset = 0;
    mask = 1;

    for (i = 0; i < 32; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->timeAttack & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }
    
    mask = 1;
    for (i = 0; i < 7; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->igtHours & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }
    
    mask = 1;
    for (i = 0; i < 6; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->igtMinutes & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }
    
    mask = 1;
    for (i = 0; i < 6; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->igtSeconds & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }
    
    mask = 1;
    for (i = 0; i < 6; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_7 & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    mask = 1;
    for (i = 0; i < 5; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_8 & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    mask = 1;
    for (i = 0; i < 4; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_9 & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    mask = 1;
    for (i = 0; i < 4; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_A & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    mask = 1;
    pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_B & mask) != 0;
    seedOffset++;

    mask = 1;
    pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->unk_C & mask) != 0;
    seedOffset++;

    mask = 1;
    for (i = 0; i < 8; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->igtAtBosses1 & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    mask = 1;
    for (i = 0; i < 8; i++)
    {
        pTimeAttack->passwordSeed[seedOffset] = (pTimeAttack->igtAtBosses2 & mask) != 0;
        mask <<= 1;
        seedOffset++;
    }

    sum = 0;

    for (j = 0; j < 11; j++)
    {
        mask = 0;
        value = 0;

        ptr = &pTimeAttack->passwordSeed[j * 8];
        for (i = 0; i < 8; i++)
        {
            value += *ptr << mask;
            mask++;
            ptr++;
        }

        seed[j] = value;
        sum += value;
    }

    seed[j] = sum;

    sTimeAttackSeedShuffleFunctionPointers[pTimeAttack->rng](seed, 12);
    TimeAttackRandomizeSeed(seed, pTimeAttack->rng);
    TimeAttackGeneratePassword(seed, pTimeAttack->password, sizeof(pTimeAttack->password));

    return FALSE;
}

/**
 * @brief 7fb48 | 21c | Checks if new time attack records should be set
 * 
 * @return u8 bool, new record set
 */
u8 TimeAttackCheckSetNewRecord(void)
{
    u32 convertedIgt;
    u32 converted100RecordIgt;
    u32 part1;
    u32 part2;
    u32 part3;
    u32 part4;
    u32 part5;
    u32 pen;
    u32 mask;
    u32 completionPercentage;
    u32 records;
    u8 validFile;
    struct TimeAttackData* pTimeAttack;
    u32 igtBoss1;
    u32 igtBoss2;
    u32 unk_b;
    u8 i;
    u32 convertedRecordIgt;

    convertedIgt = (gInGameTimer.hours << 24) + (gInGameTimer.minutes << 16) + (gInGameTimer.seconds << 8);
    convertedRecordIgt = (gTimeAttackRecord.igt.hours << 24) + (gTimeAttackRecord.igt.minutes << 16) +
        (gTimeAttackRecord.igt.seconds << 8);
    converted100RecordIgt = (gTimeAttackRecord.igt100.hours << 24) + (gTimeAttackRecord.igt100.minutes << 16) +
        (gTimeAttackRecord.igt100.seconds << 8);

    pen = GetPercentAndEndingNumber();

    mask = 0xFF;
    // TODO figure out how PEN is structured
    part1 = pen >> 0x18;
    part2 = (pen >> 0x10) & mask;

    part3 = (pen >> 0xC) & 0xF;
    part4 = (pen >> 0x8) & 0xF;
    part5 = (pen >> 0x4) & 0xF;
    completionPercentage = part1 + part2 + part3 + part4 + part5;

    if (part5 > 13)
        unk_b = 1;
    else
        unk_b = 0;

    // Check current IGT is faster than previous Any% record
    if (convertedIgt < convertedRecordIgt)
        records = 1;
    else
        records = 0;

    // Check current IGT is faster than previous 100% record
    if (completionPercentage >= 100 && convertedIgt < converted100RecordIgt)
        records |= 2;

    // No records set, abort
    if (records == 0)
        return FALSE;

    validFile = FALSE;
    if (gFileScreenOptionsUnlocked.timeAttack & 1)
        validFile = TimeAttackCheckSaveFileValidity();

    // Check didn't get more items than possible?
    if (part1 > 12 || part2 > 50 || part3 > 15 || part4 > 9 || part5 > 14 || part5 < 8 || part2 == 0)
        validFile = FALSE;

    igtBoss1 = (gInGameTimerAtBosses[0].frames & 15) << 4 | (gInGameTimerAtBosses[2].frames & 15);
    igtBoss2 = (gInGameTimerAtBosses[3].frames & 15) << 4 | (gInGameTimerAtBosses[1].frames & 15);

    pTimeAttack = &gTimeAttackData;

    pTimeAttack->timeAttack = gFileScreenOptionsUnlocked.timeAttack;

    pTimeAttack->igtHours = gInGameTimer.hours;
    pTimeAttack->igtMinutes = gInGameTimer.minutes;
    pTimeAttack->igtSeconds = gInGameTimer.seconds;

    pTimeAttack->unk_7 = part2;
    pTimeAttack->unk_8 = part3;
    pTimeAttack->unk_9 = part4;
    pTimeAttack->unk_A = part1;
    pTimeAttack->unk_B = unk_b;

    pTimeAttack->unk_C = validFile;
    pTimeAttack->igtAtBosses1 = igtBoss1;
    pTimeAttack->igtAtBosses2 = igtBoss2;
    pTimeAttack->rng = gFrameCounter8Bit & 15;

    // Generate password
    TimeAttackGenerateSeed(pTimeAttack);

    // Updates Any% record
    if (records & 1)
    {
        for (i = 0; i < sizeof(gTimeAttackRecord.password); i++)
            gTimeAttackRecord.password[i] = pTimeAttack->password[i];

        gTimeAttackRecord.igt.hours = gInGameTimer.hours;
        gTimeAttackRecord.igt.minutes = gInGameTimer.minutes;
        gTimeAttackRecord.igt.seconds = gInGameTimer.seconds;
        gTimeAttackRecord.igt.frames = gInGameTimer.frames;
    }

    // Update 100% record
    if (records & 2)
    {
        for (i = 0; i < sizeof(gTimeAttackRecord.password100); i++)
            gTimeAttackRecord.password100[i] = pTimeAttack->password[i];

        gTimeAttackRecord.igt100.hours = gInGameTimer.hours;
        gTimeAttackRecord.igt100.minutes = gInGameTimer.minutes;
        gTimeAttackRecord.igt100.seconds = gInGameTimer.seconds;
        gTimeAttackRecord.igt100.frames = gInGameTimer.frames;
    }

    if (records)
    {
        // Save new times
        save_time_attack_to_sram();
        // New time attack record flag
        gEndingFlags |= 1;
    }

    return TRUE;
}
