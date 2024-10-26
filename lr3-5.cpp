#include <iostream> 
#include <math.h>
using namespace std;
int main() {
 setlocale(LC_ALL, "RU");
 int a, b, c;
 bool n = false;
 cout << "Введите числа";
 cin >> a >> b >> c;
 if (a % 2 == 1 || b % 2 == 0 || c % 2 == 0) {
	 n = true;
 }
 else {
	 cout << "No";
 }
 if (n) {
	 if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1) {
		 cout << "Yes";
	 }
	 else {
		 cout << "Yes";
	 }
 else { cout << "No"; }
 }
 return 0;



