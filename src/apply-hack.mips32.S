	.text
	.align	2
	.abicalls
	.option	pic0
	.globl	_C_do_apply_hack
    .ent    _C_do_apply_hack

_C_do_apply_hack:
    /*MAGIC: mips-o32 abi prologue */
  	.set	nomips16
	.frame	$sp,32,$31
	.mask	0x80000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	nomacro
	addiu	$sp,$sp,-32
	sw      $31,28($sp)
	.cprestore	16
	/*MAGIC: end of magic code */

	move    $25,$4          /* save proc */
	move    $sp,$5          /* change stack pointer to buf */
	lw      $a0,0($sp)      /* $a0 = buf[0] */
	lw      $a1,4($sp)      /* $a1 = buf[1] */
	lw      $a2,8($sp)      /* $a2 = buf[2] */
	lw      $a3,12($sp)     /* $a3 = buf[3] */
    jalr    $25
   	nop
    .end    _C_do_apply_hack

