#include<stdio.h>
int main()
{
    int s,second,minute,hour,temp;
    scanf("%d",&s);
    hour = s / 3600;
    minute= s % 3600 /60;
    second = s %3600% 60;
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;


}
