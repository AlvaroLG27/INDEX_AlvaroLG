#include <bits/stdc++.h>

using namespace std;

int N, aux;
long long sol;
int recop[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("iou.in", "r", stdin);
    freopen("iou.out", "w", stdout);

    cin>>N;
    for(int i=1;i<=N;i++){
        sol++;
        cin>>recop[i];
        recop[i] += recop[i-1];

        if(recop[i]<0 && !aux){
            aux = i;
        }
        if(recop[i]>-1 && aux){
            sol += (i-aux)*2;
            aux = 0;
        }
    }
    cout<<sol;
    return 0;
}
