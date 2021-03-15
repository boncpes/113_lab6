#include<stdio.h>
int main()
{
    int n,q,i,j,max,k,x,y,e,f;
    char op;
    scanf("%d %d",&n,&q);
    int arr[n],pr[999];
    for(i=0; i<n; i++)
    {
        arr[i]=0;
    }
    for(i=0; i<999; i++)
    {
        pr[i]=0;;
    }
    k=0;
    for(i=0;i<q;i++)
    {
        x=0;
        y=0;
        scanf(" %c",&op);
        if(op=='U')
        {
            scanf("%d %d",&x,&y);
            arr[x]=y;
        }
        else if(op=='P')
        {
            scanf("%d %d",&x,&y);
            max=0;
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
    }
    for(j=0; j<k; j++)
    {
        printf("%d\n",pr[j]);
    }
    return 0;
}
