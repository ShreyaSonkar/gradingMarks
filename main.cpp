#include <iostream>

using namespace std;


int main() {
  int percent;
  cout <<"Enter your percentage: ";
  cin >> percent;
if (percent <= 100 && percent >= 85){
	cout << "Your Grade is A";
} 
else if (percent <= 84 && percent >= 70){
	cout << " Your Grade is B";
	}
else if (percent <= 69 && percent >= 45){
	cout << "Your Grade is C";
}
else {
cout << " You are fail";
}
	return 0;
	}