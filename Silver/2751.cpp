#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int a;
    cin>> a;
    
    int arr[a];
    
    for(int i=0;i<a;i++) cin>>arr[i];

    sort(arr,arr+a);
    for(int i=0;i<a;i++) cout<< arr[i]<<"\n";
}