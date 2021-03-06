// Loop/strcpy1
#include <stdlib.h>

void strcpy(char* str1, char* str2)
{
	int pos = -1;
	char* str1_start = str1;
	char* str2_start = str2;
	for(; *str1!='\0'; str1++, str2++)
	{
		*str2 = *str1;
	}
	
	str1 = str1_start;
	str2 = str2_start;

	for(; *str1!='\0'; str1++, str2++) {
		static_assert(*str1 == *str2);
	}
}
