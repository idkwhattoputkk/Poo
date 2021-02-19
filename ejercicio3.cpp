#include <iostream>
#include <cstring>

using namespace std;

struct contact
{
  int number;
  string name;
};

int main(){

	struct contact conts[5];
  	int i;

	for(i=0; i<5; i++){                   		//taking values from user
		cout << "contact " << i + 1 << endl;
		cout << "Enter his number" << endl;
		cin >> conts[i].number;
		cout << "Enter name" << endl;
		cin >> conts[i].name;
	}

	for(i=0; i<5; i++){							//printing values
		cout << "Contact " << i + 1 << endl;
		cout << "number : " << conts[i].number << endl;
		cout << "Name : " << conts[i].name << endl;
	return 0;
}