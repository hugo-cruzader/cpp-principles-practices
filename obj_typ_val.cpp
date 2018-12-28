/*
This include is replacing the following ones:
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

usign namespace std;
inline void keep_window_open(){ char ch; cin >> ch; }
*/
#include "std_lib_facilities.h"

int main(){
	cout <<"Please enter your first name (followed by an enter)...\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";

	return 0;
}