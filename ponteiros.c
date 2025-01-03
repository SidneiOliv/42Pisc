#include <stdio.h>

int	main(void)
{
	int	a = 15;
	int	*ptr;
	
	ptr = &a;
	
	printf ("\nconteudo de a  : %d\n", a);
	printf ("endereco de &a : %p\n", &a);
	printf ("conteudo apontado por *ptr : %d\n", *ptr);
	printf ("endereco apontado por ptr  : %p\n", ptr);
	printf ("endereco de ptr  : %p\n", &ptr);
	
	printf ("\n");
	
	*ptr = 73;

	printf ("\nconteudo de a  : %d\n", a);
	printf ("endereco de &a : %p\n", &a);
	printf ("conteudo apontado por *ptr : %d\n", *ptr);
	printf ("endereco apontado por ptr  : %p\n", ptr);
	printf ("endereco de ptr  : %p\n", &ptr);

/*
	ponteiros
	*ptr : o apontado por, conteudo do endereco da variavel que ptr aponta (a=15)
	 ptr : o endereco da variavel que ptr aponta (&a)
	&ptr : endereco do ponteiro
*/
}
