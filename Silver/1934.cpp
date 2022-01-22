//유클리드 호제법 
//첫째 줄에 테스트 케이스 개수, 둘째 줄 부터 T개의 줄에 걸쳐 ab가 줘짐
//첫째 줄부터 T개의 줄에 a와 b의 최소공배수를 입력받은 순서대로 하나씩 출력

#include<iostream>
#include<math.h>
using namespace std;
int gcd(int p, int q){
    if(p==0) return q;
    return gcd(q%p, p);

}
int main(){
    int A=0;
    int B=0;
    int T=0;

    cin>> T;

    for(int i=0;i<T;i++){
        cin>> A>> B;
        cout<< A*B/gcd(A,B)<<"\n";
    }
}