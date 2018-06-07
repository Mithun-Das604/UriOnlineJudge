#include<stdio.h>
int main()
{
    int time,avg_speed;
    double fule_need;
    scanf("%d %d",&time,&avg_speed);
    fule_need=((avg_speed/12.0)*time);
    printf("%.3lf\n",fule_need);
    return 0;

}
