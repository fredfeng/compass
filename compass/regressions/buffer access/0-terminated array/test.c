//buffer access/0-terminated array

void specify_checks()
{
	check_buffer();
}

int a[] = {1, 2, 3, 0};

void foo()
{
	int i;
	for(i=0; a[i]!=0; i++) ;
}

