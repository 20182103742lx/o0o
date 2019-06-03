// o0o.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CFeet {
private:
	int feet;
	int inch;
	int check();
public:
	CFeet();
	CFeet(int x, int y);
	int setData(int x, int y);
	void displayFeet();
	void addData();
	CFeet operator+(CFeet &ot);
};
CFeet CFeet::operator+(CFeet &ot) {
	CFeet temp;
	temp.setData(feet + ot.feet, inch + ot.inch);
	return temp;
}
CFeet::CFeet() {
	feet = 0;
	inch = 0;

}
CFeet::CFeet(int x, int y) {
	feet = x;
	inch = y;
	check();
}
int CFeet::setData(int x,int y) {
	feet = x;
	inch = y;
	check();
	return 0;
}
int CFeet::check() {
	int temp = 1;
	if (inch >= 12) {
		feet = feet + inch / 12;
		inch = inch % 12;
		temp = 1;
	}
	return 0;
}
void CFeet::addData() {
	if (inch >= 12) {
		feet = feet + inch / 12;
		inch = inch % 12;
	}
}
void CFeet::displayFeet() {
	cout << feet << "英尺" << inch << "英寸" << endl;

}
int main()
{
	CFeet od1,od2, od3;
	od1.setData(1, 24);
	od2.setData(1, 25);
	od3 = od1 + od2;
	od3.displayFeet();
	return 0;
}

