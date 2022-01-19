#include<iostream>
#include <string>
using namespace std;

int main(){
    string croa[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    string word;
    int output =0 ;
    int pos = 0; 
    int str = 0;
    cin>>word;

    for(int i=0;i<8;i++){
        pos=0;
        while (word.find(croa[i], pos) != string::npos) {
            pos=word.find(croa[i]);
            word.replace(pos,croa[i].length(),"*");
        }
    }

    cout << word.length();
}