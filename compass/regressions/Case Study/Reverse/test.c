// Case Study/Reverse

/*
 * Reverses array a and checks it is reversed for 
 * any k between 0 and size-1.
 */
void reverse(int* a, int size, int k)
{	
	int i;
	int* a_copy = malloc(sizeof(int)*size);
	for(i=0; i<size; i++)
	{
		a_copy[i] = a[i];
	}
	
	for(i=0; i<size; i++)
	{
		a[i] = a_copy[size-1-i];
	}
	
	if(k>=0 && k<size)
	{
		static_assert(a[k] == a_copy[size-1-k]);
	}

	free(a_copy);	
}