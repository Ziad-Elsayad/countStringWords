#include <iostream>
#include <string>
using namespace std;

bool yeh(char x) {
	int arr[52];
	for (int i = 'A'; i <= 'Z'; i++)
		arr[i - 65] = i;
	for (int i = 'a'; i <= 'z'; i++)
		arr[i - 71] = i;
	for (int i = 0; i < 52; i++)
		if (x == arr[i])
			return true;
	return false;
}
string s(string d) {
	for (int i = 0; i < d.length(); i++)
		if (!yeh(d[i]))
			d[i] = ' ';
	return d;
}
string z(string d) {
	for (int i = 0; i < d.length(); i++) {
		if (d[i] == ' ')
			d[i] = 'a';
		else
			break;
	}

	for (int i = 1; i < d.length(); i++)
		if (d[i] == d[i - 1])
			d[i - 1] = 'a';
	return d;
}
int counter(string d) {
	int counter = 1;
	for (int i = 0; i < d.length() - 1; i++)
		if (d[i] == ' ')
			counter++;
	return counter;
}
int main()
{
	string str;
	getline(cin, str);
	cout << counter(z(s(str)));
}