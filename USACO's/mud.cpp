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

char campo[1100][1100];
int pastizal[1100][1100];
bool visitadas[1100][1100];

int ady_x[] = {0, 0, -1, 1};
int ady_y[] = {1, -1, 0, 0};


int main(){
    freopen("mud.in","r",stdin);
    freopen("mud.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    

    int X,Y;
    int N;
    int Gf,Gc;
    int Bf,Bc;
    int aux=0;

    cin >> X >> Y >> N;
    campo[Y+500][X+500]='B';
    Bf=Y+500;
    Bc=X+500;

    Gc=500;
    Gf=500;

    for (int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        campo[b+500][a+500]='M';
    }

    pastizal[Gf][Gc]=0;
    visitadas[Gf][Gc]=true;
    queue<clase> cola;
    cola.push(clase(Gf, Gc));
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
        for(int i=0; i<4; i++){
            int xx = a + ady_x[i];
            int yy = b + ady_y[i];
            if(xx>=0 && xx<1100 && yy>=0 && yy<1100){
                if(!visitadas[xx][yy] && campo[xx][yy]!='M'){
                    visitadas[xx][yy] = true;
                    cola.push(clase(xx, yy));
                    pastizal[xx][yy]=pastizal[a][b]+1;
                }
            }
        }
    }

    cout << pastizal[Bf][Bc];

    return 0;
}