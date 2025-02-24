//dis and intro also main Program
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
char name[20];
using namespace std;


// user defined function start

void login_reg();
void option_a();
void option_b();
void option_c();
void option_d();
void option_e();
void option_f();
void option_g();
void option_h();
void option_i();
void option_j();
void option_k();

//user defined function end

int main()
{
	// short disclimer 
	cout<<endl;
	cout<<"----------------------------------------------------  Disclimer  ------------------------------------------------------ "<<endl;
	cout<<" Welcome to BookHarbor, a dynamic project igniting literary passions. Delve into our vibrant platform, revolutionizing " <<endl;
	cout<<" book access. BookHarbor is a captivating concept, featuring fictional titles for educational demonstration. Engage "<<endl;  
	cout<<" with our sleek prototype, offering simulated interactions. Welcome aboard, and enjoy the voyage! "<<endl;
	cout<<" \n\n\n\n Press any key to Continue ";
	cout<<endl;
	cout<<endl;
	cout<<" ";
	getch();
	system("cls"); 
	cout<<endl;
	cout<<"----------------------------------------------------  Introduction  ----------------------------------------------------"<<endl;
	cout<<endl;
	cout<<" BookHarbor welcomes you to a revolutionary platform merging literary exploration with innovation. Dive into a world of ";
	cout<<" fictional titles showcased for educational demonstration. Embark on an engaging journey through literature with our "<<endl;
	cout<<" prototype. Join us as we redefine your book experience. Welcome aboard! "<<endl;
	cout<<" \n\n\n\n Press any key to Continue ";
	cout<<endl;
	cout<<endl;
	cout<<" ";
	getch();
	system("cls");
	// calling login and register function 
	login_reg();
	// control bac to main function
	system("cls");
	
//////////////////////////////  menu page Start /////////////////////////	
	char option;
	cout<<endl;
	cout<<"********************   Welcome To The BookHorbor    **************************  "<<endl;
	cout<<endl;
	cout<<" Please Select any of the following option that suit you "<<endl;
	cout<<endl;
// Manu on the Screen befor Select any choice.
	cout<<"(A) Only setting here for silence and to midatate my self "<<endl;
	cout<<"(B) Using library books inside the library "<<endl;
	cout<<"(C) Reading only news paper "<<endl;
	cout<<"(D) Solving personal issues "<<endl;
	cout<<"(E) Taking bookes away from the library "<<endl;
	cout<<"(F) Giving your books to the library "<<endl;
	cout<<"(G) Charity "<<endl;
	cout<<"(H) About Us "<<endl;
	cout<<"(I) Contact and location "<<endl;
	cout<<"(J) Future dreams "<<endl;
    cout<<endl;
    cout<<endl;
	cin>>option;


// switch cases for option start
	switch(option)
	{
		// case a comple (only goto statment are remaning)
		case 'a' :
			system("cls");
			option_a();
			break;
		// case b start 	
		case 'b' :
			option_b();
			break;
		case 'c' :
			option_c();
			break;
		case 'd' :
			option_d();
			break;
		case 'e' :
			option_e();
			break;
		case 'f' :
			option_f();
			break;
		case 'h' :
			option_h();
			break;
		case 'i' :
			option_i();
			break;
		case 'j' :
			option_j();
			break;
		case 'k' :
			option_k();
	}     
// switch cases for option end     

////////////////////////  menu page ends	
}



// login and register function start
void login_reg()
{
	cout<<endl;
	char account;
	cout<<" Do you have An Account Or not yet? (Y/N) ";
	cin>>account;
	if(account == 'n' || account == 'N')
	{
		// variable for user information only in that case 

		string address, college, stu_gra, fname;
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
	
	cout<<" ";
	getch();
	
	//register module end.
	
	}
	// Code for having an account in the library.
	else if(account == 'y' || account == 'Y')
	{
		system("cls");
		string pass;
		cout<<endl;
		cout<<" Please Enter Your Username Or Email :			";
		cin>>name;
		cout<<" Enter Your Password :	 		";
		cin>>pass;	    
		cout<<endl;
	}
    //login Module end.

}
// login and register function end



//   menu option_a start
void option_a()
{
//	string name =  "qasim" ;
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
	//loop to shaw the reserved seat 
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
			hour = 0;
			total = 0;
			seat = 0;
			cout<<" "; 
			getch();
			goto xyz;
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
	 xyz:
	system("cls");

	cout<<" ************ BookHarbor Challan ********************** ";
	cout<<endl;
	cout<<endl;
	cout<<" Name :"<<setw(24)<<name<<endl;
	cout<<" Chair number :"<<setw(12)<<seat<<" chiar "<<endl;
	cout<<" Timing :"<<setw(18)<<hour<<" hour "<<endl;
	cout<<" Net amonut of the day :"<<setw(3)<<total<<" PkR"<<endl;
		
// todo      (goto statement for default switch case)
}

//   menu option_a end 

//   menu option_b start
void option_b()
{
	system("cls");
	cout<<endl;
	// option b star 
	
	
	char search_option;
	cout<<endl;
	cout<<" **************  BookHarbor ***************** "<<endl;
	cout<<endl;
	
	cout<<" select the catigory of book you want to read inside the library "<<endl;
	cout<<endl;
	// departmentt name for the library arrangement of the book

	cout<<" (A) Computer Science "<<endl;
	cout<<" (B) Software Engneering "<<endl;
	cout<<" (C) Zoology "<<endl;
	cout<<" (D) English "<<endl;
	cout<<" (E) Theology "<<endl;
	cout<<" (F) Economics "<<endl;
	cout<<" (G) Islamic Study "<<endl;
	cout<<" (H) Pak study "<<endl;
	cout<<" (I) Artificail Intelligence "<<endl;
	cout<<" (j) Data Science  "<<endl;
	cout<<" (K) Hotal management "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<" Please select your categiry of book you want !"<<endl;
	cout<<" ";
	cin>>search_option;
	system("cls");

	
	// to show books or search book through its code number


	cout<<endl;
	cout<<" ************** BookHarbor ***************** "<<endl;	
	cout<<endl;
	
	
	cout<<" Pick your desired book by its number .... "<<endl;
	
	
	// option b end 
	 
}
 
//   menu option_b end 
//   menu option_c start
void option_c()
{
	system("cls");
	cout<<endl;
	
	char option;
	string name, newspaper_name;
	name = " Qasim ";
	cout<<endl;
	cout<<" *************** BookHarbor NewsPaper   ****************  "<<endl;
	cout<<endl;
	cout<<" follwing NewsPaper are available in the library \n"<<endl;
	cout<<" (a) English "<<endl;
	cout<<" (c) Chines "<<endl;
	cout<<" (b) Urdu "<<endl;
	cout<<" (d) German "<<endl;
	cout<<" (e) Pashto \n\n\n"<<endl;
	
	cout<<" Select any of the above (a/b/c/d/e) "<<endl;
	cout<<" ";
	cin>>option;
	
	system("cls");
	cout<<endl;
	cout<<" *************** BookHarbor NewsPaper ******************** \n"<<endl;
	int charges = 50;
	char select;
	cout<<endl;
	if(option == 'a')
{
	// option a English start
	newspaper_name = " English ";
	cout<<"You chose the Newspaper of English \n"<<endl;
	cout<<" (a) I want to read the NewsPaper only  (Free of cost) "<<endl;
	cout<<" (b) I`ll buy it for future use  (charges applay) \n"<<endl;
	cout<<" Please select any option you prefer "<<endl;
	cout<<" ";
	cin>>select;
	if(select == 'a')
	{
	system("cls");

	cout<<"\n                                                    Dawn News !                                       \n\n"<<endl;
	cout<<" Found by :    Muhammad Ali Jinnah in Delhi "<<endl;
	cout<<" Location :    karachi pakistan    "<<endl;
	cout<<" Price    :    50 PkR"<<endl;
	cout<<"\n\n\n "<<endl;
	getch();
		
	cout<<" Palastine  GAZA "<<endl;
	cout<<" News about palstine "<<endl;
	getch();
	
	cout<<"\n\n"<<endl;
	cout<<" Technology "<<endl;
	cout<<" News about  Technology that are in tranding  or comming soon technology "<<endl;
	getch();
	
	
	cout<<"\n\n"<<endl;
	cout<<" Sports "<<endl;
	cout<<" News about cricket in pakisatn or in other world! "<<endl;
	getch();
	
	
	cout<<"\n\n "<<endl;
	cout<<" weather "<<endl;
	cout<<" News about weather in pakistan static data from differnt sites  "<<endl;
	cout<<"\n\n\n";
	getch();
	
	
	cout<<" You Reach to the End of the latest news refresh for more update! "<<endl;
	} 
	else if(select == 'b')
	{
		system("cls");
		
		cout<<"\n ************* BookHarbor Newspaper Challan **************** \n"<<endl;
		cout<<" Name :     "<<name<<endl;
		cout<<" NewsPaper Name :        "<<newspaper_name<<endl;
		cout<<" Newspaper Charges "<<charges<<" PKR"<<endl;
		cout<<" Net Charges "<<charges<<" PKR"<<endl;
	}
}
// option a English end

	
	
	//option b  chiness start
	
	
	if(option == 'b')
{
	// option a of option b newspaper start
	newspaper_name = " Chaines ";
	cout<<"You chose the Newspaper of chaines \n"<<endl;
	cout<<" (a) I want to read the NewsPaper only  (Free of cost) "<<endl;
	cout<<" (b) I`ll buy it for future use  (charges applay) \n"<<endl;
	cout<<" Please select any option you prefer "<<endl;
	cout<<" ";
	cin>>select;
	if(select == 'a')
	{
	system("cls");

	cout<<"\n                                                    Chinees News !                                       \n\n"<<endl;
	cout<<" Found by :    Muhammad Ali Jinnah in Delhi "<<endl;
	cout<<" Location :    karachi pakistan    "<<endl;
	cout<<" Price    :    50 PkR"<<endl;
	cout<<"\n\n\n "<<endl;
	getch();
		
	cout<<" Palastine  GAZA "<<endl;
	cout<<" News about palstine "<<endl;
	getch();
	
	cout<<"\n\n"<<endl;
	cout<<" Technology "<<endl;
	cout<<" News about  Technology that are in tranding  or comming soon technology "<<endl;
	getch();
	
	
	cout<<"\n\n"<<endl;
	cout<<" Sports "<<endl;
	cout<<" News about cricket in pakisatn or in other world! "<<endl;
	getch();
	
	
	cout<<"\n\n "<<endl;
	cout<<" weather "<<endl;
	cout<<" News about weather in pakistan static data from differnt sites  "<<endl;
	cout<<"\n\n\n";
	getch();
	
	
	cout<<" You Reach to the End of the latest news refresh for more update! "<<endl;
	} 
	else if(select == 'b')
	{
		system("cls");
		
		cout<<"\n ************* BookHarbor Newspaper Challan **************** \n"<<endl;
		cout<<" Name :     "<<name<<endl;
		cout<<" NewsPaper Name :        "<<newspaper_name<<endl;
		cout<<" Newspaper Charges "<<charges<<" PKR"<<endl;
		cout<<" Net Charges "<<charges<<" PKR"<<endl;
	}
}	
	
	
	
	 
	// option b chiness end
	
	//option C urdu start
	
	
	if(option == 'c')
{
	// option a start
	newspaper_name = " Urdu ";
	cout<<"You chose the Newspaper of Urdu \n"<<endl;
	cout<<" (a) I want to read the NewsPaper only  (Free of cost) "<<endl;
	cout<<" (b) I`ll buy it for future use  (charges applay) \n"<<endl;
	cout<<" Please select any option you prefer "<<endl;
	cout<<" ";
	cin>>select;
	if(select == 'a')
	{
	system("cls");

	cout<<"\n                                                    Dawn News !                                       \n\n"<<endl;
	cout<<" Found by :    Muhammad Ali Jinnah in Delhi "<<endl;
	cout<<" Location :    karachi pakistan    "<<endl;
	cout<<" Price    :    50 PkR"<<endl;
	cout<<"\n\n\n "<<endl;
	getch();
		
	cout<<" Palastine  GAZA "<<endl;
	cout<<" News about palstine "<<endl;
	getch();
	
	cout<<"\n\n"<<endl;
	cout<<" Technology "<<endl;
	cout<<" News about  Technology that are in tranding  or comming soon technology "<<endl;
	getch();
	
	
	cout<<"\n\n"<<endl;
	cout<<" Sports "<<endl;
	cout<<" News about cricket in pakisatn or in other world! "<<endl;
	getch();
	
	
	cout<<"\n\n "<<endl;
	cout<<" weather "<<endl;
	cout<<" News about weather in pakistan static data from differnt sites  "<<endl;
	cout<<"\n\n\n";
	getch();
	
	
	cout<<" You Reach to the End of the latest news refresh for more update! "<<endl;
	} 
	else if(select == 'b')
	{
		system("cls");
		
		cout<<"\n ************* BookHarbor Newspaper Challan **************** \n"<<endl;
		cout<<" Name :     "<<name<<endl;
		cout<<" NewsPaper Name :        "<<newspaper_name<<endl;
		cout<<" Newspaper Charges "<<charges<<" PKR"<<endl;
		cout<<" Net Charges "<<charges<<" PKR"<<endl;
	}
}
	
	
	
	
	 
	// option c end
	
	
	
	// option d pashto start
	
	
	
	
	
	if(option == 'd')
{
	// option a Gerrman start
	newspaper_name = " German ";
	cout<<"You chose the Newspaper of German \n"<<endl;
	cout<<" (a) I want to read the NewsPaper only  (Free of cost) "<<endl;
	cout<<" (b) I`ll buy it for future use  (charges applay) \n"<<endl;
	cout<<" Please select any option you prefer "<<endl;
	cout<<" ";
	cin>>select;
	if(select == 'a')
	{
	system("cls");

	cout<<"\n                                                    Dawn News !                                       \n\n"<<endl;
	cout<<" Found by :    Muhammad Ali Jinnah in Delhi "<<endl;
	cout<<" Location :    karachi pakistan    "<<endl;
	cout<<" Price    :    50 PkR"<<endl;
	cout<<"\n\n\n "<<endl;
	getch();
		
	cout<<" Palastine  GAZA "<<endl;
	cout<<" News about palstine "<<endl;
	getch();
	
	cout<<"\n\n"<<endl;
	cout<<" Technology "<<endl;
	cout<<" News about  Technology that are in tranding  or comming soon technology "<<endl;
	getch();
	
	
	cout<<"\n\n"<<endl;
	cout<<" Sports "<<endl;
	cout<<" News about cricket in pakisatn or in other world! "<<endl;
	getch();
	
	
	cout<<"\n\n "<<endl;
	cout<<" weather "<<endl;
	cout<<" News about weather in pakistan static data from differnt sites  "<<endl;
	cout<<"\n\n\n";
	getch();
	
	
	cout<<" You Reach to the End of the latest news refresh for more update! "<<endl;
	} 
	else if(select == 'b')
	{
		system("cls");
		
		cout<<"\n ************* BookHarbor Newspaper Challan **************** \n"<<endl;
		cout<<" Name :     "<<name<<endl;
		cout<<" NewsPaper Name :        "<<newspaper_name<<endl;
		cout<<" Newspaper Charges "<<charges<<" PKR"<<endl;
		cout<<" Net Charges "<<charges<<" PKR"<<endl;
	}
}
	
	
	
	
	 
	// option d pashto end  
	
	
	// optiion pashto start 
	
	
	if(option == 'e')
	{
		newspaper_name = " Urdu ";
		cout<<"You chose the Newspaper of Urdu \n"<<endl;
		cout<<"The Newspaper of Pashto are Sold out please comme tomarrow "<<endl;
	}
	
	
}


 
//   menu option_c end 
//   menu option_d start
void option_d()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";
}
 
//   menu option_d end 
//   menu option_e start
void option_e()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";
}
 
//   menu option_e end 
//   menu option_f start
void option_f()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";
}
 
//   menu option_f end 
//   menu option_h start
void option_h()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";

	
}
 
//   menu option_h end 
//   menu option_i start
void option_i()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";

	
}
 
//   menu option_i end 
//   menu option_j start
void option_j()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                         comming soon ";

	
}
 
//   menu option_j end 
//   menu option_k start
void option_k()
{
	system("cls");
	cout<<endl;
	cout<<"        ************** BookHarbor ******************* "<<endl;
	cout<<"                                                                       comming soon ";

	
}
 
//   menu option_k end

