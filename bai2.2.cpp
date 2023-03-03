#include<stdio.h>
#include<conio.h>

long T(int n)
{
    if(n == 1)
        return n;
    return T(n - 1) * n;
}

int main()
{
    int n, S;
    printf("\Nhap n = "); scanf("%d", &n);

    S = T(n);
    printf("S = %d", S);

    getch();
    return 0;
}

