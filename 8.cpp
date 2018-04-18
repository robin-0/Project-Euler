/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    char inp[MAX];
    long long int product,max=0;
    int len,i,j;

    gets(inp);
    len=strlen(inp);

    for(i=0;i<len;i++)
        inp[i]-=48;

    for(i=0;i<len;i++)
    {
        product=1;
        for(j=0;j<13;j++)
        {
            if((i+j)>=len)
                break;

            product*=inp[i+j];
        }

        if(product>max)
            max=product;
    }
    printf("%lld\n",max);

    return 0;
}

