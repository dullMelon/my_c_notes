#include<stdio.h>
int main(){
    int a = 1, b = 1, c = 1;
    a += 1;
    b ++;
    ++ c;

    printf("a b c:%d %d %d\n",a,b,c);
    printf("-----------------\n");
    
    int x = 1;
    printf("x++:%d\n",x++);    // 1
    printf("x:%d\n",x);        // 2
    printf("++x:%d\n",++x);    // 3

    return 0;
}