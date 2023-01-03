#include<iostream>
#include<string>
using namespace std;

int main(){
	int j = 1;
	string grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << j << "]: ";
		cin >> grade; 
		if(grade=="A"){ 
			count[0]+=1;
			j++;
		}else if(grade=="B"){ 
			count[1]+=1;
			j++;			
		}else if(grade=="C"){
			count[2]+=1;
			j++;
		}else if(grade=="D"){
			count[3]+=1;
			j++;
		}else if(grade=="F"){
			count[4]+=1;
			j++;
		}
		else if(grade!="0"){ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(grade!="0");
	
	
	cout << "In total "<< j-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	
	
	return 0;
}
