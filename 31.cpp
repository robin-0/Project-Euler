/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);

int coins[10]={1,2,5,10,20,50,100,200};
long long int dp[10][300];

long long int calc(int i , int value)
{
    if(i>7)
    {
        if(value==200)
            return 1;
        else
            return 0;
    }

    if(dp[i][value]!=-1)
        return dp[i][value];

    long long int ret1=0,ret2=0;

    if(value+coin[i]<=200)
        ret1 = calc(i,value+coin[i]);

    ret2 = calc(i+1,value);

    dp[i][value]=ret1+ret2;

    return dp[i][value];
}

int main()
{
    memset(dp,-1,sizeof(dp));

    printf("%lld\n",calc(0,0));
    
    return 0;
}
