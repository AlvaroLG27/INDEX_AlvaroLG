#include<bits/stdc++.h>

using namespace std;

int bol [360][360];

int main(){
    freopen("bowl.in","r",stdin);
    freopen("bowl.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int result = -1;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cin >> bol[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0) bol[i][j] = bol[i-1][j] + bol[i][j];
            else if(j < i){
                bol[i][j] = max(bol[i-1][j], bol[i-1][j-1]) + bol[i][j];
            }    
            else if(j == i){
                bol[i][j] =  bol[i-1][j-1]  + bol[i][j];
            }   
        }
    }
    for(int i = 0; i < n; i++){
        result = max(result, bol[n-1][i]);
    }
    cout << result;

    return 0;
}