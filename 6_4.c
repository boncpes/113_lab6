#include<stdio.h>
int max_min(int s[],int n);
int main()
{
    int n,i,a,b,max,min,p;
    scanf("%d",&n);
    int student[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b)
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
            max=student[i];
        }
    }
    p=0;
    for(i=0;i<n;i++)
    {
        if(p==0)
        {
            p=max_min(s)
        }
        else
        {

        }
    }
    return 0;
}
int max_min(int s[],int n,m)
{
    for(int i=0;i<n;i++)
    {
        if(m==s[i])
        {

        }
    }

}
