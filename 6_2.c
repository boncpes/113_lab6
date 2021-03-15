#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c,ic;
    scanf("%d",&n);
    char b[n],w[n];
    scanf(" %[^\n]s",b);
    scanf(" %[^\n]s",w);
    c=0;
    ic=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==w[i])
        {
            c++;
        }
        else
        {
            ic++;
        }
    }
    printf("%d %d",c,ic);
    return 0;
}
