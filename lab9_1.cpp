#include<iostream>
using namespace std;

int main(){
	char grade ;
	int num = 1 ;
	int A=0 , B=0 , C=0 , D=0 , F=0 ;
	int count[5] = {A,B,C,D,F}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<num<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ 
			count[0]++ ;
		}else if(grade == 'B'){ 
			count[1]++ ;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){
			count[2]++ ;
		}else if(grade == 'D'){
			count[3]++ ;
		}else if(grade == 'F'){
			count[4]++ ;
		}
		else if(grade == '0'){
			break;
			}
		else { 
			cout << "Wrong input. Please input again.\n" ;
		} 
		num ++ ;
	}while(grade != '0');
	
	
	cout << "In total "<<num<<" students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "E = " << count[4] <<",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
