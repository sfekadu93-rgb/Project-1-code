#include <iostream>
using namespace std;	
int sum(int arg[]){
    int total = 0;
    for(int n=0;n<5;n++){
        total+=arg[n];
    }
 return total;
}

int multiplication(int arg[]) {
    int product = 1;
    for(int n=0;n<5;n++){
        product*=arg[n];
    }
    return product;
}

int Maximum(int arg[]){
    int maximum=arg[0];
    for(int i=0;i<5;i++){
        if(arg[i]>maximum) {
            maximum=arg[i];
        }
    }
    return maximum;
}

int Minimum(int arg[]){
    int minimum=arg[0];
    for(int i=0;i<5;i++){
        if(arg[i]<minimum) {
            minimum=arg[i];
        }
    }
    return minimum;
}

int range(int arg[]){
    int maxVal=Maximum(arg);
    int minVal=Minimum(arg);
    return maxVal-minVal;
}
int main() {
    int arg[5];
    cout << "Enter your Five numbers:" << endl;
    
    for (int n=0;n<5;n++){ 
        cin >> arg[n];
    }
    
    cout << "sum = " <<sum(arg)<< endl;
    cout << "Multiplication = " <<multiplication(arg)<<endl;
    cout << "Maximum = " << Maximum(arg)<<endl;
    cout << "Minimum = " << Minimum(arg)<<endl;
    cout << "Range = " <<range(arg)<<endl;
    return 0;
}
