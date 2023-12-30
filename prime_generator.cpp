#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void sieve(long long m,long long n)
{
    vector<bool>isprime(n+1,true);
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(isprime[i])
        {
            for(long long j=i*i;j<=n;j=j+i)
            {
                isprime[j]=false;
            }
        }
    }
    for(long long j=m;j<=n;j++)
    {
        if(isprime[j])
        {
            cout<<j<<endl;
        }
    }
}
int main()
{
    long long t,m,n;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}