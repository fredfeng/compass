// Memory safety/uninit 3d
#include <stdlib.h>


void specify_checks()
{
	check_uninit();
}

void foo(int* x)
{
	int y[5];
	y[1] = 4;
	// incorrect
	int a = x[3];
}

void bar()
{
	int x[4];
	x[0] = x[1] = x[2] = 3;
	foo(x);
}
