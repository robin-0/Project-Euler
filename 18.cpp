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

int dp[210][105];
int rock[210][105];
int n;

long long int climb(int r , int c);

long long int climb(int r , int c)
{
    if(c<=r&&r<=n)
    {
        if(dp[r][c]!=-1)
            return dp[r][c];

        int ret1=rock[r][c],ret2=rock[r][c];

        ret1+=climb(r+1,c);

        ret2+=climb(r+1,c+1);

        dp[r][c]=BIGGER(ret1,ret2);
        //printf("\t\t%d %d %d\n",r,c,ret1);
        //printf("\t\t\t%d %d %d\n",r,c,ret2);
        return dp[r][c];
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i,j;
    n=15;

    for(i=0;i<210;i++)
        for(j=0;j<105;j++)
            dp[i][j]=-1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            getInt(rock[i][j]);
        }
    }

    printf("%lld\n",climb(1,1));


    return 0;

}

