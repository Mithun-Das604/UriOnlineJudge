#include<stdio.h>
int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a > b){
        result= 24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",result);


    }
    else if(a <b){
        result= b - a;
        printf("O JOGO DUROU %d HORA(S)\n",result);

    }
}
