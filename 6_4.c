#include<stdio.h>
int main()
{
    int n,i,a,b,max=0,min=0,p;
    scanf("%d",&n);
    int student[n],sum[2];
    for(i=0; i<n; i++)
    {
        student[i]=0;
    }
    for(i=0; i<n; i++)
    {
        a=0;
        b=0;
        scanf("%d %d",&a,&b);
        student[a-1]+=1;
        student[b-1]+=1;
    }
    max=student[0];
    min=student[0];
    for(i=1; i<n; i++)
    {
        if(student[i]>max && student[i]!=0)
        {
            max=student[i];
        }
        if(min>student[i]&& student[i]!=0)
        {
            min=student[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(max==student[i])
        {
            sum[0]=i;
            break;
        }
    }
     for(i=1; i<n; i++)
    {
        if(min>student[i]&& student[i]!=0)
        {
            min=student[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(min==student[i])
        {
            sum[1]=i;
            break;
        }
    }
    if(sum[0]==sum[1])
    {
        for(i=0; i<n; i++)
        {
            if(min==student[i] && sum[1]!=i)
            {
                sum[1]=i;
                break;
            }
        }
    }
    printf("%d %d",sum[0]+1,sum[1]+1);
    return 0;
}
