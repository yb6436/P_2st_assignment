#include <stdio.h>
int primenumber(int n);
int armstrongnumber(int n);
int number;
int pow;
int main(void)
{
	int n1, n2, i, a;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);
	printf("%d��%d ���̿� �ִ� �Ҽ�: ", n1, n2);

	for (i = n1 + 1; i < n2; ++i)
	{
		a = primenumber(i);

		if (a == 1)
			printf("%d", i);
	}
	return 0;
}

int primenumber(int n)
{
	int b, a = 1;

	for (b = 2; b <= n / 2; ++b)
	{
		if (n%b == 0)
		{
			a = 0;
			break;
		}
	}
	return a;

}
int primenumber(int n);
int armstrongnumber(int n)
{
	int n, a;
	printf("���ڸ� �Է��Ͻÿ�");
	scanf("%d", &n);

	a = primenumber(n);
	if (a == 1)
		printf("%d �� �Ҽ��Դϴ�\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�\n", n);

	a = armstrongnumber(n);
	if (a == 1)
		printf("%d�� armstrongnumber", n);
	else
		printf("%d�� armstrongnumber�� �ƴϴ�", n);

	return 0;
}


int primenumber(int n)
{
	int i, a = 1;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n%i == 0)
		{
			a = 0;
			break;
		}
	}
	return a;
}

int armstrongnumber(int n)
{
	int num1, num2, result = 0, n = 0, a;
	num1 = number;
	while (num1 != 0)
	{
		num1 /= 10;
		++n;
	}
	num1 = number;
	while (num1 != 0)
	{
		num2 = num1 % 10;
		result += pow(num2, n);
		num1 /= 10;
	}

	if (result == number)
		a = 1;
	else
		a = 0;
	return a;
}

{
	int n, i, a = 0;

	printf("���ڸ� �Է��Ͻÿ�");
	scanf("%d", &n);


	for (i = 2; i <= n / 2; ++i)
	{
		if (primenumber(i) == 1)
		{
			if (primenumber(n - i) == 1)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				a = 1;
			}

		}
	}

	if (a == 0)

		printf("%d�� �ΰ� �Ҽ��� ������ ��Ÿ���� ����", n);

	return 0;
}


Int primenumber(int n)
{

	int i, Iprimenumber = 1;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			Iprimenumber = 0;
			break;
		}
	}
	return Iprimenumber;
}
