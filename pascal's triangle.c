#include<stdio.h>
#include<windows.h>
int main()
{
    int i=0,j,a[10]={1,1,1,1,1,1,1,1,1,1},b[10], k=1,n;
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    printf("\t\t\t\aPascal's Triangle\n\n\n");
    for(i=0;i<10;i++)
    {
        for(j=16;j>i;j--)
        printf("  ");
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, i+6);printf("1 ");
    if(i>1)
    {

        for(k=0;k<i-1;k++)
        {
            b[k]=a[k]+a[k+1];
            printf(" %2d ",b[k]);
        }
    for(k=0;k<i-1;k++)
            a[k+1]=b[k];
    }
    if(i)
        printf(" 1");
    printf("\n\n");
    }
printf("it\n\b\b\bWorld!");
}
