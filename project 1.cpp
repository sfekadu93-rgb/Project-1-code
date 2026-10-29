#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char subject[3][20]={"M1","M2","M3"};
	char names[5][20];
	int marks[5][3];
	int total[5];
	double average[5];
	cout<<"Enter name of the students: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Student"<<i+1<<":";
		cin.getline(names[i],20);
	}
	for(int i=0;i<5;i++){
		cout<<"Enter"<<"  " <<names[i]<<"  " <<"marks:"<<endl;
		total[i]=0;
		for(int j=0;j<3;j++) {
			cout<<subject[j]<<":";
			cin>>marks[i][j];
			total[i]+=marks[i][j];
		}
		average[i]=total[i]/3.0;
	}
	cout<<endl;
	cout<<setw(20)<<"Names";
	for(int j=0;j<3;j++) {
		cout<<setw(20)<<subject[j];
	}
	cout<<setw(20)<<"Total";
	cout<<setw(20)<<"Average"<<endl;
	for(int i=0;i<5;i++) {
		cout<<setw(20)<<names[i];	
	
	for(int j=0;j<3;j++) {
		cout<<setw(20)<<marks[i][j];
	}cout<<setw(20)<<total[i];
	cout<<setw(20)<<average[i]<<endl;
	}
	double top=average[0];
	for(int i=0;i<5;i++) {
		if(average[i]>top) top=average[i];
	}
cout<<endl;
for(int i=0;i<5;i++) {
	if(top==average[i]) {
		cout<<endl;
		cout<<"Top student:"<<names[i]<<endl;
	}
}
}
