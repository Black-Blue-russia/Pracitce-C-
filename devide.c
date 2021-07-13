#include<stdio.h>
void _1(int n){
    printf("\nUnit 1 - %d",n);
}
void _10(int n){
    printf("\nunit 10 - %d", n/10);
    printf("\nunit 1 - %d", n % 10);
}
void _100(int n){
    printf("\nunit 100 - %d", n/100);
    _10(n%100);

}
void _1000(int n){
    printf("\nunit 1000 - %d", n/1000);
    _100(n%1000);
}
void _10000(int n){
    printf("\nunit 10000 - %d", n/10000);
    _1000(n%10000);
}
void _100000(int n){
    printf("\nunit 100000 - %d", n/100000);
    _10000(n%100000);
}
void devide(){
    int n;
    scanf("%d", &n);
    printf("%d", n);
    if (n<10)
        _1(n);
    if (10<= n && n < 100)
        _10(n);
    if (100<=n && n < 1000)
        _100(n);
    if (1000<=n && n < 10000)
        _1000(n);
    if (10000<=n && n < 100000)
        _10000(n);
    if (100000<=n && n < 1000000)
        _100000(n);
        

}
