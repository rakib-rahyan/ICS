#include<stdio.h>
int main()
{
    printf("Input your amount:");
    int amount;
    scanf("%d",&amount);

    int halfthousand;
    halfthousand= amount/500;

    printf("%d - 500Tk notes \n",halfthousand);

    int last1;
    last1=amount-(500*halfthousand);

    int hudred;
    hudred= last1/100;
    printf("%d - 100Tk notes \n",hudred);

    int taka;
    taka= last1-(hudred*100);

    printf("%d - 1Tk notes\n",taka);

}
