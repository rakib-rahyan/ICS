// C program to find maximum between two numbers
#include<stdio.h>
int main()
{
    int first, second;
    printf("Enter you first intger or float number:");
    scanf("%f", &first);
    printf("Enter you second intger or float number:");
    scanf("%f", &second);

    if(first>second){
        printf("The first number is maximum");
    }
    else if(second>first){
        printf("The second number is maximum");
    }
    else if(first==second){
        printf("Two number is equal");
    }
   else {
    printf("This is not valid");
   }
   return 0;
}
