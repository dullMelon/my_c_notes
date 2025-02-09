#include <stdio.h>

int main() {
    int a;                 // 整型
    double b;              // 双浮点

    printf("Please input an integer and a double: ");  // 提示输入

    scanf("%d",&a);        
    scanf("%lf",&b);       // 输入小数时，要用`%lf`

    printf("%d\n",a/3);    // 输出整数，用`%d`
    printf("%f\n",b/3);    // 输出小数，用`%f`
    
    return 0;
}