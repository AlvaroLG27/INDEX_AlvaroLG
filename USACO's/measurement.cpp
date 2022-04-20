#include <bits/stdc++.h>

using namespace std;

class item{
public:
    int day, id, value;
    item(){};
    item(int d, int i, int v){
        day= d;
        id= i;
        value= v;
    }
    bool operator >(const item &a)const{
        return day>a.day;
    }
};

int N, C;
int val[]={7,7,7};
priority_queue<item, vector<item>, greater<item> >cola;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    string s;
    int a, b, c;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a>>s>>c;
        if(s=="Bessie")b= 0;
        if(s=="Elsie")b= 1;
        if(s=="Mildred")b= 2;
        cola.push(item(a, b, c));
    }

    bool actual[]={0,0,0}, 
    auxiliar[]={0,0,0}, 
    p= false;
    int day, id, value;
    while(!cola.empty()){
        day= cola.top().day;
        id= cola.top().id;
        val[id]+= cola.top().value;
        cola.pop();

        if(cola.size()>1 && cola.top().day==day)continue;
        int maxi= max(val[0], max(val[1], val[2]));
        for(int i=0;i<3;i++)if(val[i]==maxi)auxiliar[i]= true;

        for(int i=0;i<3;i++)if(auxiliar[i]!=actual[i]){
            actual[i]= auxiliar[i];
            p= true;
        }
        if(p)C++;
        p= false;
        auxiliar[0]= 0;
        auxiliar[1]= 0;
        auxiliar[2]= 0;
    }
    cout<<C;
    return 0;
}
