#include<stdio.h>
void sort() {
	int N;
	int i, j, temp;
	printf("число N:");
	scanf("%d", &N);
	int a[20];
	for (int i = 0; i < N; i++)
	{
		printf("Введите число %d:", i + 1);
		scanf("%d", &a[i]);
	}
	printf("\n");
    printf("Исходный массив - ");
	for (int i =  0; i < N; i++)
	    printf(" %d ", a[i]);
    for (int i = 0; i < (N - 1); ++i)
    {
        for (int j = 0; j < N - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Выходной массив - ");
    for (int i =  0; i < N; i++)
	    printf(" %d ", a[i]);
    
}

