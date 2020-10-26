#Listing 9
	//glob.c
	int foo = 10		;
	main()
	{
	int p foo		;
	}

	//glob.s
	.globl foo
foo:
	.long 10
	.globl main
main:
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	movl foo,%eax
	movl %eax,-4(%ebp)
	leave
	ret
