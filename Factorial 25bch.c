#include<stdio.h>
void main()
{
    int factorial(int);
    printf("%d",factorial(9));

}
int factorial(int n)
{
    return((n)?(n*factorial(n-1)):1);
}
