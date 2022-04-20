#include<bits/stdc++.h>

using namespace std;

string Alice = "Alice";
string Betsy = "Betsy";
string Corinne = "Corinne";
string Debra = "Debra";
string cadena;

int main(){
    freopen("bankbal.in","r",stdin);
    freopen("bankbal.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int efectivA = 0;
    int efectivB = 0;
    int efectivC = 0;
    int efectivD = 0;
    int val=0;

    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> cadena;
        if (cadena==Alice){
            cin >> val;
            efectivA += val;
        }
        if (cadena==Betsy){
            cin >> val;
            efectivB += val;
        }
        if (cadena==Corinne){
            cin >> val;
            efectivC += val;
        }
        if (cadena==Debra){
            cin >> val;
            efectivD += val;
        }
        val=0;
    }

    cout << Alice << " " << efectivA << endl;
    cout << Betsy << " " << efectivB << endl;
    cout << Corinne << " " << efectivC << endl;
    cout << Debra << " " << efectivD << endl;


    return 0;
}
