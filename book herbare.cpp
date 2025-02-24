#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
	char ch;
	int time, total, price, book;

	string bk_name, bk_cet;

    cout<<"*************welcome to books herbare******************"<<endl;
    cout<<endl;
	
	//menu of books to select any one    
	cout<<"pick your from the cetegry that given below"<<endl;
	cout<<"(A) computer science "<<endl;
	cout<<"(B) software engineering"<<endl;
	cout<<"(C) artificial intelegience"<<endl;
	cout<<"(D) English"<<endl;
	cout<<"(E) Urdu"<<endl;
	cout<<"(F) History"<<endl;
	cout<<"(G) Islamiyat"<<endl;
	cout<<"(H) cycology"<<endl;
	cin>>ch;
	
	getch;
	system("cls");
	
	//switch statement is start for option
	switch (ch)
	{
		//case one 
		case 'a':
	    cout<<"--------- COMPUTER SCIENCE BOOKS --------------"<<endl;
	    cout<<"please select any one ";
		cout<<endl;
	    cout<<endl;
	    cout<<"1. Introduction to Algorithms"<<endl;
	    cout<<"2. Computer Networks"<<endl;
		cout<<"3. Operating System Concept"<<endl;
		cout<<"4. Artificial Intelligence"<<endl;
		cout<<"5. Database System Concepts"<<endl;
		cout<<"6. Computer Organization and Design"<<endl;
		cout<<"7. Compilers: Principles, Techniques, and Tools"<<endl;
		cout<<"8. Computer Graphics"<<endl;
		cout<<"9. Introduction to Artificial Intelligence"<<endl;
		cout<<"10. javaScript"<<endl;
		cin>>book;
		
		price = 50;
		bk_cet = "computer science";
		
		//nested switch statement for computer science books
		switch (book)
		{		
			case 1:
				bk_name = "Introduction to Algorithms";
				break;
				
			case 2:
				bk_name = "Computer Networks";
				break;
				
			case 3:
				bk_name = "Operating System Concept";
				break;
				
			case 4:
				bk_name = "Artificial Intelligence";
				break;
				
			case 5:
				bk_name = "Database System Concepts";
				break;
				
			case 6:
				bk_name = "Computer Organization and Design";
				break;
				
			case 7:
				bk_name = "Compilers: Principles, Techniques, and Tools";
				break;
				
			case 8:
				bk_name = "Computer Graphics";
				break;
				
			case 9:
				bk_name = "Introduction to Artificial Intelligence";
				break;
				
			case 10:
				bk_name = "javaScript";
				break;	
				
		}
		//end nested switch
		break;
	
	    //case b
	    case 'b':
	cout<<"-------------SOFTWARE ENGINEERING BOOKS---------------"<<endl;
	cout<<"please select any one "<<endl;
	cout<<endl;
	
	    cout<<"1. Code Complete"<<endl;
	    cout<<"2. The Mythical Man-Month"<<endl;
		cout<<"3. Clean Code"<<endl;
		cout<<"4. Design Patterns"<<endl;
		cout<<"5. Refactoring"<<endl;
		cout<<"6. Software Engineering"<<endl;
		cout<<"7. The Pragmatic Programmer"<<endl;
		cout<<"8. Continuous Delivery"<<endl;
		cout<<"9. Agile Estimating and Planning"<<endl;
		cout<<"10. Software Engineering"<<endl;
		cin>>book;
		
	    price = 40;
	    bk_cet = "software engineering";
	    
	    //nested switch statemnt
		switch (book)
		{
		case 1:
		    bk_name = "Code Complete";
		break;
		
		case 2:
		    bk_name = "The Mythical Man-Month";
		break;
		
		case 3:
		    bk_name = "Clean Code";
		break;
		
		case 4:
		    bk_name = "Design Patterns";
		break;
		
		case 5:
	      	bk_name = "Refactoring";
		    break;
		
		case 6:
			bk_name = "Software Engineering";
			break;
		
		case 7:
			bk_name = "The Pragmatic Programmer";
			break;
			
		case 8:
			bk_name = "Continuous Delivery";
			break;
			
		case 9:
			bk_name = "Agile Estimating and Planning";
			break;
			
		case 10:
			bk_name = "Software Engineering";
			break;
			
		} 
		//end nested switch for case b
		break;
		
		//case c
		case 'c':
	cout<<"---------------ARTIFICIAL INTELLIGENCE BOOKS---------------"<<endl;
	cout<<"please select any one "<<endl;
	cout<<endl;
	cout<<"1. Artificial Intelligence"<<endl;
	cout<<"2. Pattern Recognition and Machine Learning"<<endl;
	cout<<"3. Deep Learning"<<endl;
	cout<<"4. Machine Learning:"<<endl;
	cout<<"5. Reinforcement Learning"<<endl;
	cout<<"6. Bayesian Reasoning and Machine Learning"<<endl;
	cout<<"7. Introduction to Artificial Intelligence"<<endl;
	cout<<"8. Neural Networks for Pattern Recognition"<<endl;
	cout<<"9. Machine Learning Yearning"<<endl;
	cout<<"10. Artificial Intelligence by  David L. Poole and Alan K. "<<endl;
	cin>>book;
	
	price = 30;
	bk_cet = "artficial intelligence";
	
	//start nested switch statment for case c
	switch (book)
	{
		case 1:
			bk_name = "Artificial Intelligence";
			break;
			
		case 2:
			bk_name = "Pattern Recognition and Machine Learning";
			break;
			
		case 3:
			bk_name = "Deep Learning";
			break;
		
		case 4:
			bk_name = "Machine Learning";
			break;
			
		case 5:
			bk_name = "Reinforcement Learning";
			break;
		
		case 6:
			bk_name = "Bayesian Reasoning and Machine Learning";
			break;
			
		case 7:
			bk_name = "Introduction to Artificial Intelligence";
			break;
			
		case 8:
			bk_name = "Neural Networks for Pattern Recognition";
			break;
			
		case 9:
			bk_name = "Machine Learning Yearning";
			break;
			
		case 10:
			bk_name = "Artificial Intelligence by  David L. Poole and Alan K. ";
			break;	
	}
	//end of switcch statment of case c
		break;
		
		//option d
		case 'd':
	cout<<"--------------ENGLISH BOOKS------------------"<<endl;
	cout<<"please select any one "<<endl;
	cout<<endl;
	cout<<"1. To Kill a Mockingbird"<<endl;
	cout<<"2. 1984"<<endl;
	cout<<"3. The Great Gatsby"<<endl;
	cout<<"4. Pride and Prejudice"<<endl;
	cout<<"5. The Catcher in the Rye"<<endl;
	cout<<"6. The Lord of the Rings"<<endl;
	cout<<"7. Harry Potter and the Philosopher's Stone"<<endl;
	cout<<"8. Moby-Dick"<<endl;
	cout<<"9. The Hobbit"<<endl;
	cout<<"10. To the Lighthouse"<<endl;
	cin>>book;
	
	price = 20;
	bk_cet = "english";
	
	//nested switch statment for case d
	switch (book)
	{
		case 1:
			bk_name = "To Kill a Mockingbird";
			break;
			
		case 2:
			bk_name = "1984";
			break;
			
		case 3:
			bk_name = "The Great Gatsby";
			break;
			
		case 4:
			bk_name = "Pride and Prejudice";
			break;
			
		case 5:
			bk_name = "The Catcher in the Rye";
			break;
			
		case 6:
			bk_name = "The Lord of the Rings";
			break;
			
		case 7:
			bk_name = "Harry Potter and the Philosopher's Stone";
			break;
			
		case 8:
			bk_name = "Moby-Dick";
			break;
			
		case 9:
			bk_name = "The Hobbit";
			break;
			
		case 10:
			bk_name = "To the Lighthouse";
			break;
	}
	//end of nested switch of case d
        break;
		
		//option d
		case 'e':
		cout<<"------------URDU BOOKS-------------"<<endl;
		cout<<"please select any one"<<endl;
		cout<<endl;
		cout<<"1. Peer-e-Kamil"<<endl;
		cout<<"2. Zindagi Gulzar Hai"<<endl;
		cout<<"3. Rashid Minhas Karnama"<<endl;
		cout<<"4. Moth Smoke"<<endl;
		cout<<"5. Khuda Ki Basti"<<endl;
		cin>>book;
		
		price = 25;
		bk_cet = "urdu";
		
		//nested switch statemnt of case e
		switch (book)
		{
			case 1:
				bk_name = "Peer-e-Kamil";
				break;
				
			case 2:
				bk_name = "Zindagi Gulzar Hai";
				break;
				
			case 3:
				bk_name = "Rashid Minhas Karnama";
				break;
				
			case 4:
				bk_name = "Moth Smoke";
				break;	
				
			case 5:
				bk_name = "Khuda Ki Basti";
				break;
		}
		//end of nested switcht statment of case e
		break;
		
		//option f
		case 'f':
		cout<<"------------HISTORY BOOKS"<<endl;
	    cout<<"please select any one "<<endl;
	    cout<<endl;
	    cout<<"1. A People's History of the United States"<<endl;
	    cout<<"2. The Rise and Fall of the Third Reich"<<endl;
	    cout<<"3. The Histories"<<endl;
	    cout<<"4. SPQR"<<endl;
	    cin>>book;
	    
	    price = 20;
	    bk_cet = "history";
	    
	    //nested switch of case f
	    switch (book)
	    {
	    	case 1:
	    		bk_name = "A People's History of the United States";
	    		break;
	    		
	    	case 2:
	    		bk_name = "The Rise and Fall of the Third Reich";
	    		break;
	    		
	    	case 3:
	    		bk_name = "The Histories";
	    		break;
	    		
	    	case 4:
	    		bk_name = "SPQR";
	    		break;
		}
		//end of nested of case f
	    break;
	    
	    //option g
	    case 'g':
	    cout<<"-------------ISLAMIAT BOOKS-------------"<<endl;
	    cout<<"Please select any one "<<endl;
	    cout<<endl;
	    cout<<"1. The Biography of the Prophet Muhammad (Sira)"<<endl;
	    cout<<"2. The Alchemy of Happiness"<<endl;
	    cout<<"3. Tafsir al-Jalalayn"<<endl;
	    cout<<"4. Sahih al-Bukhari"<<endl;
	    cout<<"5. Muslim bukhari"<<endl;
	    cin>>book;
	    
	    price = 30;
	    bk_name = "islamiyat";
	    
	    //nested switch statment of case g
	    switch (book)
	    {
	    	case 1:
	    		bk_name = " The Biography of the Prophet Muhammad (Sira) ";
	    		break;
	    		
	    	case 2:
	    		bk_name = "The Alchemy of Happiness";
	    		break;
	    		
	    	case 3:
	    		bk_name = "Tafsir al-Jalalayn";
	    		break;
	    	
	    	case 4:
	    		bk_name = "Sahih al-Bukhari";
	    		break;
	    		
	    	case 5:
	    		bk_name = "Muslim bukhari";
	    		break;
		}
		//end of nested switch of g
	    break;
	    
	    //option h
	    case 'h':
	    cout<<"---------------CYCOLOGY BOOKS--------------"<<endl;
	    cout<<"Please select any one "<<endl;
	    cout<<endl;
	    cout<<"1. Thinking, Fast and Slow"<<endl;
	    cout<<"2. The Power of Habit"<<endl;
	    cout<<"3. Man's Search for Meaning"<<endl;
	    cout<<"4. The Power of Thinking Without Thinking"<<endl;
	    cin>>book;
	    
	    price = 40;
	    bk_cet = "cycology";
	    
	    //nested switch of h
	    switch (book)
	    {
	    	case 1:
	    		bk_name = "Thinking, Fast and Slow";
	    		break;
	    		
	    	case 2:
	    		bk_name = "The Power of Habit";
	    		break;
	    		
	    	case 3:
	    		bk_name = "Man's Search for Meaning";
	    		break;
	    		
	    	case 4:
	    		bk_name = "The Power of Thinking Without Thinking";
	    		break;	
	    	default:
	    		cout<<"invalid input"<<endl;
	    		goto jump;	
	    		
		}
		//end of nested of case h
	    break;
	    
	   
	}
	cout<<"\n\n\npress enter to continue ";
	getch();
	system("cls");
	
	cout<<"How many day do you spend with this book"<<endl;
	cin>>time;
	
	cout<<"\n\n\npress enter to continue";
	total = time * price;
	
	getch();
	system("cls");
	
	//chalan 
	cout<<"**************BOOKS HERBARE*******************"<<endl;
	cout<<endl;
	cout<<"book cetegory    :   "<<bk_cet<<endl;
	cout<<"book name     :    "<<bk_name<<endl;
	cout<<"time duration    :   "<<time<<" day "<<endl;
	cout<<"Rent per day   :   "<<price<<endl;
	cout<<"Total rent    :  "<<total;
	
	jump:
	cout<<" ";
}

