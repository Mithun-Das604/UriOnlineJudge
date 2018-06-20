#include<stdio.h>
int main()
{
    int size,i,j,number,in,out;
    in = 0;
    out = 0;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&j);
        if(j>= 10 && j <= 20){
            in++;
        }
        else{
            out++;
        }
    }
    if(in > 0){
        printf("%d in\n",in);
    }
    if(out > 0){
            printf("%d out\n",out);
    }


    return 0;

}
