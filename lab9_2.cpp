//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<fstream>
#include<iostream>
#include<string>
using namespace std ;

int main(){
    ifstream f1("cheerbook.txt");
    ofstream f2("cheerbook_copy.txt");
    string s;
    f2<<"-------------------- SOTUS ---------------------"<<endl;
    while(getline(f1,s)){
        f2<<s<<endl ;
    }
    f2<<"-------------------- SOTUS ---------------------";
    f1.close();
    
    return 0 ;
}