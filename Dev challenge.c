#include<stdio.h>
#include<stdlib.h>




int main(int argc, char const *argv[])
{
    int N,dg1,dg2,M;
    int valid=1;

    printf("Give a numbre: ");
    scanf("%d",&N);
    M=N*N;
        printf("Le carre de N est: %d \n",M);
    while(N!=0 && valid)
    {
        dg1=N%10;
        N=N/10;
        dg2=M%10;
        M=M/10;
        if(dg1!=dg2)valid=0;

    }
    if(valid)printf("valid\n");
    else printf("notvalid\n");
    return 0;
}
