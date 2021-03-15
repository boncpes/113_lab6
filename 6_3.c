#include<stdio.h>
int main()
{
    int n,q,i,j,x,y,max,k;
    char op;
    scanf("%d %d",&n,&q);
    int arr[n],pr[n];
    for(i=0; i<n; i++)
    {
        arr[i]=0;
        pr[i]=0;
    }
    k=0;
    i=0;
    do
    {
        scanf("%c",&op);
        if(op=='U')
        {
            scanf("%d %d",&x,&y);
            arr[x]=y;
        }
        if(op=='P')
        {
            scanf("%d %d",&x,&y);
            max=arr[x];
            for(j=x; j<=y; j++)
            {
                if(max<arr[j])
                {
                    max=arr[j];
                }
            }
            pr[k]=max;
            k++;
        }
        i++;
    }while(i!=q);
    for(j=0; j<=k; j++)
    {
        printf("%d\n",pr[j]);
    }
    return 0;
}
