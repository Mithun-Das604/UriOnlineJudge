#include<stdio.h>
int main()
{
    double x,average,sum=0;
    int i,j=0;
    while(1){
        scanf("%lf",&x);
        if(x >= 0 && x <= 10){

                sum = sum + x;
                j = j + 1;
            if(j == 2){
                average = sum/2;
            printf("media = %.2lf\n",average);
            break;
            }

        }
        else{
            printf("nota invalida\n");
        }
    }
 return 0;

}
