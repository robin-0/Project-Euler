/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005

int sieve[MAX]={0,};
int prime[MAX]={0,},primo=0;


int numberOfFactors(long long int number );
void setPrimes();

int main()
{

    long long int num=0,i,factors;

    setPrimes();

    for(i=1;;i++)
    {
        num+=i;
        factors=numberOfFactors(num);

        if(factors>500)
        {
            printf("%lld\n",num);
            break;
        }

    }


    return 0;

}


void setPrimes()
{
    int i,j;
    int lim=sqrt(MAX)+3;

    for(i=2;i<lim;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<MAX;j+=i)
            {
                sieve[j]=1;
            }
        }
    }

    for(i=2;i<MAX;i++)
    {
        if(sieve[i]==0)
            prime[primo++]=i;
    }
}



int numberOfFactors(long long int number )
{
    int temp,factors=1,i;

    for(i=0;i<primo;i++)
    {
        if(number==1)
            break;
        temp=0;
        while(number%prime[i]==0)
        {
            temp++;
            number/=prime[i];
        }

        if(temp!=0)
            factors*=(temp+1);
    }

    return factors;
}
