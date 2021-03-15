#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char w[n][1000],w[1000];
    for(i=0;i<n;i++)
    {
        scanf(" %1000[^\n]s",n[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(n[i],n[j])>0)
            {
                strcpy(w,n[i]);
                strcpy(n[i],n[j]);
                strcpy(n[j],w);
            }
        }
    }


    return 0;
}
