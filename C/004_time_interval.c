#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    // 设置控制台输出编码为 UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int hour1, minute1, second1;
    int hour2, minute2, second2;

    printf("本程序用于计算两个24进制时间之间的时间间隔\n");
    printf("-----------------------------------------\n");
    printf("请注意:冒号要在英文输入法下输入!\n");
    printf("-----------------------------------------\n");
    
    printf("请输入任意24进制时间 (例如17:21:01): ");

    scanf("%d:%d:%d", &hour1, &minute1, &second1);

    printf("请输入另一24进制时间 (例如13:14:15): ");

    scanf("%d:%d:%d", &hour2, &minute2, &second2);  

    // too idealistic
    // printf("The time interval is: %d:%d:%d\n", abs(hour2 - hour1), abs(minute2 - minute1), abs(second2 - second1));
    // a%b = a - (a/b)*b

    // 进制转换
    int time1 = hour1 * 3600 + minute1 * 60 + second1;
    int time2 = hour2 * 3600 + minute2 * 60 + second2;
    int time_interval = abs(time2 - time1);
    int hour_interval = time_interval / 3600;
    int minute_interval = (time_interval - hour_interval * 3600) / 60;
    int second_interval = time_interval - hour_interval * 3600 - minute_interval * 60;

    printf("时间间隔为: %d小时%d分钟%d秒\n", hour_interval, minute_interval, second_interval);

    // 等待用户,防止程序闪退
    printf("按回车键退出... ");
    getchar(); // 读取上一次输入的换行符
    getchar(); // 等待用户按键

    return 0;
}
