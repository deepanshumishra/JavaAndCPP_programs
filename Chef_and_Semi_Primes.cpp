/*

Chef likes prime numbers. However, there is one thing he loves even more. Of course, it's semi-primes! A semi-prime number is an integer which can be expressed as a product of two distinct primes. For example, 15=3⋅5 is a semi-prime number, but 1, 9=3⋅3 and 5 are not.

Chef is wondering how to check if an integer can be expressed as a sum of two (not necessarily distinct) semi-primes. Help Chef with this tough task!

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing the string "YES" if it is possible to express N as a sum of two semi-primes or "NO" otherwise.

Constraints
1≤T≤200
1≤N≤200
Example Input
3
30
45
62
Example Output
YES
YES
NO

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll p[201]={0};
ll pi[201]={0};
void prime(ll *p)
{
    for(int i=3;i<=200;i=i+2)
    {
        p[i]=1;
    }
    for(int i=3;i<=200;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=200;j+=i)
            {
                p[j]=0;
            }
        }
    }
    p[0]=p[1]=0;
    p[2]=1;
}
void factor(ll *pi)
{
   for(int i=2;i<=200;i++)
   {
       for(int j=i+1;i*j<=200;j++)
       {
           if(p[i]==1 && p[j]==1)
            {
                pi[i*j]=1;
            }
       }

   }
   pi[0]=0;
   pi[1]=0;
}
int main() {
    prime(p);
    factor(pi);
    
    //semiprime(pi);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(pi[i]==1 && pi[n-i]==1)
            {// cout<<i<<" "<<n-i<<endl;
                 flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
