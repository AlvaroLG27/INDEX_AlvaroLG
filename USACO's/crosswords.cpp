#include<bits/stdc++.h>

using namespace std;

char trab[65][65];
bool flag[65][65];

int main(){
    freopen("crosswords.in","r",stdin);
    freopen("crosswords.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int F,C;
    int cont=0;
    cin >> F >> C;

    for (int i=0; i<=60; i++){
        for (int j=0; j<=60; j++){
            trab[i][j]='*';
            flag[i][j]=false;
        }
    }

    for (int i=1; i<=F; i++){
        for (int j=1; j<=C; j++){
            cin >> trab[i][j];
        }
    }
    for (int i=1; i<=F; i++){
        for (int j=1; j<=C; j++){
            if (trab[i][j]=='.' && (trab[i][j-1]=='*' || trab[i][j-1]=='#') && trab[i][j+1]=='.' && trab[i][j+2]=='.'){
                flag[i][j]=true;
                cont++;
            }
            else if (trab[i][j]=='.' && (trab[i-1][j]=='*' || trab[i-1][j]=='#') && trab[i+1][j]=='.' && trab[i+2][j]=='.'){
                flag[i][j]=true;
                cont++;
            }
        }
    }
    cout << cont << endl;
    for (int i=1; i<=F; i++){
        for (int j=1; j<=C; j++){
            if (flag[i][j]==true){
                cout << i << " " << j << "\n";
            }
        }
    }
    return 0;
}