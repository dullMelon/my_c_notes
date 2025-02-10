#include<stdio.h>

int main(){
    int a;
    int b;
    int temp;

    printf("Enter two integer values:\n");

    scanf("%d %d",&a,&b);     //不要忘了&

    temp = a;
    a = b;
    b = temp;

    printf("The exchanged values are as follows:\n %d %d",a,b);

    return 0;
}