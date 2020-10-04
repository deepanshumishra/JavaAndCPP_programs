/*

Alice and Bob are studying for their class test together. The topic of the test is Prime Numbers. 
The preparation is getting too boring for their liking. To make it interesting, they turn it into a game.
 The winner will get an ice-cream treat from the other.

The game is called Count K-Primes. A number is a K-prime if it has exactly K distinct prime factors.
 The game is quite simple. Alice will give three numbers A, B & K to Bob. 
 Bob needs to tell Alice the number of K-prime numbers between A & B (both inclusive). If Bob gives the correct answer,
  he gets a point. If not, Alice gets a point. They play this game T times.

Bob hasn't prepared so well. But he really wants to win the game. He wants you to tell him the correct answer.

Input Format
First line of input contains a single integer T, the number of times they play.
Each game is described in a single line containing the three numbers A,B & K.


Sample Input
4
2 5 1
4 10 2
14 15 2
2 20 3

Sample Output
4
2
2
0
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p[100005]={0};
ll pi[100001]={0};
   
void prime(ll *p)
{  for(ll i=3;i<=100001;i=i+2)
        {
         p[i]=1;

        }
for(ll i=3;i<=100001;i+=2)
        {
            if(p[i]==1)
            {
                for(ll j=i*i;j<=100001;j=j+i)
                {
                    p[j]=0;
                }
            }
        }
        p[1]=0;
        p[0]=0;
        p[2]=1;

}
void factor(ll *pi)
{
    for(ll i=2;i<=100001;i++)
    {
        if(p[i]==1)
        {
            for(ll j=i;j<=100001;j+=i)
            {
                pi[j]=pi[j]+1;
            }
        }
    }
    pi[0]=0;
    pi[1]=0;
    pi[2]=1;
}
int main() {
    prime(p);
    factor(pi);
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b,k;
       cin>>a>>b>>k;
       ll count=0;
       for(ll i=a;i<=b;i++)
       {
           if(pi[i]==k)
           {
               count++;
           }
       }
       cout<<count<<endl;
   }
   return 0;
}