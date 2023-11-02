i#include<stdio.h>

int squareroot(int a){
    a=a*a;

int sum(int a){
    a=a+a;

    return a;
}
int main(){
    int a;
    scanf("put a number : %d",&a);
    printf("this is the number : %d",a);

    int b = squareroot(a);

    int b = sum(a);

    printf("%d",b);

    return 0;
}
