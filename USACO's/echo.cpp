#include<bits/stdc++.h>

using namespace std;

    string a,b;

string adelante (string s, int k){
    return s.substr(0,k);
}
string atras(string s, int k){
    int f=s.size()-k;
    return s.substr(f);
}

int main(){

    freopen("echo.in","r",stdin);
    freopen("echo.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a;
    cin >> b;
    int mayor=0;
    long long tam;
    if (a.size()<=b.size())tam=a.size();
    else tam=b.size();

    for (int i=1; i<=tam; i++){
        string copya=adelante(a,i);
        string copyb=atras(b,i);
        if (copya==copyb){
            if (i>mayor)mayor=i;
        }
    }
    for (int i=1; i<=tam; i++){
        string copyb=adelante(b,i);
        string copya=atras(a,i);
        if (copya==copyb){
            if (i>mayor)mayor=i;
        }
    }
    cout << mayor;
    

    return 0;
}