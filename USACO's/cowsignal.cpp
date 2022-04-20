#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int F,C,K;
    cin >> F >> C >> K; 
    for (int i=0; i<F; i++){
        string s;
        cin >> s;
        for (int f=0; f<K; f++){
            for (int j=0; j<s.size(); j++){
                for (int k=0; k<K; k++){
                    if (s[j]=='X'){
                        cout << "X";
                    }
                    else {
                        cout << ".";
                    }
                }
            }
            cout << "\n";
        }
        
    }

    return 0;
}