// Case Study/Alloc fixed size 

#include <stdlib.h>

void alloc_fixed_size_buggy(int** a, int size, int n, int k)
{
   assume(size>0);
   int i;
   for( i=0; i<n; i++){
       a[i] = malloc(sizeof(int)*size);
   }
   
   for(i=0; i<n; i++)
   {
   	buffer_safe(a[i], size-1);
   }
   
}
