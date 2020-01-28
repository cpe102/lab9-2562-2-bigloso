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
    double count =0 ;
    float sum =0 ;
    float asd=0, mean ;
    string textline ;
    ifstream source("score.txt") ;
    while (getline(source,textline))
    {
        sum += atof(textline.c_str()) ;
        asd +=pow(atof(textline.c_str()),2);
        count++ ;
    }
    
    cout << "Number of data = "<<count <<endl ;
    cout << "Mean = " << sum/count  << endl;
    cout << "Standard deviation = " << sqrt(asd/count-pow(sum/count,2)) ;
    source.close();
    return 0 ;
}