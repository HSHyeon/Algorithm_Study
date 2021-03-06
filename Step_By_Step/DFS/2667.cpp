// 첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.
//
//첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.


#include <iostream>
#include <vector>
using namespace std;
#define MAX 25

int map[MAX][MAX]; //지도
int check[MAX][MAX];
vector <int> house; //단지 속하는 집 수

void complex(int x, int y, int index) {
	if (check[x][y] == 1)return;
	check[x][y] = 1;
	house[index]++;
	if (map[x][y] == 1) {
		complex(x + 1, y,index);
		complex(x, y + 1,index);
	}
}

int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) 
	for(int j=0;j<num;j++){
		scanf_s("%1d", &map[i][j]);
	}

	int k = 0;

	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
		{if()
			complex(i, j, k);
			k++;
		}
	cout << house[0];
}



/*
<그림 1>과 같이 정사각형 모양의 지도가 있다. 
1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 
철수는 이 지도를 가지고 연결된 집들의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다. 
여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 
대각선상에 집이 있는 경우는 연결된 것이 아니다. <그림 2>는 <그림 1>을 단지별로 번호를 붙인 것이다. 
지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
*/
