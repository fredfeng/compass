// Loop/Loop 13h

#include <stdlib.h>


int bar(int a)
{
	return a==1;
}

void foo(int* a)
{
	int i=1;
	while(bar(a[i]) != 0)
	{
		i++;
	}
	// should fail
	static_assert(i>1);
}
