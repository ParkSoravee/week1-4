#include <iostream>
using namespace std;

int main() {
	int score[5][4];
	int total[] = { 0,0,0,0,0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> score[i][j];
			total[i] += score[i][j];
		}
	}
	int winScore = 1;
	int winner = 0;
	for (int i = 0; i < 5; i++) {
		if (total[i] > winScore) {
			winScore = total[i];
			winner = i + 1;
		}
	}
	cout << winner << " " << winScore;

	return 0;
}