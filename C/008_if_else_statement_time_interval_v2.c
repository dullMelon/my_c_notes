#include <stdio.h>

int main() {
    int hour1, hour2, minute1, minute2;

    printf("enter two times:(example: 22:33)\n");

    scanf("%d:%d",&hour1,&minute1);
    scanf("%d:%d",&hour2,&minute2);
    int ih, im;

    if(hour1 > hour2){
        ih = hour1 - hour2;
        im = minute1 - minute2;
        if(im < 0){
            im += 60;
            ih --;
        }
    }else if(hour2 > hour1){
        ih = hour2 - hour1;
        im = minute2 - minute1;
        if(im < 0){
            im += 60;
            ih --;
        }
    }else if(hour1 == hour2){
        ih = 0;
        im = minute1 - minute2;
        if(im < 0){
            im = -im;
        }
    }

    printf("the time interval is: %dh%dm\n",ih,im);

/*  多行注释开头  
    printf("relational operator:\n");

    printf("value of 1 >= 0 is: %d\n",1 >= 0);    // 1
    printf("value of 1 == 0 is: %d\n",1 == 0);    // 0    结尾  */    

    return 0;
}
