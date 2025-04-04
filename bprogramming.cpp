#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        int count = 1;

        int ook=n-k;

        if(ook%2!=0 ){
            ook=ook-k;
            count++;
        }
        int ss=k-1;

         if(ook%2==0 ){
            count+=ook/(k-1);
        }
        else if( ook%(k-1)){
              count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}

