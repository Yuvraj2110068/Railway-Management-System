#include<iostream>
#include<string.h>
using namespace std;
int sm,a;

class t_train
{
	int c,c_sm;
	public:
		int available_classes()
		{
			cout<<"Select your class"<<endl;
			cout<<"1.2S\n2.SL\n3.3A"<<endl;
			cout<<"Enter your class"<<endl;
			cin>>c;
			if(c==1)
			{
				cout<<"Your selected class is 2S\n"<<endl;
				c_sm=sm*3;
				return c_sm;
			}
			else if(c==2)
			{
				cout<<"Your selected class is SL\n"<<endl;
				c_sm=sm*5;
				return c_sm;
			}
			else
			{
				cout<<"Your selected class is 3A\n"<<endl;
				c_sm=sm*7;
				return c_sm;
			}
		}
	insert();
};


class trains:public t_train
{
	public:
		inline void available_stations1();
		inline void available_stations2();
		inline void available_stations3();
		inline void available_stations4();
		inline void available_stations5();
		inline void available_stations6();
		inline void available_stations7();
		inline void available_stations8();
		inline void available_stations9();
};

	

class station:public trains
{
	public:
		int ch;
		inline void sangli();
		inline void mumbai();
		inline void pune();
		board_station()
		{
			cout<<"WHERE YOU WANT TO BOARD IN...?"<<endl;
			cout<<"\n1.Sangli\n2.Pune\n3.Mumbai";
			cout<<"\nEnter Location Number:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"\t\tBoarding station is Sangli\n"<<endl;
					sangli();
					break;
				case 2:
					cout<<"\t\tBoarding station is Pune\n"<<endl;
					pune();
					break;
				case 3:
					cout<<"\t\tBoarding station is Mumbai\n"<<endl;
					mumbai();
					break;	
				
			}
		}
	
};


inline void station::sangli()
{
	int i;
	cout<<"1.SANGLI TO PUNE"<<endl;
	cout<<"2.SANGLI TO MUMBAI"<<endl;
	cout<<"3.SANGLI TO KARAD"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"Enter your choice: ";
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<"You choose Sangli to Pune"<<endl;
			available_stations1();
			break;
		case 2:
			cout<<"You choose Sangli to Mumbai"<<endl;
			available_stations2();
			break;
		case 3:
			cout<<"You choose Sangli to Karad"<<endl;
			available_stations3();	
			break;
		case 4:
			exit(0);	
	}
}
inline void station::pune()
{
	int i;
	cout<<"1.PUNE TO MUMBAI"<<endl;
	cout<<"2.PUNE TO SANGLI"<<endl;
	cout<<"3.PUNE TO KARAD"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"Enter your choice: ";
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<"You choose Pune to Mumbai"<<endl;
			available_stations4();
			break;
		case 2:
			cout<<"You choose Pune to Sangli"<<endl;
			available_stations5();
			break;
		case 3:
			cout<<"You choose Pune to Karad"<<endl;
			available_stations6();	
			break;
		case 4:
			exit(0);		
	}
}
inline void station::mumbai()
{
	int i;
	cout<<"1.MUMBAI TO PUNE"<<endl;
	cout<<"2.MUMBAI TO SANGLI"<<endl;
	cout<<"3.MUMBAI TO KARAD"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"Enter your choice: ";
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<"You choose Mumbai to Pune"<<endl;
			available_stations7();
			break;
		case 2:
			cout<<"You choose Mumbai to Sangli"<<endl;
			available_stations8();
			break;
		case 3:
			cout<<"You choose Mumbai to Karad"<<endl;
			available_stations9();	
			break;
		case 4:
			exit(0);	
	}
}

inline void trains:: available_stations1()
	{
		
		cout<<"Available trains are: "<<endl;
		cout<<"1.Mahalaxmi Exp\n2.Rajdhani Exp"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Mahalaxmi Exp"<<endl;
				sm=200;
				break;
		 	case 2:
				cout<<"\t\tYou selected Rajdhani Exp"<<endl;
				sm=500;
				break;					
		}
	}
inline void trains::available_stations2()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Duronto Express\n2.Shatabdi Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Duronto Express"<<endl;
				sm=250;
				break;
			case 2:
				cout<<"\t\tYou selected Shatabdi Express"<<endl;
				sm=300;
				break;	
							
		}
	}
inline void trains::available_stations3()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Jan Shatabdi Express\n2.Garib Rath Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Jan Shatabdi Express"<<endl;
				sm=400;
				break;
			case 2:
				cout<<"\t\tYou selected Garib Rath Express"<<endl;
				sm=500;
				break;			
		}
	}
inline void trains::available_stations4()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Humsafar Express\n2.Vande Bharat Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Humsafar Express"<<endl;
				sm=300;
				break;
			case 2:
				cout<<"\t\tYou selected Vande Bharat Express"<<endl;
				sm=145;
				break;			
		}
	}
inline void trains::available_stations5()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Mahalaxmi Exp\n2.Suvidha Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
			{
				case 1:
					cout<<"\t\tYou selected Mahalaxmi Exp"<<endl;
					sm=320;
					break;
				case 2:
					cout<<"\t\tYou selected Suvidha Express"<<endl;
					sm=350;
					break;					
			}
	}
inline void trains::available_stations6()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.AC Express\n2.Tejas Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected AC Express"<<endl;
				sm=240;
				break;
			case 2:
				cout<<"\t\tYou selected Tejas Express"<<endl;
				sm=260;
				break;				
		}
	}
inline void trains::available_stations7()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Mahalaxmi Exp\n2.Suvidha Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Mahalaxmi Exp"<<endl;
				sm=310;
				break;
			case 2:
				cout<<"\t\tYou selected Suvidha Express"<<endl;
				sm=400;
				break;				
		}
	}
inline void trains::available_stations8()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Mahalaxmi Exp\n2.Rajdhani Exp"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;	
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Mahalaxmi Exp"<<endl;
				sm=450;
				break;
			case 2:
				cout<<"\t\tYou selected Rajdhani Exp"<<endl;
				sm=150;
				break;				
		}
	}
inline void trains::available_stations9()
	{
		cout<<"Available trains are: "<<endl;
		cout<<"1.Duronto Express\n2.Kavi Guru Express"<<endl;
		cout<<"Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\t\tYou selected Duronto Express"<<endl;
				sm=370;
				break;
			case 2:
				cout<<"\t\tYou selected Kavi Guru Express"<<endl;
				sm=325;
				break;				
		}
	}
class passenger
{
	public:
		friend void passenger_details(passenger s);
};

 void passenger_details(passenger s)
{
	int ch,i;
	char name[20][20],dummy;
	int age[20],addhaar[20];
	char gender[20];
	cout<<"Enter no of passenger"<<endl;
	cin>>ch;
	for(i=1;i<=ch;i++)
	{
		cout<<"Enter "<<i<<" Passenger details"<<endl;
		cout<<"Enter name of passenger: ";
		cin>>name[i];
		cout<<"Enter age of passenger: ";
		cin>>age[i];
		cout<<"Enter your addhaar no.: ";
		cin>>addhaar[i];
		cout<<"Enter passengers Gender(M/F): ";
		cin>>gender[i];
	}
	cout<<"--------Passangers Details---------"<<endl;
	for(i=1;i<=ch;i++)
	{
		cout<<"Passenger "<<i<<endl;
		cout<<"Name of passenger is: "<<name[i]<<endl;
		cout<<"Age of Passenger is: "<<age[i]<<endl;
		cout<<"Addhaar No. of Passenger is: "<<addhaar[i]<<endl;
		cout<<"Gender of the Passenger is: "<<gender[i]<<endl;
	}
}
 

int main()
{
	int x;
	char password[10];
	char pass[10]="yuvraj";
	while(1)
	{
		cout<<"1.Admin"<<endl;
		cout<<"2.Book as User"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>x;
		switch(x)
		{
			case 1:
				cout<<"Enter password of admin: ";
				cin>>password;
				if(strcmp(pass,password)!=0)
				{
					cout << "Enter the password correctly \n";
					cout << "You are not permitted to login this mode\n";
				}
				else
				{
					cout<<"Welcome Yuvraj"<<endl;
					station s;
					s.board_station();
					s.available_classes();
					passenger p;
					passenger_details(p);
				}
				break;
			case 2:
				cout<<"Book a trains as a user\n"<<endl;
				station s;
				s.board_station();
				s.available_classes();
				passenger p;
				passenger_details(p);
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"Enter valid input"<<endl;		
		}
	}
	return 0;
}
