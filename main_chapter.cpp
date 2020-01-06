#include <iostream>
#include <string>
using namespace std;

void chapter_1(){
    string name;
    cout << "Enter your name : ";
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
    

}

void chapter_2(){
    string name;
    cout << "Enter your name : ";
    cin >> name ;
    const string gretting = "Grettings, "+ name +"!";

    const int pad = 1;
    const int rows = pad*2+3;

    int r =0;
    while (r!=rows){
        cout<<endl;
        ++r;
    }

}

int main(){
    chapter_1();
    chapter_2();

    return 0;
}
