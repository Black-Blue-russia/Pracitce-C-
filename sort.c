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
    for (int i = 0; i < N ; ++i)
    {
        for (int j = i; j < N; ++j )
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\n");
    printf("Выходной массив - ");
    for (int i =  0; i < N; i++)
	    printf(" %d ", a[i]);
    
}

