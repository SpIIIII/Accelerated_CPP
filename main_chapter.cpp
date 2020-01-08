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

    int pad = 0;
    cout << "Set the pad: ";
    cin >> pad;
    
    const int rows = pad*2+3;
    int r =0;
    
    const string::size_type cols = gretting.size()+ pad*2+2;
    string::size_type c = 0; 

    for (r;r < rows;++r){
        while (c < cols){
            if (r == pad+1 && c == pad+1){
                cout << gretting;
                c+= gretting.size();
            }else{
                if (r == 0 || r == rows-1 || c ==0 || c == cols-1){
                    cout <<'*';}
                else{
                    cout << ' ';} 
                ++c;
            }
            
        }
        cout<<endl;
        c=0;
    }

}

int main(){
    // chapter_1();
    chapter_2();

    return 0;
}
