#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outfile("infile_test",ios::app);
	cout << "Enter A Sentence:\nEnd With Ctrl+Z\n" << endl;
	
	int n=0;
	//int m;
	char ch;

	//S[n++]=cin.get();
	while (cin.get(ch))
	{
		//cout << ch;
		outfile << ch;
	}

	outfile.close();
	
	cout << "Read From The Current File:"<<endl;
	ifstream infile("infile_test", ios::in);

	while (infile.get(ch))
		cout << ch;

	infile.close();
	return 0;

}
