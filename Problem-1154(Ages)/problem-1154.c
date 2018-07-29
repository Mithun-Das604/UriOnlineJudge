#include<stdio.h>
int main()
{
    int x,i=0,sum=0;
    double average;
    while(1){
        scanf("%d",&x);
        if(x < 0){
            average = (double) sum / (double)i;
            printf("%.2lf\n",average);
            break;
        }
        else{
            i++;
            sum = sum + x;
        }
    }


}
