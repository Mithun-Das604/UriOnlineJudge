#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,average,final_average,rec_avg;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    average = (n1*2.0+n2*3.0+n3*4.0+n4*1.0)/(10.0);
    printf("Media: %.1lf\n",average);
    if(average >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(average >= 5.0 && average <=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        rec_avg = (average + n5)/2;
        if(rec_avg>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",rec_avg);

        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %lf\n",rec_avg);
        }
    }
    else if(average <5.0){
        printf("Aluno reprovado.\n");
    }




}

