#include<stdio.h>
#include<stdlib.h>

long int recursive_factorial(int p);

int main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("�D�ƦC�զXC(m,n)\n");
	printf("m=");
	scanf_s("%d",&m);
	printf("n=");
	scanf_s("%d", &n);

	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);
	
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
	return 0;
}

long int recursive_factorial(int p)
{
	if (p > 1)
	{
		long int result = p * recursive_factorial(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}