// Singleon.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "Singleon.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	Singleon* s1 = Singleon::GetInstance();
	Singleon* s2 = Singleon::GetInstance();
	if( s1 == s2)
	{
		cout<<"equal"<<endl;
	}
	cin.ignore();
	return 0;
}

