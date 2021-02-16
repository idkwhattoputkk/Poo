#include <iostream>
#include <string.h>
using namespace std;

int age;
char gender[20];
float height;

void ageFunction(int num1);
void genderFuntion(char c[20]);
void heightFunction(float num1);

int main(){
    int a;
    char c[20];
    float f;
    cout << "Enter your age: ";
	cin >> a;
    cout << "Enter your gender: ";
	cin.getline(c, 20);
    cout << "Enter your age: ";
	cin >> f;
    void ageFunction(int a);
    void genderFuntion(char c[20]);
    void heightFunction(float f);

    cout << endl << "You entered " << endl;
	cout << "Age = " << age << endl;
	cout << "Name = " << gender << endl;
	cout << "Height = " << height << endl;

    return 0;
}
void ageFunction(int num1){
    age = num1;
}
void sexFuntion(char c[20]){
    strcpy (c, gender);
}
void heightFunction(float num1){
    height = num1;
}