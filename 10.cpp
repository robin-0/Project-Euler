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


int sieve[1000005]={0,};

int main()
{
    int i,j;
    long long int sum=0;
    int lim=2000000;
    int pim=sqrt(lim)+1;


    for(i=2;i<1416;i++)
    {
        if(( sieve[i/32]&(1<<(i%32)))==0)
        {



            for(j=i*i;j<lim;j+=i)
                sieve[j/32]|=1<<(j%32);
        }
    }

    for(i=2;i<lim;i++)
    {
        if(( sieve[i/32]&(1<<(i%32)))==0)
        {
            sum+=i;
        }
    }

    printf("%lld\n",sum);

    return 0;

}
