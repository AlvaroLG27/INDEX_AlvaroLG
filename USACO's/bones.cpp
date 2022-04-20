#include<bits/stdc++.h>

using namespace std;

    int sumas[85];

int main(){

    freopen("bones.in","r",stdin);
    freopen("bones.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    cin >> a >> b >> c;
    for (int i=1; i<=a; i++){
        for (int j=1; j<=b; j++){
            for (int k=1; k<=c; k++){
                int sum=i+j+k;
                sumas[sum]++;
            }
        }
    }
    int mayor=0;
    int indice=0;
    for (int i=1; i<=80; i++){
        if (sumas[i]>mayor){
            mayor=sumas[i];
            indice=i;
        }
    }
    cout << indice;

    return 0;
}