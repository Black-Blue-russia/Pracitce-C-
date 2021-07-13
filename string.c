#include<stdio.h>
void string_satisfy()
{
    char vowel[]={'а','е','о','э','ю','я'};
    char input[16];
    printf("Исходный массив - ");
    //gets(input);
    for (int i=0; i<16; i++)
        scanf("%c", &input[i]);
    printf("Выходный массив - \n");
    for (int i=0; i<16; i++)
    printf("%c",input[i]);
    for (int i=0; i<6;i++)
        printf(" %d ", vowel[i]);
    printf("\n");
    for (int i=0; i<16; i++)
        printf(" %d ",input[i] );
};