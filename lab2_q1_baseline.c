// TODO : 
"li t1 ,0\n\t"
"li t2 ,16\n\t"
"addi %[lw_cnt],%[lw_cnt],2\n\t"
"loop:\n\t"
	"addi %[others_cnt],%[others_cnt],1\n\t"
	"lh t3, 0(%[h])\n\t"
	"addi %[lw_cnt],%[lw_cnt],1\n\t"
	"lh t4, 0(%[x])\n\t"
	"addi %[lw_cnt],%[lw_cnt],1\n\t"
	"add t5,t3,t4\n\t"
	"addi %[arith_cnt],%[arith_cnt],1\n\t"
	"sh t5,0(%[y])\n\t"
	"addi %[sw_cnt],%[sw_cnt],1\n\t"
	"addi %[y] ,%[y] ,2\n\t"
	"addi %[arith_cnt],%[arith_cnt],1\n\t"
	"addi %[x], %[x] ,2\n\t"
	"addi %[arith_cnt],%[arith_cnt],1\n\t"
	"addi %[h] ,%[h] ,2\n\t"
	"addi %[arith_cnt],%[arith_cnt],1\n\t"
	"addi t1 ,t1 ,1\n\t"
	"addi %[arith_cnt],%[arith_cnt],1\n\t"
	"blt t1,t2,loop\n\t"

