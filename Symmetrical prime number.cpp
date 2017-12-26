#include <string>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

const int maxn=1000005;

int prime[maxn];
bool is_prime[maxn];

int sieve(int a,int b)
{
    int p = 0;
    for(int i = 0; i <= b; ++i)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 0; i <= b; ++i)
    {
        if(is_prime[i])
        {
            prime[p++] = i;
            for(int j = i + i; j <= b; j += i)
                is_prime[j] = false;
        }
    }
    return p;
}
bool huiwen(int n)
{
    stringstream ss;
    ss << n;
    string s,s1;
    s=ss.str();
    s1=s;
    reverse(s.begin(),s.end());
    if(s==s1)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        if(a>b){
            int tmp;
            tmp=a;
            a=b;
            b=tmp;
        }
        int cnt=0;
        int wei=0;
        for(int i=0; i<sieve(a,b); i++)
        {
            if(prime[i]!=0)
            {
                if(huiwen(prime[i])&&prime[i]>a)
                {
                    if(cnt!=0&&cnt%5==0) cout << endl; cnt++;
                    printf("%6d",prime[i]);
                    wei++;
                }

            }
        }
        if(wei!=0)
            cout << endl;
    }
}
