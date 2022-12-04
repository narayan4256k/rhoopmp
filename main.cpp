#include <iostream>
using namespace std;
class User 
{
  public:
    string name;
    string address;
    string emailId;
    string phoneno;
    
  public:
      
        void getUserDetails()
		{
            cout<<"\t\t\t**************************************************************\n";
            cout<< "\t\t\t\t\tCUSTOMER DETAILS :" << endl;
            cout<<"\t\t\t**************************************************************\n";
	        cout<< "\t\t\tName: ";
            cin>>name;
        	cout<< "\n\t\t\tEmail: ";
        	cin>>emailId; 
        	cout<< "\n\t\t\tPhone Number: ";
        	cin>>phoneno;
        	cout<< "\n\t\t\tAddress: ";
        	cin>>address;
    
        }
};

class Theatre 
{
  public:
    string name;
  int cost;
     public:
      
        void displayTheatreDetails()
        {
            int choice;
            cout<<endl;
            cout<<"\t\t\t**************************************************************\n";
            cout << "\t\t\t\t\tSelect Theatre " << endl;
            cout<<"\t\t\t**************************************************************\n";
	        cout << "\t\t\t1. City Pride pune \n";
	       
        	cout << "\t\t\t2. cinepolis :seasons mall \n";
        	     
        	cout << "\t\t\t3. City Pride kothrud\n";
        	    
        	cout << "\t\t\t4. Inox :amanora town center,hadapsar\n";
        	     
            cout << "\t\t\t5. kumar pacific \n ";
                 
            cout << "\t\t\t6. PVR cinemas \n ";
            cout<<"\t\t\tEnter your choice: ";
			cin>>choice;
            Theatre t;
                switch ( choice) 
				{
                    
                    case 1: 
                    name = "City Pride pune";
                    
                    break;
                    
                    case 2: 
                    name = "cinepolis :seasons mall";
                    
                    break;
                    
                    case 3: 
                    name = "Inox :amanora town center,hadapsar";
                    
                    break;
                    
                    case 4: 
                    t.name = "kumar pacific";
                    
                    break;
                    
                    case 5: 
                    name = " PVR cinemas";
                    
                    break;
                    
                    case 6: 
                    name = "City Pride kothrud ";
                    
                    break;
                }

        }
};


class Movie 
{
  public:
    string name ;
    string type;
    string language;
    
    public:
      
        void displayMovieList()
		{
            Movie m[6];
            m[0].name = "Drishyam 2";
            m[0].type = " 2d,Drama,Mystery,Thriller";
            m[0].language = "Hindi";
            
            
            m[1].name = "Bhediya";
            m[1].type = " 2d,Comedy,Thriller";
            m[1].language = "Hindi";
            
            
            
            m[2].name = "Kantara";
            m[2].type = " 2d,Adventure,Drama,Thriller";
            m[2].language = "Hindi";
            
           
            
            m[3].name = "Avatar";
            m[3].type = " 3d,Action,Adventure,Fantasy,Sci-fi";
            m[3].language = "English";
            
            
            
            m[4].name = "Uunchai";
            m[4].type = " 2d,Drama,Family,Adventure";
            m[4].language = "Hindi";
            
            
            
            m[5].name = "An Action Hero";
            m[5].type = " 2d,Action,Comedy,Thriller";
            m[5].language = "Hindi";
            
           
            int choice;
            
            cout<<"\t\t\t**************************************************************\n";
            cout <<"\t\t\t\t\tSelect Movie : " ;
            cout<<"\n\t\t\t**************************************************************\n";
            cout<<"\n\t\t\t1. Drishyam 2 \n";
            cout<<"\t\t\t2. Bhediya\n";
            cout<<"\t\t\t3. kantara\n";
            cout<<"\t\t\t4. Avatar\n";
            cout<<"\t\t\t5. Uunchai\n";
            cout<<"\t\t\t6. An Action Hero\n";
             cout<<"\t\t\tEnter your choice: ";
            
          
            cin>>choice ;
            Movie selectedmovie = m[choice - 1];
            cout<<endl;
            cout<<"\t\t\t**************************************************************\n";
            cout << "\t\t\t\tSelected Movie Details : " << endl;
            cout<<"\t\t\t**************************************************************\n";
            cout<<"\t\t\tMovie Name : "<<selectedmovie.name<< endl;
            cout<<"\t\t\tMovie type: "<<selectedmovie.type<< endl;
            cout<<"\t\t\tMovie language: "<<selectedmovie.language<< endl;
            name = selectedmovie.name;
		    type = selectedmovie.type;
		    language= selectedmovie.language;
        }
};

class Show: Theatre,Movie 
{
  public:
    Movie m;
    Theatre t;
    string time;
    int totalTickets;
    int totalcost,cost;
    
     public:
      
        void displayShowDetails(){
            m.displayMovieList();
            t.displayTheatreDetails();
           
            int choice;
            cout<<endl;
            cout<<"\t\t\t**************************************************************\n";
            cout << "\t\t\t\t\tSelect Show Time & cost  : " << endl;
            cout<<"\t\t\t**************************************************************\n";
	        cout << "\t\t\t1. 8am to 11pm \t 150 \n";
	        cout << "\t\t\t2. 11pm to 2pm \t 180 \n";
	        cout << "\t\t\t3. 2pm to 5pm  \t 240 \n";
	        cout << "\t\t\t4. 5pm to 8pm  \t 280 \n";
	        cout << "\t\t\t5. 8pm to 11pm \t 300 \n";
	         cout<<"\t\t\tEnter your choice: ";
	        cin>>choice ;
	        
	         switch (choice) 
			 {
                    case 1: 
                    time = "8am to 11pm";
                    cost= 150;
                    break;
                    
                    
                    case 2: 
                    time = "11pm to 2pm";
                    cost= 180;
                    break;
                    
                    
                    case 3: 
                    time = "2pm to 5pm";
                    cost= 240;
                    break;
                    
                    
                    case 4: 
                    time = "5pm to 8pm";
                    cost= 280;
                    break;
                    
                    
                    case 5: 
                    time = "8pm to 11pm";
                    cost= 300;
                    break;
                    
                }
                
	        cout << "\t\t\tEnter no. of tickets : " ;
	        cin>>totalTickets;
	        totalcost = totalTickets*cost;

        }
};


class Booking: User,Show
 {
  public:
    User u;
    Show s;

     public:
        void displayBookingDetails()
		{
            u.getUserDetails();
            s.displayShowDetails();
            cout<<endl;
            cout<<"\t\t\t**************************************************************\n";
            cout << "\t\t\t\t\tYour Booking Summary is as follows: " << endl;
            cout<<"\t\t\t**************************************************************\n";
            cout << "\t\t\tBooking Name : " << u.name << endl;
            cout << "\t\t\tMovie : " << s.m.name << endl;
            cout << "\t\t\tTheatre : " << s.t.name << endl;
            cout << "\t\t\tBooked Slot : " << s.time<< endl;
            
            cout << "\t\t\tTickets Booked : " << s.totalTickets << endl;
            cout << "\t\t\tTotal Price : " << s.totalcost << endl;
        }
};

int main() 
{
    Booking b;
    b.displayBookingDetails();
    return 0;
}

