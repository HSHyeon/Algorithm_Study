#include<iostream>
#include<math.h>
using namespace std;


int fac(int N){
    if(N!=0) return N*fac(N-1);
    else return 1;
}

int main(){
    int N;

    cin>>N;
    cout<<fac(N);
}

