#include<stdio.h>
int main()
{
    int x,i,j,alcohol=0,gasoline=0,disel=0;

    while(1){
        scanf("%d",&x);
        if(x == 4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alcohol,gasoline,disel);
            break;
        }
        else if(x==1){
            alcohol++;
        }
        else if(x == 2){
            gasoline++;
        }
        else if(x == 3){
            disel++;
        }
    }
    return 0;
}
