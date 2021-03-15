#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char b[n][1000],w[1000];
    for(i=0;i<n;i++)
    {
        scanf(" %1000[^\n]s",b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(b[i],b[j])>0)
            {
                strcpy(w,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],w);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",b[i]);
    }
    return 0;
}
