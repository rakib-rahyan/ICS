#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter E=mc^2 formula input E and m then see output:");

    float E, m, c;
    scanf("%f%f",&E,&m);

    c=sqrt(E/m);

    printf("your c value is= %f",c);

    return 0;
}
