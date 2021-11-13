#include <stdio.h>
 
int factorial(int n)
{
    int fact = 1,i;
 
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
 
    return fact;
}
 
int main()
{
    int n = 5;
    printf("The Factorial of %d is %lu", n, factorial(n));
 
    return 0;
}
