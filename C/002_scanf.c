#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    
    scanf("%d %d",&a,&b);    // scanf("%d,%d",&a,&b);    试试输入 1,2和1 2的区别

  // scanf("%d %d ",&a,&b);    末尾要加任意字符，才能结束输入，否则会一直等待输入
  // scanf("xxx%d %d ",&a,&b);    开头要加上xxx，会跳过xxx，继续输入

    printf("%d %d\n",a,b);

    return 0;
}
