#pragma once
#include <iostream>
#include <string>
using namespace std;


const int n = 5;
const char c1 = '1';
const char c2 = '2';
const char cq = 'q';


class cbuf {
private:
	int* tab;
	int* p; //wskazuje na poczatek zajetego obszaru
	int* q; //wskazuje na poczatek wolnego obszaru
	int cnt;
public:
	cbuf();
	~cbuf();
	void input(int x);
	int get();
};


char decyzja();