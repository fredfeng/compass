//Strrchr stubs 3c buggy

#include <stdlib.h>


typedef unsigned int bool;
#define true 1
#define false 0

int x;
int s_size;

char* strrchr(char* s, char c)
{
	while(*s!='\0') {
		if(*s == c) return s;
		s++;
	}
	return NULL;
	
}

static bool
remove_parents (char *dir)
{
	char *slash;
	bool ok = true;
	
	slash = strrchr (dir, '/');
	if (slash == NULL)
		return;
	
	strip_trailing_slashes (dir);
	while (1)
	{
		slash = strrchr (dir, '/');
		if (slash == NULL)
			break;
		//should fail
		buffer_safe(slash,2);
		slash[1] = 0;
	}
	return ok;
}

