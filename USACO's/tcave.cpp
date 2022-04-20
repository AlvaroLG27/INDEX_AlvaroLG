#include <bits/stdc++.h>

using namespace std;

int P, NS, T, cave[5000][2];
vector<int>nodo;

bool tesoro(int ini){
    bool flag = false;

    if (cave[ini][0]==0){
        if(ini==T-1){
            return 1;
        }
        else {
            return 0;
        }
    }

    for(int i=0; i<2; i++){
        int ady = cave[ini][i];
        nodo.push_back(ady);
        bool a = tesoro(ady);
        if (a == true){
            flag= true;
        }
        else {
            nodo.pop_back();
        }
    }
    return flag;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    freopen("tcave.in", "r", stdin);
    freopen("tcave.out", "w", stdout);

    cin >> P >> NS >> T;
    for(int i=0;i<NS;i++){
        int a, b, c;
        cin>> a >> b >> c;
        cave[a-1][0]=b-1;
        cave[a-1][1]=c-1;
    }

    nodo.push_back(0);
    tesoro(0);

    cout << nodo.size() << endl;

    for(int i=0; i<nodo.size(); i++){
        cout << nodo[i]+1 <<endl;
    }

    return 0;
}
