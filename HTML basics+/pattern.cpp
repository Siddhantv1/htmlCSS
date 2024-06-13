#include <iostream>
using namespace std;

void patternfunc(int x){
    string s= "       ";
    string t= "-------";
    for(int i = 1; i <= x; i ++){
        if(i%2 == 0){
            cout << s << t << endl;
        }
        else{
            cout << t << s << endl;
        }
    }
}


int main(){
    int m=0;
    cout << "Enter number of lines: ";
    cin >> m;
    patternfunc(m);
    return 0;
    
}