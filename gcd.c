//program to find GCD(GREATEST COMMON DIVISOR) its a largest number that divides both the numbers

    #include<stdio.h>

int gcd(int a, int b); // Recursive function

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d and %d is %d \n", a, b, gcd(a, b));
}

int gcd(int a, int b)
{
    // Base cases
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Recursive case: subtract smaller from larger
    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}
