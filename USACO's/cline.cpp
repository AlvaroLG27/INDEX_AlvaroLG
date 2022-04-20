#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("cline.in","r",stdin);
    freopen("cline.out","w",stdout);

    int N;
    char A,B;
    int K;
    int cont=1;
    deque <int> vacas;

    cin >> N;

    for (int i=0; i<N; i++){
        cin >> A;
        if (A=='A'){
            cin >> B;
            if (B=='L'){
                vacas.push_front(cont);
            }
            if (B=='R'){
                vacas.push_back(cont);
            }
            cont++;
        }
        if (A=='D'){
            cin >> B >> K;
            for (int j=0; j<K; j++){
                if (B=='L'){
                    vacas.pop_front();
                }
                if (B=='R'){
                    vacas.pop_back();
                }
            }
        }
    }
    int q = vacas.size();
    for(int i=0; i<q; i++){
        cout << vacas[i] << "\n";
    }


    return 0;
}
