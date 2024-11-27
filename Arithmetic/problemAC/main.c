#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int group;

    scanf("%d", &group);

    int hasil = (pow(2, group)-1);
    //hasil -= 1;

    printf("%d\n", hasil);
    return 0;
}
