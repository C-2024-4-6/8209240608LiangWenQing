#include <iostream>
using namespace std;

class Score {
private:
	int ID;
	int score;
public:
	Score(int ID, int score) {
		this->ID = ID;
		this->score = score;
	}
	int getScore() {
		return score;
	}
	int getID() {
		return ID;
	}
};

void max(Score* score) {
	int max = score[0].getScore();
	int maxNumber = 1;
	int maxID[5];
	maxID[0] = score[0].getID();
	for (int i = 1; i < 5; i++) {
		if (score[i].getScore() >= max) {

			// 多個並列第一特殊處理
			if (score[i].getScore() == max) {
				maxNumber++;
			}
			else maxNumber = 1;

			max = score[i].getScore();
			maxID[maxNumber - 1] = score[i].getID();
		}
	}
	cout << "分数最高的学生的学号为：";
	cout << maxID[0];

	// 多個並列第一特殊處理
	for (int i = 1; i < maxNumber; i++) {
		cout << " , " << maxID[i];
	}
	cout << endl;
}

int main() {

	Score Class2406[5] = {
		Score(240601,95),
		Score(240608,86),
		Score(240615,95),
		Score(240627,97),
		Score(240631,88)
	};
	max(Class2406);

	system("pause");
	return 0;
}