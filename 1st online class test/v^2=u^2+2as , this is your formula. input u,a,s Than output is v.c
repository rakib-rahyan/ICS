#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter your value u,a,s on integer or float:");
    float u, a, s, v;
    scanf("%f %f %f",&u, &a, &s);

    v= sqrt(pow(u,2)+2*a*s);
    printf("%f",v);
}
