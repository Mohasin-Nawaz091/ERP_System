#include "Admin.h"
#include "Student.h"

Student s1;
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
    		cin>>opt2;
    		if(opt2==1){
    			cout<<"Student "<<endl;
    			s1.getData();
    			
    			
			}
			else if (opt2==2){
				cout<<"Teacher"<<endl;
				
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
