#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	char account;
	cout<<" Do you have An Account Or not yet? (Y) ";
	cin>>account;
	if(account == 'n' || account == 'N')
	{
		// variable for user information only in that case 

		string name, address, college, stu_gra, fname;
		int age, pass;
		double cnic, contact;
	
	//lets taking data from the user 
	system("cls");
	cout<<endl;
	cout<<" Enter Your Name :	";
	cin>>name;
	cout<<" Enter Your Father Name :	";
	cin.ignore();
	getline(cin, fname);
	cout<<" Enter Your age :	";
	cin>>age;
	cout<<" Enter Your CNIC :	";
	cin>>cnic;
	cout<<" Enter your Contact No :    ";
	cin>>contact;
	cout<<" Enter your address :	";
	cin.ignore();
	getline(cin, address);
	cout<<" Enter College name If Enrolled :	";
	cin.ignore();
	getline(cin, college);
	cout<<" Are you student  or graduate  or any other :	";
	cin.ignore();
	getline(cin, stu_gra);
	cout<<" Set Your Password :    ";
	cin>>pass;
	cout<<endl;
	cout<<endl;
	system("cls");
   	cout<<" \n Your Account Successfully Register with BookHarbor "<<endl;	    
	cout<<endl;
	cout<<" Press any key from the keyboard to continue "<<endl;
	
	getch();
	
	//register module end.
	
	}
	// Code for having an account in the library.
	else if(account == 'y' || account == 'Y')
	{
		system("cls");
		string username, pass;
		cout<<endl;
		cout<<" Please Enter Your Username Or Email :			";
		cin>>username;
		cout<<" Enter Your Password :	 		";
		cin>>pass;	    
		cout<<endl;
		cout<<" Press any key from the keyboard to continue "<<endl;
	
		getch();

	}
    //login Module end.

}
