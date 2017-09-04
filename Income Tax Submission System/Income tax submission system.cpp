//income tax return/submission system....................computer programming project.......prepared by Anil Kumar Yadav
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()

{
                                                      fstream member;
int i;char fname[20];long int tax_cal(long int),taxes;
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                     WELCOME TO                                        |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            INCOME TAX SUBMISSION SYSTEM                               |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                     OF KERALA                                         |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                       -:prepared by Anil Kumar Yadav  |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");


//giving option to the user for their choice

cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t _______________________________________________________________________________ \n";
cout<<"\t\t\t\t\t|                                           	                                |\n";
cout<<"\t\t\t\t\t|             1 --> New Registration In Income Tax Department                   |\n";
cout<<"\t\t\t\t\t|             2 --> Log into an Account                                         |\n";
cout<<"\t\t\t\t\t|             3 --> Show List of all Registered Tax-Payers                      |\n";
cout<<"\t\t\t\t\t|             4 --> Information About Tax Calculation and its Criteria          |\n";
cout<<"\t\t\t\t\t|             5 --> Exit from the Program                                       |\n";
cout<<"\t\t\t\t\t|_______________________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\tGive your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice

//Registering new tax payers in income tax department ........option 1
system("cls");
if(i==1)
{
  cout<<"\n\n\t\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the Tax-Payer's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";getch();system("cls");goto b;
		}
		else
		{
                        struct payer_info
                        {
                            char name[20];
                            char address[100];
                            char dob[15];
                            char age[2];
                            char sex[8];
                            char nationality[20];
                            char aadhar[15];
                            char pan[15];
                            char contact[10];
                            char occupation[30];
                            char salary[15];
                        };

            payer_info ak;
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
            cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nOccupation : ";pat_file<<"Occupation : ";gets(ak.occupation);pat_file<<ak.occupation<<"\n";
            cout<<"\nSalary per annum : ";pat_file<<"Salary per annum : ";gets(ak.salary);pat_file<<ak.salary<<"\n";pat_file<<"\n-----------------------------------------------------------------------------------------!\n";
            pat_file<<"\nMore information about "<<fname<<"...................\n";
            cout<<"\nResidential Address : ";pat_file<<"Residential Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nDate of Birth : ";pat_file<<"Date of Birth : ";gets(ak.dob);pat_file<<ak.dob<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nNationality : ";pat_file<<"Nationality : ";gets(ak.nationality);pat_file<<ak.nationality<<"\n";
            cout<<"\nAadhar Card Number : ";pat_file<<"Aadhar Card Number : ";gets(ak.aadhar);pat_file<<ak.aadhar<<"\n";
            cout<<"\nPAN Card Number : ";pat_file<<"PAN Card Number : ";gets(ak.pan);pat_file<<ak.pan<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            pat_file<<"Date and Time of Registration : "<<asctime (timeinfo);
            cout<<"\n********************************************************************\n\n";pat_file<<"\n********************************************************************^\n";
            cout<<"\nYou have been Registered in Income Tax Department of Kerala\n";
            pat_file.close();

            char ch;
            ifstream pat_file;
            ofstream member;
            pat_file.open(fname);
            member.open("list.txt", ios:: out | ios::app );

                            while(ch!='!')
                            {
                                ch = (char) pat_file.get();
                                member.put(ch);
                            }
            pat_file.close();
            member.close();
            }
  system("pause");
  system("cls");
  goto b;

}

//Exiting Through the system with a Thank You note........................option 5
if(i==5)
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  THANKS FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                           INCOME TAX SUBMISSION SYSTEM                                |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|              -you can play a vital role in the Development of our country             |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                       -:prepared by Anil Kumar Yadav  |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}

//Information about Tax Calculation and its Criteria......................option 4
if(i==4)
{
	ifstream file;
	file.open("income.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";getch();system("cls");goto b;
		}
		else
		{
            cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//logging into an account......................................option 2
if(i==2)
{
cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
e:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t _______________________________________________________________________________ \n";
cout<<"\t\t\t\t\t|                                           	                                |\n";
cout<<"\t\t\t\t\t|             1 --> View Personal Details                                       |\n";
cout<<"\t\t\t\t\t|             2 --> Submit Income Tax                                           |\n";
cout<<"\t\t\t\t\t|             3 --> History of all Paid Taxes                                   |\n";
cout<<"\t\t\t\t\t|             4 --> Logout from the Account                                     |\n";
cout<<"\t\t\t\t\t|_______________________________________________________________________________|\n\n";
d:cout<<"\t\t\t\t\tGive your choice: ";cin>>i;
if(i>4||i<1){cout<<"\n\n\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\tTry again...........\n\n";goto d;}

        //for option 4...........................logging out
        system("cls");
        if(i==4)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<"\t\t\t\t\t _______________________________________________________________________________ \n";
            cout<<"\t\t\t\t\t|                                           	                                |\n";
            cout<<"\t\t\t\t\t|                                                                               |\n";
            cout<<"\t\t\t\t\t|                 SUCCESSFULLY LOGGED OUT FROM THE ACCOUNT                      |\n";
            cout<<"\t\t\t\t\t|                                                                               |\n";
            cout<<"\t\t\t\t\t|_______________________________________________________________________________|\n\n\t\t\t\t\t";system("pause");system("cls");goto b;
        }

        //for option 1............................view personal details
        if(i==1)
        {
            fstream pat_file;
            cout<<"\n\nEnter the tax payer's file name to be opened : ";
            cin.ignore();
            gets(fname);
            system("cls");
            pat_file.open(fname, ios::in);
                if(!pat_file)
                {
                cout<<"\nError while opening the file\n";getch();system("cls");goto b;
                }
                else
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
                    cout<<"\n\n\n\n\t\t\t\t........................................ Personal Details of "<<fname<<" ........................................\n\n\n\n";

                    fstream in; char ch='s';    int i;
                    in.open(fname, ios::in );
                    in.seekg(ios::beg);
                            for (i=0; ch!='^' ;i++)
                            {
                            in.get(ch);
                            cout<<ch;
                            }in.close();
                }
                cout<<"\n\n";
                system("pause");
                system("cls");
                goto e;
        }

        //for option 2.............................submit income tax
        if(i==2)
        {
        fstream pat_file;
        cout<<"\n\nEnter the tax payers's file name to be opened : ";
        cin.ignore();
        gets(fname);
        system("cls");
        pat_file.open(fname, ios::in);
            if(!pat_file)
            {
            cout<<"\nError while opening the file\n";getch();system("cls");goto b;
            }
		else
            {   cout<<"\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
                cout<<"\n\n\n\n\n\n\n\t\t\t\t........................................ Submission of tax by "<<fname<<" ........................................\n\n\n\n";
                string info;
                while(pat_file.good())
                {
                getline(pat_file,info);
                cout<<info<<"\n";
                }
                cout<<"\n";
                pat_file.close();
                pat_file.open(fname, ios::out | ios::app);
                cout<<"\n";
                cout<<"Tax Submission ................on : "<<asctime (timeinfo);pat_file<<"Tax Submission Details on "<<asctime (timeinfo)<<"\n";

                long int time,salary;
                cout<<"\nEnter the Salary of Tax Payer per Annum : Rs. ";
                cin>>salary;
                pat_file<<"\nSalary per Annum : Rs. "<<salary;
                cout<<"\nTime in year for which you want to pay tax : ";
                cin>>time;
                pat_file<<"\nTime (in year) : "<<time;
                        if(time<2)
                        {
                            taxes = tax_cal(salary);
                            cout<<"\nTax to be Paid for "<<time<<" year = "<<taxes;
                            pat_file<<"\nTax Paid (without fine) = "<<taxes;
                        }
                        else if((time>=2)|| (time<5))
                        {
                            taxes = tax_cal(salary) + (tax_cal(salary)*0.25);
                            cout<<"\nTax to be Paid for "<<time<<" year = "<<taxes;
                            pat_file<<"\nTax Paid (with fine) = "<<taxes;
                        }
                        else if (time<=5)
                        {
                            taxes = tax_cal(salary) + (tax_cal(salary)*0.75);
                            cout<<"\nTax to be Paid for "<<time<<" year = "<<taxes;
                            pat_file<<"\nTax Paid (with fine) = "<<taxes;
                        }
                cout<<"\n\nPAYMENT IS UNDER PROCESS................\n";getch();cout<<"\nTAX PAID SUCCESSFULLY.\n";pat_file<<"\n*************************************************************************\n";

                pat_file.close();
                cout<<"\n\n";
                system("pause");
                system("cls");
                goto e;
		}
}

        //for option 3............................history of all paid taxes
        if(i==3)
        {
        fstream pat_file;
        cout<<"\n\nEnter the tax payer's file name to be opened : ";
        cin.ignore();
        gets(fname);
        system("cls");
        pat_file.open(fname, ios::in);
            if(!pat_file)
            {
            cout<<"\nError while opening the file\n";getch();system("cls");goto b;
            }
            else
            {
                cout<<"\n\n\n\n\n\n\n\t\t\t\t........................................ History of all Paid Taxes by "<<fname<<" ........................................\n\n\n\n";
                string info;
                while(pat_file.good())
                {
                getline(pat_file,info);
                cout<<info<<"\n";
                }
                cout<<"\n";
            }
            system("pause");
            system("cls");
            goto e;
}



}

//show list of all Registered tax Payers.........................option 3
if(i==3)
{
    ifstream files;
	files.open("list.txt");
		if(!files)
		{
		cout<<"\nError while opening the file\n";getch();system("cls");goto b;
		}
		else
		{
            cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<asctime (timeinfo);
		    string line;
			while(files.good())
			{
			getline(files,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

cout<<"\n";
}


long int tax_cal(long int s)
{
    long int tax;
    if(s<250000)
    {
        tax = 0 ;
    }
    else if ((s>=250000)||(s<500000))
    {
        tax =(s*0.1);
    }
    else if ((s>=500000)||(s<1000000))
    {
        tax = (s*0.2);
    }
    else if(s>=1000000)
    {
        tax = (s*0.3);
    }

    return tax;
}




