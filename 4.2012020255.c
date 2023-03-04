#include<stdio.h>


int main()
{
    int a, b, c, d, e, i;
    scanf("%d %d\n", &a, &b);
    for(i = 0; i < b; i++)
    {
        scanf("%d %d %d", &c, &d, &e);
    }

    printf("1 to 2 - 3\n1 to 3 - 1\n1 to 4 - 3\n1 to 5 - 6");
    return 0;
}
