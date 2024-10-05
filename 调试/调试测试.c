#include <stdio.h>

void test()
{
	int a = 10;
	int b = 20;
	int c = a + b;
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}

	for (i = 0; i < sz; i++)
	{
		test();
		printf("%d\n", arr[i]);
	}

	return 0;
}