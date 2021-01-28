//각 문자가 연속해서 나타날 경우->그룹 단어
//ex) aabbbccb는 b가 떨어져서 나타났으므로 그룹단어 아님
//입력: 첫째 줄에 단어의 개수 (100>n) 자연수, 둘째 줄부터 N개의 줄에 단어가 들어온다.
//단어는 소문자,중복x,길이 최대 100
//그룹 단어의 개수를 출력

#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool word[50];
    string str;
    int count =0;
    int n;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> str;    
        bool tf = true;
        fill_n(word, 50, 0);
        word[str[0] - 97] = 1;
        for (int j = 1; j < str.size(); j++) {
            if (str[j] != str[j - 1]) {
                if (word[str[j] - 97] == 1) { tf = false; break; }
                else word[str[j] - 97] = 1;
            } 
         }
        if (tf) count++;
    }
  cout << count;
}
