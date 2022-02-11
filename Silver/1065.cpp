#include<iostream>
using namespace std;

bool hansoo(int n){
    int a1,a2,a3;
    a1 = n/100;
    a2= n%100/10;
    a3 = n%10;

    if( a2*2 ==( a1 + a3) || n < 100 ) return true;
    else return false;
}

int main(){
    int N;
    int count = 0;

    cin >> N;
    for(int i = 1 ; i <= N ; i ++ ){
        if(hansoo(i)) count++;
    }
    cout<<count;
}
