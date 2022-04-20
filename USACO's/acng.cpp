#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("acng.in","r",stdin);
    freopen("acng.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    long long points=0;

    cin >> N;
    while (N!=1){
        if (N%2==0){
            N=N/2;
        }
        else if (N%2==1){
            N=(N*3)+1;
        }
        points++;
    }
    cout << points;

    return 0;
}