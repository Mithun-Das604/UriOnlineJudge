#include<stdio.h>
int main()
{
    int a,i;
    int count=0;
    scanf("%d",&a);

    for(i = a;count<6;a++){
        if(a % 2 != 0){
            count++;
            printf("%d\n",a);
        }
    }


}
