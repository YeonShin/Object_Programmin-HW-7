#pragma once
class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram(); 
	~Ram();
	char read(int adress);
	void write(int adress, char value);

};