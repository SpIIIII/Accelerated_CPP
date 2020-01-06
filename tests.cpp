#include <iostream>
#include <string>
using namespace std;

void test_1_3(){
    cout << "как вас зовут? ";
    string name;
    cin >> name;
    cout << "привет, " << name
    << endl << "а как вас зовут? ";
    cin >> name;
    cout << "привет, " << name
    << "; с вами также было приятно познакомиться!"
    << endl;

}

int main(){
    test_1_3();
    return 0;
}