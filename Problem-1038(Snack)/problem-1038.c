#include<stdio.h>
int main()
{
    int x,y;
    double result;
    scanf("%d %d",&x,&y);
    if(x == 1){
        result=4.00*(double)y;
        printf("Total: R$ %.2lf\n",result);
    }
    else if(x == 2){
        result=4.50*(double)y;
        printf("Total: R$ %.2lf\n",result);
    }
    else if(x == 3){
        result=5.00*(double)y;
        printf("Total: R$ %.2lf\n",result);
    }
    else if(x == 4){
        result=2.00*(double)y;
        printf("Total: R$ %.2lf\n",result);
    }
    else if(x == 5){
        result=1.50*(double)y;
        printf("Total: R$ %.2lf\n",result);
    }

    return 0;

}
