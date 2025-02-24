#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
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
