#include<stdio.h>
int main()
{
    printf("Input your seconds:");
    int seconds;
    scanf("%d",&seconds);

    int hr;
    hr= seconds/3600;

    printf("%d hr ",hr);

    int last1;
    last1=seconds-(3600*hr);

    int min;
    min= last1/60;
    printf("%d min ",min);

    int sec;
    sec= last1-(min*60);

    printf("%d sec",sec);

}
