.align 2

.section .rodata
.global track_556

track_556_0:
	.byte 188, 0, 187, 75, 189, 9, 190, 25
	.byte 191, 64, 193, 24, 192, 1, 129, 219
	.byte 69, 60, 129, 192, 12, 129, 24, 129
	.byte 35, 129, 47, 129, 58, 129, 190, 22
	.byte 192, 70, 129, 190, 18, 192, 81, 129
	.byte 190, 15, 192, 93, 129, 190, 12, 192
	.byte 104, 129, 190, 9, 192, 115, 129, 190
	.byte 6, 192, 127, 129, 177

track_556_1:
	.byte 188, 0, 189, 12, 190, 18, 191, 64
	.byte 193, 10, 192, 1, 129, 219, 72, 52
	.byte 129, 190, 22, 192, 9, 129, 190, 25
	.byte 192, 18, 129, 190, 28, 192, 26, 129
	.byte 190, 31, 192, 35, 129, 190, 34, 192
	.byte 44, 129, 190, 37, 192, 52, 129, 61
	.byte 129, 70, 129, 78, 129, 87, 129, 96
	.byte 129, 177

.align 2

track_556:
	.byte 2
	.byte 0
	.byte 228
	.byte 0
	.word voice_group10
	.word track_556_0
	.word track_556_1

.align 2