// (a) Miditation or silence option sittenting 
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ()
{
	string name =  "qasim" ;
	int select, rent_per_set, hour, total, seat;
	int price[10] = {9,8,7,4,5,6,3,3,1,1};
	int seats[10] = {4,2,6,8,45,21,55,77,11,89};
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<endl<<endl;
	cout<<" Please kindly read our terms and condition carefully !"<<endl;
	//terms and condition for setting in library 
	cout<<" (1) setting be patiant and calm "<<endl;
    cout<<" (2) kepping distane from the freiends during yllur library hours "<<endl; 
	cout<<" (3) no phone  calss are allowed inside the room of scilence and meditation "<<endl; 
	cout<<" (4) spacial seat are reeserved for scilence and meditaion in the librayr "<<endl<<endl<<endl;
	cout<<endl<<endl<<endl;
	cout<<" Press enter button to continue "<<endl;
	cout<<" ";
	getch();
	system("cls");
	//loo to shaw the reserved seat 
	cout<<endl;
	cout<<" The folllowing chair and table are empty to set on "<<endl;
	cout<<endl;
	cout<<" chair No       Rent per hour"<<endl;
	for(int i=0; i<10; i++)
	{
		if(seats[i]>9)
		{
		cout<<" "<<seats[i] <<"------------------"<<price[i]<<endl;
	    }
		else
		cout<<" "<<seats[i] <<"-------------------"<<price[i]<<endl;
	}
	cout<<endl;
	
	// selecting seats and thier price also
	cout<<" Please Select your chair number "<<endl;
	cout<<" ";
	cin>>select;
	
	switch(select)
	{
		case 4:
			rent_per_set = 9;
			seat = seats[0]; 
			break;
		case 2:
			rent_per_set = 8;
			seat = seats[1];
			break;
		case 6:
			rent_per_set = 10;
			seat = seats[2];
			break;
		case 8:
			rent_per_set = 4;
			seat = seats[3];
			break;
		case 45:
			rent_per_set = 5;
			seat = seats[4];
			break;
		case 21:
			rent_per_set = 6;
			seat = seats[5];
			break;
		case 55:
			rent_per_set = 3;
			seat = seats[6];
			break;
		case 77:
			rent_per_set = 3;
			seat = seats[7];
			break;
		case 11:
			rent_per_set = 1;
			seat = seats[8];
			break;
		case 89:
			rent_per_set = 1;
			seat = seats[9];
			break;
		default :		
			cout<<" the seat you are searching is not empty "<<endl;
//			goto xyz;
	}
	//asking user for how many hourse tha wana set here
	cout<<" How many hours do you wana set hare today "<<endl;
	cout<<" ";
	cin>>hour;
	
	total = hour*rent_per_set;	
 
	cout<<endl;
	system("cls");
	cout<<endl;
// challan for setting hare in the library
//	 xyz
	cout<<" ************ BookHarbor Challan ********************** ";
	cout<<endl;
	cout<<endl;
	cout<<" Name :"<<setw(24)<<name<<endl;
	cout<<" Chair number :"<<setw(12)<<seat<<" chiar "<<endl;
	cout<<" Timing :"<<setw(18)<<hour<<" hour "<<endl;
	cout<<" Net amonut of the day :"<<setw(3)<<total<<" PkR"<<endl;
		
}






// todo      (goto statement for default switch case)
