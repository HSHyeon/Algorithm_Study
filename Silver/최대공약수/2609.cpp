//두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

#include<iostream>
using namespace std;

int gcd(int p, int q){
    if(p==0) return q;
    return gcd(q%p, p);

}
int main(){
    int A=0;
    int B=0;

    cin>> A>> B;
    cout<<gcd(A,B)<<"\n";
    cout<< A*B/gcd(A,B);
    

}
