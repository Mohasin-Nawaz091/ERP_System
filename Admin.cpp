#include "Admin.h"
#include "Student.h"
#include "Teacher.h"

Student s1;
Teacher t1;
void Admin::option() {
	adhome:
    cout << "Select Option : " << endl;
    cout << "1. Check Total Number Of students Registered" << endl;
    cout << "2. Check Student By Roll no" << endl;
    cout << "3. Check Pending Fee" << endl;
    cout << "4. Check Program Wise Details" << endl;
    cout << "5. Register a New Entity" << endl;
    cin >> opt;
    switch (opt){
    	case 1:{
    		
			break;
		}
		case 2:{
    		
			break;
		}
		case 3:{
    		
			break;
		}
		case 4:{
    		
			break;
		}
			case 5:{
				reg:
    		cout<<"Choose Option: "<<endl;
    		cout<<"1. Register a Student "<<endl;
    		cout<<"2. Register a Teacher "<<endl;
    		cout<<"0. For Back "<<endl;
    		cin>>opt2;
    		if(opt2==1){
    			cout<<"Student "<<endl;
    			s1.getData();
    			s1.showSimpleData();
    			
			}
			else if (opt2==2){
				cout<<"Teacher"<<endl;
				t1.getData();
				t1.showSimpleData();
		
			}
			else if (opt2==0){
				cout<<"Back"<<endl;
				goto adhome;
			}
			else {
				cout<<"Enter a valid option "<<endl;
				goto reg;
			}
			break;
		}
		default :{
			cout<<"Error! Enter a valid option"<<endl;
		goto adhome;
		}
	}
}
