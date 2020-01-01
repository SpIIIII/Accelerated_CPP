#include <iostream>
#include <string>
using namespace std;


int main(){
string name;
cout << "Введите свое имя : ";
cin >> name ;

string gretting = "Grettings, "+ name +"!";
string spaces (gretting.size(),' ');
string second = "* "+spaces+" *" ;
string first (second.size(),'*');

cout << first << endl;
cout << second<< endl;
cout << "* " <<gretting<<" *"<< endl;
cout << second<< endl;
cout << first<< endl;

return 0;
}
