// Interprocedural/Call 2

void bar(int *a)
{
	*a = 55;
}

void foo()
{
	int* b;
	bar(b);
	static_assert(*b==55);
}
