#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<fstream.h>

class ebs
{
	protected:
	float uu,total;
	public:

	float imr,fmr;
	char cinp[20],n[100];

	void getyn()
	{
		cout<<"Enter Customer name ";
		gets(n);
	}

	void getdata()
	{

		cout<<"ENTER CUSTOMER ID -: ";
		gets(cinp);
		cout<<"ENTER CUSTOMER NAME -: ";
		gets(n);
		cout<<endl;
	}

	void bill1()
	{
		cout<<"Enter OLD METER READING of the customer ";
		cin>>imr;
		cout<<"Enter NEW METER READING of the customer ";
		cin>>fmr;
		cout<<endl;
	}

	void output()
	{
		cout<<"CUSTOMER ID -: "<<cinp<<endl;
		cout<<"CUSTOMER NAME -: "<<n<<endl;
	}

	void dc()
	{
		char cn[50];
		char cv[5];
		cout<<"CARD NUMBER --: ";
		cin>>cn;
		if(strlen(cn)<12 || strlen(cn)>12)
		{
			cout<<"INVALID CARD NUMBER"<<endl;
			cout<<"CARD NUMBER -: ";
			cin>>cn;
			if(strlen(cn)<12 || strlen(cn)>12)
			{
				cout<<"You have entered invalid Credit Card Number 2 times. Kindly Login Again";
				delay(4000);
			}
		exit(0);
		}
		cout<<"CVV -: ";
		cin>>cv;
		if(strlen(cv)<3 || strlen(cv)>3)
		{
			cout<<"INVALID CVV"<<endl;
			cout<<"CVV -: "	;
			cin>>cv;
			if(strlen(cv)<3 || strlen(cv)>3)
			{
				cout<<"You have entered invalid CVV 2 times. Kindly Login Again";
				delay(4000);
			}
		exit(0);
		}
		cout<<"Payment of Rs."<<total<<" Successful"<<endl;
		cout<<"Amount Due -: Rs.0"<<endl;
		cout<<"\t \t \t \t THANK YOU "<<endl;
		total=0;
		delay(4000);
		clrscr();
	}

	void p()
	{       char no[50];
		cout<<"ENTER A REGISTERED PAYTM NUMBER ";
		cin>>no;
		if(strlen(no)>10 || strlen(no)<10)
		{
			cout<<"INVALID NUMBER"<<endl;
			cout<<"ENTER A REGISTERED PAYTM NUMBER ";
			cin>>no;
			if(strlen(no)>10 || strlen(no)<10)
			{
				cout<<"You Have Entered Invalid Number 2 Times. Kindly Login Again";
				delay(4000);
			}
		exit(0);
		}
		cout<<"Payment of Rs."<<total<<" Successful"<<endl;
		cout<<"Amount Due -: Rs.0"<<endl;
		cout<<"\t \t \t \t THANK YOU "<<endl;
		total=0;
		delay(4000);
		clrscr();
	}

	void pay()
	{
		int mop;
		cout<<"Method Of Payment -:"<<endl;
		cout<<"1.Debit/Credit Card"<<endl;
		cout<<"2.Paytm"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>mop;
		if(mop==1)
		dc();
		else if(mop==2)
		p();
		else
		{
			cout<<"Wrong input";
			delay(2000);
			exit(0);
		}
	}
	void display()
	{
		cout<<cinp<<endl;
		cout<<imr<<endl;
		cout<<fmr<<endl;
	}	
	void tobill()
	{

		cout<<"                              Customer Id -: "<<cinp<<endl<<endl;
		cout<<"INITIAL METER READING of customer-: "<<imr<<endl;
		cout<<"ENTER FINAL METER READING of the customer-: ";
		cin>>fmr;
	}
	void bill2()
	{
		uu=fmr-imr;
		cout<<"Number of units used-: "<<uu<<endl<<endl;
		if(uu<=100 && uu>0)
			total=uu*3;
		else if(uu<=200 && uu>100)
			total=uu*7;
		else if(uu<=300 && uu>200)
			total=uu*8.5;
		else if(uu<=400 && uu>300)
			total=uu*10;
		else if(uu>400)
			total=uu*12.5;
		cout<<"Customer's Total Bill Is -: RS."<<total<<endl<<endl;
		cout<<"Customer's Bill is updated. Thank You!"<<endl;
		delay(4000);
	}
	void custbill()
	{
		uu=fmr-imr;
		cout<<"Number of units used-: "<<uu<<endl<<endl;
		if(uu<=100 && uu>0)
			total=uu*3;
		else if(uu<=200 && uu>100)
			total=uu*7;
		else if(uu<=300 && uu>200)
			total=uu*8.5;
		else if(uu<=400 && uu>300)
			total=uu*10;
		else if(uu>400)
			total=uu*12.5;
		cout<<"                              Your Total Bill Is -: RS."<<total<<endl<<endl;

	}
	void bi()
	{
		cout<<"Initial Meter Reading Is-: "<<imr<<endl;
		cout<<"Final Meter Reading Is-: "<<fmr<<endl<<endl;
	}
	void efmr()
	{
		cout<<"ENTER FINAL METER READING of the customer-: ";
		cin>>fmr;
	}
};
void al()
{
	cout<<"Enter Your Login Password ";
	char lp[50];
	int i = 0;
	char a;
	for(i=0;i<50;)
	{
		a=getch();
		if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
		{
			lp[i]=a;
			++i;
			cout<<"*";
		}
		if(a=='\r')
		{
			break;
		}
		if(a=='\b' && i>=1)
		{
			cout<<"\b \b";
			--i;
		}
	}
	cout<<endl;
	if(strcmp(lp,"agent36")==0)
	cout<<"\t \t \t \t WELCOME AGENT"<<endl;
	else
	{
		cout<<"Wrong Password"<<endl;
		cout<<"Enter Your Login Password ";
		char a;
		for(i=0;i<50;)
		{
			a=getch();
			if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
			{
				lp[i]=a;
				++i;
				cout<<"*";
			}

			if(a=='\r')
			{
				break;
			}
			if(a=='\b' && i>=1)
			{
				cout<<"\b \b";
				--i;
			}
		}
		cout<<endl;
		if(strcmp(lp,"agent36")==0)
		cout<<"\t \t \t \t  WELCOME AGENT"<<endl<<endl;
		else
		{
			cout<<"Wrong Password. Try Logging in Again";
			delay(5000);
			exit(0);
		}
	}
		ifstream ci ;
		ebs s;
		int found=0;
		char cid[50];
		cout<<"Enter CUSTOMER ID ";
		gets(cid);
		cout<<endl;
		ci.open("cust.dat",ios::binary|ios::in);
		while(ci.read((char *)&s,sizeof(s)))
		{
			if(strcmp(s.cinp,cid)==0)
			{
				s.output();
				delay(3000);
				++found;
				goto n;
			}
		}
		ci.close();
		if(found==0)
		{
				cout<<"SORRY THE CUSTOMER ID IS INCORRECT. PLEASE ENTER CORRECT CUSTOMER ID"<<endl;
				cout<<"Enter CUSTOMER ID ";
				gets(cid);
				ci.open("cust.dat",ios::binary|ios::in);
				while(ci.read((char *)&s,sizeof(s)))
				{
					if(strcmp(s.cinp,cid)==0)
					{
						s.output();
						delay(3000);
						++found;
						goto n;
					}
				}
				ci.close();
		}
		if(found==0)
		{
			cout<<endl<<"ERROR!! YOU HAVE ENTERED THE CUSTOMER ID INCORRECTLY 2 TIMES."<<endl<<"KINDLY LOG IN AGAIN ";
			delay(4500);
			exit(0);
		}


  n:
	char u[20];
	cout<<"Do You Want To Update Customer's Bill ? (Y/N) ";
	gets(u);
	cout<<endl;
	if(strcmpi("y",u)==0)
	goto start;
	else
	{
		cout<<"Kindly Login Again ";
		delay(2000);
		exit(0);
	}

start:
		ebs z;
		fstream fi;
		fstream temp;
				fi.open("bill.dat",ios::binary|ios::in);
				temp.open("temp.dat",ios::binary|ios::out);
				while(fi.read((char *)&z,sizeof(z)))
				{
					
					if(strcmp(z.cinp,cid)==0)
					{
						cout<<"                              Customer Id -: "<<z.cinp<<endl<<endl;
						cout<<"INITIAL METER READING of customer-: "<<z.imr<<endl;
						cout<<"ENTER FINAL METER READING of the customer-: ";
						cin>>z.fmr;
						if(z.imr>=z.fmr)
						{
							cout<<"Please Check Customer's Meter Reading Again"<<endl;
							cout<<"                              Customer Id -: "<<z.cinp<<endl<<endl;
							cout<<"INITIAL METER READING of customer-: "<<z.imr<<endl;
							cout<<"ENTER FINAL METER READING of the customer-: ";
							cin>>z.fmr;
							
							if(z.imr>=z.fmr)
							{
								cout<<"Meter Reading is incorrect. Kindly Login Again";
								delay(3000);
								exit(0);
							}
							else
							{
								temp.write((char *)&z,sizeof(z));
							}
						}
						else
						{
							temp.write((char *)&z,sizeof(z));
						}
					}
					else
					{
						temp.write((char *)&z,sizeof(z));
					}
				}
				
				fi.close();
				temp.close();
				remove("bill.dat");
				rename("temp.dat","bill.dat");
				fi.open("bill.dat",ios::binary|ios::in);
				while(fi.read((char *)&z,sizeof(z)))
				{
					if(strcmp(z.cinp,cid)==0)
					{
						z.bill2();
					}
				}
		j:	cout<<"Done";
	}

void cl()
{
	char ci[50],p[50];
	int found=0;
	ifstream in;
	ebs s;
	cout<<"Please enter your CUSTOMER ID-: ";
	gets(ci);
	cout<<endl;
	in.open("cust.dat",ios::binary|ios::in);
	while(in.read((char *)&s,sizeof(s)))
	{
		if(strcmp(s.cinp,ci)==0)
		{
			s.output();
			cout<<endl;
			delay(3000);
			++found;
			goto star;
		}
	}
	in.close();
	if(found==0)
	{
		cout<<"SORRY THE CUSTOMER ID IS INCORRECT. PLEASE ENTER CORRECT CUSTOMER ID"<<endl;
		cout<<"Enter Customer ID ";
		gets(ci);
		in.open("cust.dat",ios::binary|ios::in);
		while(in.read((char *)&s,sizeof(s)))
		{
			if(strcmp(s.cinp,ci)==0)
			{
				s.output();
				cout<<endl;
				delay(3000);
				++found;
				goto star;
			}
		}
		in.close();
	}
	if(found==0)
	{
			cout<<endl<<"ERROR!! YOU HAVE ENTERED THE CUSTOMER ID INCORRECTLY 2 TIMES."<<endl<<endl<<"KINDLY LOG IN AGAIN ";
			delay(4500);
			exit(0);
	}
star:
	fstream c;
	found=0;
	c.open("bill.dat",ios::binary|ios::in);
	while(c.read((char *)&s,sizeof(s)))
	{
		if(strcmp(s.cinp,ci)==0)
		{
			s.bi();
			if(s.fmr==0)
			{
			cout<<"   You Have Already Paid Your Bill OR Your New Bill Has Not Been Updated Yet"<<endl;
			delay(3000);
			exit(0);
			}
			else
			{
			delay(3000);
			++found;
			goto label;
			}
		}
	}
	c.close();
	if(found==0)
	{
		cout<<endl<<"YOUR BILL HAS NOT BEEN UPDATED YET, PLEASE TRY AGAIN LATER."<<endl<<endl<<"KINDLY LOG IN AGAIN ";
		delay(4500);
		exit(0);
	}
label:
	s.custbill();
	cout<<"Do You Wish To Pay Now?(Y/N) -: ";
	gets(p);
	if(strcmpi(p,"y")==0)
	{
		s.pay();
		fstream fi;
		fstream temp;
		fi.open("bill.dat",ios::binary|ios::in);
		temp.open("temp.dat",ios::binary|ios::out);
		while(fi.read((char *)&s,sizeof(s)))
		{
			if(strcmp(s.cinp,ci)==0)
			{
				strcpy(s.cinp,ci);
				s.imr=s.fmr;
				s.fmr=0;
				temp.write((char *)&s,sizeof(s));
			}
			else
			{
				temp.write((char *)&s,sizeof(s));
			}
		}
		fi.close();
		temp.close();
		remove("bill.dat");
		rename("temp.dat","bill.dat");
	}
	else if(strcmpi(p,"n")==0)
	{
		cout<<"\t \t \t \t THANK YOU";
		delay(1500);
		exit(0);
	}
	else
	cout<<"Wrong Input";
	}

void apl()
	{
		fstream fo ;
		fstream fp;
		char c[50];
		ebs s;
		int found=0;
		char b[50];
		cout<<"Check If Customer ID is available -:";
		gets(b);
		fo.open("cust.dat",ios::binary|ios::in);
		while(fo.read((char *)&s,sizeof(s)))
		{
			if(strcmp(b,s.cinp)==0)
			{
				found=1;
				goto sry;
			}
		}
		fo.close();
		if(found==0)
		{
			fo.open("cust.dat",ios::binary|ios::app);
			cout<<"Customer ID available"<<endl;
			strcpy(s.cinp,b);
			cout<<"ENTER YOUR FULL NAME-: "  ;
			cin>>s.n;
			fo.write((char *)&s,sizeof(s));
			for(int i=0;i<25;i++)
			cout<<" ";
			cout<<"YOU HAVE BEEN SUCCESSFULLY REGISTERED"<<endl;
			delay(2000);
			fo.close();
			goto thnx;
		}
	sry:		cout<<"Customer ID not available"<<endl<<endl;
			cout<<"Enter another customer ID -:";
			gets(c);
			found=0;
			fp.open("cust.dat",ios::binary|ios::in);
			while(fp.read((char *)&s,sizeof(s)))
			{
				if(strcmp(c,s.cinp)==0)
				{
					++found;
					cout<<"Customer ID not available. Kindly login again";
					delay(2000);
					exit(0);
				}
			}
			fp.close();
			if(found==0)
			{
				fp.open("cust.dat",ios::binary|ios::app);
				cout<<"Customer ID available"<<endl;
				strcpy(s.cinp,c);
				cout<<"ENTER YOUR FULL NAME-: "  ;
				cin>>s.n;
				fp.write((char *)&s,sizeof(s));
				for(int i=0;i<25;i++)
				cout<<" ";
				cout<<"YOU HAVE BEEN SUCCESSFULLY REGISTERED"<<endl;
				delay(2000);
				fp.close();
				strcpy(b,c);
				goto thnx;
			}
	thnx: 	  fstream h;
			  strcmp(s.cinp,b);
			  s.imr=0;
			  s.fmr=0;
			  h.open("bill.dat",ios::binary|ios::app);
		      cout<<s.cinp;
			  cout<<s.imr;
			  cout<<s.fmr;
		      h.write((char *)&s,sizeof(s));
		      h.close();
	}
void main()
{
	clrscr();
	ebs s;
	int n;
	do{
		clrscr();
		int elec,x;
		for(int i=0;i<80;i++)
			cout<<"_";
		for(i=0;i<27;i++)
			cout<<" ";
		cout<<"ELECTRICITY BILLING SYSTEM"<<endl;
		for(i=0;i<26;i++)
			cout<<" ";
		cout<<"SAVE ELECTRICITY , SAVE MONEY"<<endl;
		for(i=0;i<80;i++)
			cout<<"_";
		for(i=0;i<80;i++)
			cout<<"_";
		cout<<"\t Upto 100 Units .............................. =Rs.3/Unit      \n\n";

		cout<<"\t Upto 200 Units .............................. =Rs.7/Unit     \n\n";

		cout<<"\t Upto 300 Units .............................. =Rs.8.5/Unit   \n\n";

		cout<<"\t Upto 400 Units .............................. =Rs.10/Unit    \n\n";

		cout<<"\t 400+ Units     .............................. =Rs.12.5/Unit    \n\n";
		for(i=0;i<80;i++)
			cout<<"_";
		cout<<"1.NEW CONNECTION/ACCOUNT"<<endl;
		cout<<"2.CUSTOMER LOGIN (if already have an account)"<<endl;
		cout<<"3.AGENT LOGIN"<<endl;
		cout<<"4.EXIT"<<endl;
		cout<<"Enter Your Choice ";
		cin>>n;
		if(n==1)
		apl();
		else if(n==2)
		cl();
		else if(n==3)
		al();
		else if(n==4)
		exit(0);
		else
		{
			cout<<"Please enter choice from above options only";
			delay(3000);
		}
	}
	while(n!=4);
	getch();
}
