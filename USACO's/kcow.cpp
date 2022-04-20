#include<bits/stdc++.h>

using namespace std;

class clase{
public:
    int x;
    int y;

    clase(int xx, int yy){
        x = xx;
        y = yy;
    };
};

char campo[160][160];
int pastizal[160][160];
bool visitadas[160][160];

int ady_x[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int ady_y[] = {2, 2, 1, 1, -1, -1, -2, -2};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("kcow.in", "r", stdin);
    freopen("kcow.out", "w", stdout);

    int F,C;
    int Kr,Kc;
    int Hr,Hc;
    int aux=0;

    cin >> C >> F;

    for(int i=0; i<F; i++){
        for(int j=0; j<C; j++){
            cin >> campo[i][j];
            if (campo[i][j]=='K'){
                Kr=i;
                Kc=j;
            }
            if (campo[i][j]=='H'){
                Hr=i;
                Hc=j;
            }
        }
    }

    pastizal[Hr][Hc]=0;
    visitadas[Hr][Hc]=true;
    queue<clase> cola;
    cola.push(clase(Hr, Hc));
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
        for(int i=0; i<8; i++){
            int xx = a + ady_x[i];
            int yy = b + ady_y[i];
            if(xx>=0 && xx<F && yy>=0 && yy<C){
                if(!visitadas[xx][yy] && campo[xx][yy]!='*'){
                    visitadas[xx][yy] = true;
                    cola.push(clase(xx, yy));
                    pastizal[xx][yy]=pastizal[a][b]+1;
                }
            }
        }
    }

    cout << pastizal[Kr][Kc];

    return 0;
}
