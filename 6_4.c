#include<stdio.h>
void show(int s[],int n,int m);
int main()
{
    int n,i,a,b,max,min,p;
    scanf("%d",&n);
    int student[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        student[a]+=1;
        student[b]+=1;
    }
    max=student[0];
    min=student[0];
    for(i=1;i<n;i++)
    {
        if(max<student[i])
        {
            max=student[i];
        }
        if(min>student[i])
        {
            min=student[i];
        }
    }
    show(student,n,max);
    show(student,n,min);
    return 0;
}
void show(int s[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(m==s[i])
        {
            printf("%d ",i);
            break;
        }
    }
}
