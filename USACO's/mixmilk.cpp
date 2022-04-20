#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int B1, B2, B3;
    int C1, C2, C3;

    cin >> C1 >> B1;
    cin >> C2 >> B2;
    cin >> C3 >> B3;

    for (int i=0; i<=33; i++){
        if (i<33){
            for (int j=0; j<3; j++){
                if (j==0){
                    B2+=B1;
                    B1=0;
                    if (B2>C2){
                        B1=B2-C2;
                        B2=C2;
                    }
                }
                if (j==1){
                    B3+=B2;
                    B2=0;
                    if (B3>C3){
                        B2=B3-C3;
                        B3=C3;
                    }
                }
                if (j==2){
                    B1+=B3;
                    B3=0;
                    if (B1>C1){
                        B3=B1-C1;
                        B1=C1;
                    }
                }
            }
        }
        if (i==33){
            B2+=B1;
            B1=0;
            if (B2>C2){
                B1=B2-C2;
                B2=C2;
            }
        }
    }

    cout << B1 << endl;
    cout << B2 << endl;
    cout << B3 << endl;

    return 0;
}