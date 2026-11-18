#include <iostream>

using namespace std;
struct Account{
	int number;
	int pin;
	char name[20];
	double balance;
	bool locked;
};
Account accounts[3];
int count=0;
int findAccount (int num){
	for(int i=0;i<count;i++){
		if(accounts[i].number==num)
		return i;
	}
	return -1;
}

void createAccounts() {
	cout<<"Enter your Account Number";
	cin>>accounts[count].number;
	cout<<"Enter your Name";
	cin>>accounts[count].name;
	cout<<"Enter your Balance";
	cin>>accounts[count].balance;

cout<<"Set account Password:";
cin>>accounts[count].pin;
accounts[count].locked=false;
count++;
cout<<"Account created!"<<endl;}
void viewAccounts() {
	for (int i=0;i<count;i++){
		cout<<accounts[i].number<<" "<<accounts[i].name<<"Balance:"<<accounts[i].balance<<endl;
	}
}
void deposit() {
int num;
int i;
int amount;
if(accounts[i].locked){
		cout<<"Account is locked!";return;}
	cout<<"Enter pin(4-DIGIT):"<<endl;
	for(int i=0;i<3;i++){
		int entered_pin;
		cin>>entered_pin;
		if(entered_pin==accounts[i].pin){
			cout<<"Correct";
			cout<<"Enter Amount:";
			cin>>amount;
			accounts[i].balance-=amount;
			cout<<"Withdraw.New Balance:"<<accounts[i].balance<<endl;
			return;
		}
		else {
			cout<<"Wrong Pin, Enter correct Pin"<<endl;
		}
	}
	accounts[i].locked=true;
	cout<<"Account locked after 3 wrong tries!"<<endl;
}

void withdraw() {
int num;
int i;
int amount;
	if(accounts[i].locked){
		cout<<"Account is locked!";return;}
	cout<<"Enter pin(4-DIGIT):"<<endl;
	for(int i=0;i<3;i++){
		int entered_pin;
		cin>>entered_pin;
		if(entered_pin==accounts[i].pin){
			cout<<"Correct";
			cout<<"Enter Amount:";
			cin>>amount;
			accounts[i].balance-=amount;
			cout<<"Withdraw.New Balance:"<<accounts[i].balance<<endl;
			return;
		}
		else {
			cout<<"Wrong Pin, Enter correct Pin"<<endl;
		}
	}
	accounts[i].locked=true;
	cout<<"Account locked(Not more than three trial)!"<<endl;

}
int main() {
	cout<<"create Account:"<<endl;
	createAccounts();
	int choice;
	do{
		cout<<"1-Withdraw Money:"<<endl;
		cout<<"2-Deposit Money:"<<endl;
		cout<<"Enter your choice";
		cin>>choice;
	switch(choice){
	
		case 1:
			withdraw(); 
			break;
		case 2:
		    deposit();
		    break;

	}
	}while(choice!=2);
return 0;

}

