#include<stdio.h>
int main()
{
    int array[5],temp;
    int count=0,i;
    for(i = 0;i <5; i++){
        scanf("%d",&array[i]);
    }
    for(i = 0; i< 5 ;i++){
        temp = array[i];

        if(temp % 2 == 0){

            count++;
        }
    }
    printf("%d valores pares\n%",count);
}

