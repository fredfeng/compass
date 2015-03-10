// Case Study/2D init 2

/*
 * Initializes a 2d array to 0 and asserts that 
 * any element in it is 0
 */
void _2Darray_init(int** a, int n, int m, int k, int l)
{
   int i;
   int j;
   for( i=0; i<n; i++)
   {
       for(j=0; j<m; j++)
           a[i][j] = 0;
   }
   
    for( i=0; i<n; i++)
   {
       for(j=0; j<m; j++)
           static_assert(a[i][j] == 0);
   }
   


}
