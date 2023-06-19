#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "메모리 제거됨";
}
char Ram::read(int adress) {
	return mem[adress];
}
void Ram::write(int adress, char value) {
	if (adress < 0 || adress > 100 * 1024) {
		cout << "잘못된 주소를 입력했습니다." << endl;
	}
	else {
		mem[adress] = value;
	}

}