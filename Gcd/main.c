// C program to find GCD of two numbers
#include<stdio.h>
#include<conio.h>

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
       return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Driver program to test above function
int main()
{
    int a ,b;
    printf("Enter the Value Of A : ");
    scanf("%d",&a);
    printf("Enter the Value Of B : ");
    scanf("%d",&b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
