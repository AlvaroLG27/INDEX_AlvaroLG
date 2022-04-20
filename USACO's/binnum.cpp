#include <bits/stdc++.h>

using namespace std;

string binnum;

int main(){
    freopen("binnum.in","r",stdin);
    freopen("binnum.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,result=0;
    cin >> N;
    result = N;
    for (int i=0; result!=0; i++){
        if (result%2==0){
            binnum += "0";
        }
        if (result%2==1){
            binnum += "1";
        }
        result = result/2;
    }
    reverse(binnum.begin(), binnum.end());
    cout << binnum;
    return 0;
}
