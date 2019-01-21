#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task10()
{
	int A[15] = { 0 };
	int N = 14;
	int x;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n\n\n");

	for (size_t i = 0; i < 7; i++)
	{
		 x = A[i];
		A[i] = A[N];
		A[N] = x;
		N--;
	}

	for (size_t i = 0; i < 15; i++)
	{
		printf("%d\t", A[i]);
	}
}

void task9()
{
	int A[12] = { 0 };
	int Max, Min, Q, B, C;

	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n");

	for (size_t i = 0; i < 12; i++)
	{
		Max = 0;
		for (size_t j = 0; j < 12; j++)
		{
			if (Max < A[j])
			{
				Max = A[j];
			}
		}
	}

	printf("\n%d\n", Max);

	for (size_t i = 0; i < 12; i++)
	{
		Min = 100;
		for (size_t j = 0; j < 12; j++)
		{
			if (Min > A[j])
			{
				Min = A[j];
			}
		}
	}

	printf("\n%d\n", Min);

	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 12; j++)
		{
			if (Max == A[j])
			{
				Q = j;
			}
			if (Min == A[j])
			{
				B = j;
			}
		}
	}

	C = A[Q];
	A[Q] = A[B]*3;
	A[B] = C;

	printf("\n\n\n\n");

	for (size_t i = 0; i < 12; i++)
	{
		printf("%d\t", A[i]);
	}
}

void task8()
{
	int A[19] = { 0 };
	int sum = 0;

	for (size_t i = 0; i < 19; i++)
	{
		A[i] = -10 + rand() % 30;
		printf("%d\n", A[i]);
	}

	printf("\n\n\n\n\n\n\n\n\n\n\n");

	for (size_t i = 0; i < 19; i++)
	{
		if (A[i]>0)
		{
			printf("%d\n", A[i]);
		}
		if (A[i]<0)
		{
			break;
		}
	}
}

void task7()
{
	int A[15] = { 0 };
	int A0 = 0, Ap = 0, Am = 0;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = -10 + rand() % 20;
		printf("%d\t", A[i]);
	}

	for (size_t i = 0; i < 15; i++)
	{
		if (A[i] == 0)
		{
			A0++;
		}

		if (A[i] > 0)
		{
			Ap++;
		}

		if (A[i]<0)
		{
			Am++;
		}
	}

	printf("\nКоличество положительных = %d\n", Ap);

	printf("\nКоличество отрицательных = %d\n", Am);

	printf("\nКоличество нулевых = %d\n", A0);
}

void task6()
{
	int A[17] = { 0 }, sum = 0;

	for (size_t i = 0; i < 17; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
	}

	for (size_t i = 0; i < 17; i++)
	{
		if (A[i]%2 == 1)
		{
			sum = sum + A[i];
		}

	}

	printf("\n\n\n\n\n\n\n\n\n");
		
	for (size_t i = 0; i < 17; i++)
	{
		if (A[i] % 3 == 0)
		{
			A[i] = sum;
		}

	}

	for (size_t i = 0; i < 17; i++)
	{
		printf("%d\t", A[i]);
	}
}

void task5()
{
	int A[15] = { 0 };
	int Max, Min,raz,sum = 0;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
		sum = sum + A[i];
	}

	Max = 0;

	for (size_t i = 0; i < 15; i++)
	{
			if (Max < A[i])
			{
				Max = A[i];
			}
	}

	Min = 100;

	for (size_t i = 0; i < 15; i++)
	{
		if (Min > A[i])
		{
			Min = A[i];
		}
	}

	raz = Max - Min;

	printf("\n\n%d\n",Max);

	printf("\n%d\n", Min);

	printf("\n%d\n", sum);

	printf("\nRAznost' = %d\n", raz);
}

void task4()
{
	int A[15] = { 0 };

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n\n\n\n\n\n");

	for (size_t i = 0; i < 15; i++)
	{
			if (A[i] > A[0])
			{
				printf("%d\t", A[i]);
			}
	}
}

void task3()
{
	int A[10] = { 0 };
	int Max, Min, Q, B,C;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		Max = 0;
		for (size_t	j = 0; j < 10; j++)
		{
			if (Max < A[j])
			{
				Max = A[j];
			}
		}
	}

	printf("\n%d\n", Max);

	for (size_t i = 0; i < 10; i++)
	{
		Min = 100;
		for (size_t j = 0; j < 10; j++)
		{
			if (Min > A[j])
			{
				Min = A[j];
			}
		}
	}

	printf("\n%d\n", Min);

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			if (Max == A[j])
			{
				Q = j;
			}
			if (Min == A[j])
			{
				B = j;
			}
		}
	}

	C = A[Q];
	A[Q] = A[B];
	A[B] = C;

	printf("\n\n\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\t", A[i]);
	}
}

void task2()
{
	int A[8] = { 0 };
	int x;

	for (size_t i = 0; i < 8; i++)
	{
		A[i] = 0 + rand() % 50;
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n");

	for (size_t i = 1; i < 8; i++)
	{
		for (size_t j = 1; j < 8; j++)
		{
			if (A[j]<A[j-1])
			{
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
			}

		}

	}

	for (size_t i = 0; i < 8; i++)
	{
		printf("%d\t", A[i]);
	}

	printf("\n\n\n\n");

	for (size_t i = 1; i < 8; i++)
	{
		for (size_t j = 1; j < 8; j++)
		{
			if (A[j] > A[j - 1])
			{
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
			}

		}

	}

	for (size_t i = 0; i < 8; i++)
	{
		printf("%d\t", A[i]);
	}
}

void task1()
{
	int A[20] = { 0 };

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 50 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8(); break;
		case 9:task9(); break;
		case 10:task10(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}