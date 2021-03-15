#include<stdio.h>
int main()
{
    int n,i,a,b,max=0,min=0,p;
    scanf("%d",&n);
    int student[n];
    for(i=0; i<n; i++)
    {
        student[i]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        student[a-1]+=1;
        student[b-1]+=1;
    }
    max=student[0];
    min=student[0];
    for(i=1; i<n; i++)
    {
        if(student[i]>max)
        {
            max=student[i];
        }
        if(min>student[i])
        {
            min=student[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(max==student[i])
        {
            printf("%d ",i+1);
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(min==student[i])
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}
