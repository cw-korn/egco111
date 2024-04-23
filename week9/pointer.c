#include <conio.h>
#include <stdio.h>
int main()
{
    int a[12] = {2, 6, 7, 5, 4, 3, 9, 18, 11, 10, 15, 14};
    int *pa, *pb, i, m = 5;
    pa = &a[m];
    pb = &a[0];
    for (i = 0; i <= m; i++)
    {
        *(pa + i) += *(pb + i);
        *(pb + i - 1) += *(pa + m - i);
    }
    printf("%d\t%d\n", *(pa + i), *(pb + i));
    getch();
    return 0;
}