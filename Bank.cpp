//Program to change money balance
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct MyData{
    string Myname;
    int MyId;
    int MyAge;
    int MySalary;
    int pass;
} ;
int main()
{
 MyData Client;
  cout<<"Welcome!"<<endl;
 cout<<"Enter Your information please ! \n";
 cout<<"Enter Your Full name please : ";
getline(cin,Client.Myname);
int YearOfBirth;
 cout<<"Enter Your Year of birth : ";
 cin>>YearOfBirth;
 Client.MyAge=2024-YearOfBirth;
 cout<<"Enter Your Id : ";
 cin>>Client.MyId;
 cout<<"Enter Your Salary Please : ";
 cin>>Client.MySalary;
 cout<<"Enter Your passcode Please To activate Your Account : ";
 cin>>Client.pass;
 int pass;
 cout<<"Enter your pass Again to makes sure of Your information and make any change to Your Salary : ";
int counter=0;
do{
cin>>pass;
if(pass==Client.pass){
cout<<"Your Name is : "<<Client.Myname<<endl;
cout<<"Your Age is : "<<Client.MyAge<<endl;
cout<<"Your Id is : "<<Client.MyId<<"\n";
cout<<"Your Salary is : "<<Client.MySalary<<endl;
cout<<"You Want "<<endl;
cout<<"1 :Deposit money \n";
cout<<"2 :Withdraw money"<<endl;
int choice;
cin>>choice;
switch (choice){
    case 1 :
    int Deposit;
    cout<<"How much do you want to deposite :";
    cin>>Deposit;
    Client.MySalary+=Deposit;
    break;
    case 2:
    int Withdraw;
    cout<<"How much do yo want to withdraw : ";
    cin>>Withdraw;
    if(Withdraw>Client.MySalary){
        cout<<"Invalid Choice"<<endl;
    } 
    Client.MySalary-=Withdraw;
    break;
    default:
    cout<<"We Can't Understand Your choice";
    }
    cout<<"Your information after Modify data is : \n";
 cout<<"Your Name is : "<<Client.Myname<<endl;
cout<<"Your Age is : "<<Client.MyAge<<endl;
cout<<"Your Num is : "<<Client.MyId<<"\n";
cout<<"Your Salary is : "<<Client.MySalary;
break;
}
else{ 
    cout<<"Wrong Pass, Try Again please : ";
    counter++;
}
}while(counter<4);
if(counter==4){
    cout<<"It's better to go to bank and check your pass , Thanks!";
}

    return 0;
}