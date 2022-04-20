#include<bits/stdc++.h>

using namespace std;

char campo[250][250];

int main(){

    freopen("rplow.in","r",stdin);
    freopen("rplow.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int X,Y,L;
    int result=0;
    cin >> X >> Y >> L;
    for (int i=1; i<=Y; i++){
        for (int j=1; j<=X; j++){
            campo[i][j]='.';
        }
    }


    for (int i=0; i<L; i++){
        int x,y,xx,yy;
        cin >> x >> y >> xx >> yy; 
        for (int j=y; j<=yy; j++){
            for (int k=x; k<=xx; k++){
                campo[j][k]='*';
            }
        }
    }
    for (int j=1; j<=Y; j++){
        for (int k=1; k<=X; k++){
            if(campo[j][k]=='*')result++;
        }
    }
    cout << result;

    return 0;
}