#include<bits/stdc++.h>

using namespace std;

bool chequeo (int R, int C);
int D[50][50];
int adyR[8]{-1, +1, 0, 0, -1, +1, -1, +1};
int adyC[8]{0, 0, -1, +1, -1, -1, +1, +1};
int F,L;

int main(){
    freopen("plumb.in","r",stdin);
    freopen("plumb.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int X,Y;
    int mayor=0;
    int rect=0;

    cin >> F >> L;
    for (int i=0; i<F; i++){
        for (int j=0; j<L; j++){
            cin >> D[i][j];
        }
    }

    for (int i=0; i<F; i++){
        for (int j=0; j<L; j++){
            X=i;
            Y=j;
            bool check = chequeo(X,Y);
            if (check == true){
                if (D[i][j]>mayor){
                    mayor = D[i][j];
                    X=i;
                    Y=j;
                    bool check = chequeo(X,Y);
                    if (check == true){
                        rect = D[i][j];
                    }
                }
            }
        }
    }
    cout << rect;
    return 0;
}

bool chequeo (int R, int C){
    bool check = false;
    for (int i=0; i<8; i++){
        int RR = R + adyR[i];
        int CC = C + adyC[i];
        if (CC >= 0 && CC<L && RR >= 0 && RR < F){
            if (D[RR][CC]==D[R][C]){
                check = true;
            }
        }
    }
    return check;
}



