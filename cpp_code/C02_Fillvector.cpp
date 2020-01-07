#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/*
int main()
{
	vector<string> v;
	ifstream in("C02_Scopy.cpp");
	string line;
	while (getline(in, line))
		v.push_back(line);
	for (int i = v.size() - 1; i >= 0; i--)
		cout << i << ": " << v[i] << endl;
}*/

/*
int main()
{
	vector<string> v;
	ifstream in("C02_Scopy.cpp");
	string line;
	string lines;
	while (getline(in, line))
		v.push_back(line);
	for (int i = 0; i < v.size(); i++)
		lines += v[i] + "\n";
	cout << "str: " << lines;
	return 0;
}*/