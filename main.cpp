#include <iostream>
#include <cstring>


using namespace std;


int main()
{
    cout << "What is your name?" << endl;
    string name = "";
    cin >> name;
    cout << "How old are you?" << endl;
    int age = 0;
    cin >> age;
    cout << "Hello " + name << endl;
    cout << "You are " + age + " years old." << endl;

    return 0;
}
