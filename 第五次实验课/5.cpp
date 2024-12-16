#include <iostream>
using namespace std;

class Point {
private:
	double X;
	double Y;
public:
	Point(double X = 60, double Y = 80) {
		this->X = X;
		this->Y = Y;
	}
	void setPoint(double i, double j) {
		X += i;
		Y += j;
	}
	void display() {
		cout << "X = " << X << " | Y = " << Y << endl;
	}
};

int main() {

	Point P1, P2(2024, 2406);
	P1.display();
	P2.display();
	P1.setPoint(-60, -80);
	P2.setPoint(976, 594);
	P1.display();
	P2.display();
	system("pause");
	return 0;

}