//Memory safety/uninit 4h
#include <stdlib.h>

void specify_checks()
{
	check_uninit();
}

void foo()
{
	int i;
	int** a= malloc(10*sizeof(int));
	int b[10];
	for(i=0; i<10; i++)
	{
		a[i] = malloc(sizeof(int));
	}
	
	// not ok
	for(i=0; i<10; i++)
	{
		b[i] = *a[i];
	}
}
