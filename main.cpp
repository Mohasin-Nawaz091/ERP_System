#include <iostream>
#include "Student.h"
#include "Admin.h"

using namespace std;

int main() {
    Student s;
    Admin a;
    int option;
	home:
	cout<<".-----------------------."<<endl;
	cout<<"|     Choose option :   |"<<endl;
	cout<<"|      1. Admin         |"<<endl;
	cout<<"|      2. Student       |"<<endl;
	cout<<".-----------------------."<<endl;
	cin>>option;
	switch(option){
		case 1:{
		    a.option();	
			break;
		}
		case 2:{
    	 s.getData();
		 s.showSimpleData();
			break;
		}
		default : {
//				system("cls");
			cout<<"Error! Enter Valid Option"<<endl;
			cout<<"--------------------------"<<endl;
		
			goto home;
		}
			
	}


    return 0;
}
