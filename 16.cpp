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

char string[10005]="2";

int main()
{
    int i,j,carry,temp,n,len;
    long long int sum=0;




    for(i=1; i<1000; i++)
    {
        carry=0;
        for(j=0; string[j] ; j++)
        {
            temp=carry + (string[j]-'0')*2;

            if(temp<10)
            {
                string[j]=temp+'0';
                carry=0;
            }
            else
            {
                string[j]=(temp)%10+'0';
                carry=(temp)/10;
            }
        }

        if(carry!=0)
        {
            string[j]=carry+'0';
            string[j+1]='\0';
            carry=0;
        }



    }

    for(j=0; string[j] ;j++)
        sum+=string[j]-'0';

    printf("%lld\n",sum);



    return 0;

}
