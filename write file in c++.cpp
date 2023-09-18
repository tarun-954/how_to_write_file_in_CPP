#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string s;
	ofstream of("result.txt");
	of <<"I am from batch K22BS";
	of.close();
	ifstream inf("result.txt");
	getline(inf,s);
	cout<<s;
	inf.close();

}
