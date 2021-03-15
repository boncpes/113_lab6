#include<stdio.h>
int main()
{
    int n,i,correct,incorrect;
    scanf("%d",&n);
    int b[n],w[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    correct=0;
    incorrect=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==w[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
    printf("%d %d",correct,incorrect);
    return 0;
}
