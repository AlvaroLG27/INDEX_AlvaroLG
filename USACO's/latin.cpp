#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("latin.in","r",stdin);
    freopen("latin.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    string palabra;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> palabra;
        if(palabra[0]=='a'||palabra[0]=='e'||palabra[0]=='i'||palabra[0]=='o'||palabra[0]=='u'){
            cout << palabra << "cow" << endl;
        }
        else{
            for (int j=1; j<=palabra.size(); j++){
                if(j==palabra.size()){
                    cout << palabra[0] <<"ow" << endl;
                }
                else{
                    cout << palabra[j];
                }
            }
        }
    }

    return 0;
}