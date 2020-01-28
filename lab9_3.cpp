//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std ;

int main(){
    int count =0 ;
    float sum =0 ;
    float asd , mean ;
    string textline ;
    ifstream source("score.txt") ;
    while (getline(source,textline))
    {
        cout << textline << endl ;
        sum += atof(textline.c_str()) ;
        asd +=pow(atof(textline.c_str()),2);
        count++ ;
    }
    
    cout << "Number of data = "<<count <<endl ;
    cout << "Mean = " << sum/count  << endl;
    cout << "Standard deviation = " << sqrt(asd/count-pow((1/count)*sum,2)) ;
    source.close();
    return 0 ;
}