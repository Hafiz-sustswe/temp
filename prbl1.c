#include<stdio.h>
int main()
{
    long long int n,m;
    long long i,j,k, sum1=0,sum=0;

    scanf("%lld%lld",&n,&m);

    long long a[n],b[m];
    for(i=0;i<=n;i++)
    { scanf("%lld", &a[i]);
    }
    for(i=0;i<=n;i++)
    { sum1=sum1+a[i];
    }
    for(j=0;j<=n;j++)
    {
    scanf("%lld", &b[j]);
    sum=sum+b[j]*sum1;
    }
    printf("%lld\n",sum);
    return 0;
}
