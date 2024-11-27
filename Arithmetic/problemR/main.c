#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a1, b1, c1, d1;
    long long int a2, b2, c2, d2;
    long long int a3, b3, c3, d3;
    long long int hasil1, hasil2, hasil3;


    scanf("(%ld+%ld)x(%ld-%ld)\n", &a1, &b1, &c1, &d1);
    scanf("(%ld+%ld)x(%ld-%ld)\n", &a2, &b2, &c2, &d2);
    scanf("(%ld+%ld)x(%ld-%ld)", &a3, &b3, &c3, &d3);

    hasil1 = (a1+b1)*(c1-d1);
    hasil2 = (a2+b2)*(c2-d2);
    hasil3 = (a3+b3)*(c3-d3);
    printf("%ld %ld %ld\n", hasil1, hasil2, hasil3);
    return 0;
}
