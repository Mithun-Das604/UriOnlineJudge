#include<stdio.h>
int main()
{
    int n,x,y,i;
    double result;
    scanf("%d",&n);
    for(i = 1; i <= n;i++){
        scanf("%d%d",&x,&y);
        double p = (double)x;
        double q = (double)y;
        if(q == 0){
            printf("divisao impossivel\n");
        }
        else{
            result =p /q;
            printf("%.1lf\n",result);
        }

    }
    return 0;
}
