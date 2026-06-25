#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to Trading performance analyser"<<endl;
    int t;
    cout<<"How many trades did you take : ";
    cin>>t;
    int i=1;
    int x=0;
    int y=0;
    int z=0;
    float sum=0;
    float PL;
    float biggest = 0;
    float smallest = 0;
    while(i<=t){
        cout<<"Enter profit/Loss of Trade "<< i << " : ";
        cin>>PL;
        if(PL>0){cout<<"Congrats ! It was a profitable Trade"<<endl;}
        else if(PL <0) {cout<<"No worries ! Better luck next time"<<endl;}
        else {cout<<"Break-even trade "<<endl;}
        if(PL>0){x=x+1;}
        else if(PL < 0){y=y+1;}
        else{z=z+1;}
        sum = sum + PL;
        if(biggest < PL){biggest = PL;}
        if(smallest > PL){smallest = PL;}
        i++;
    }
    
    cout<<"Your total Profit/Loss is : "<< sum << endl;
    cout<<"Total Profitable Trades are : "<<x<<endl;
    cout<<"Total Losing Trades are : "<<y<<endl;
    float avg=(float)sum/t;
    cout<<"Daily profit/Loss average is : "<<avg<<endl;
    if(x>y){cout<<"More winning than losing Trades -> GOOD PERFORMANCE !! "<<endl;}
    else if (x<y){cout<<"More losing Trades -> NEEDS IMPROVEMENT !! "<<endl;}
    else{cout<<"AVERAGE PERFORMANCE !! "<<endl;}
    if (biggest >0){cout<<"Profit of most Profitable trade was : "<< biggest << endl;}
    else {cout<<"OOPS!! No profitable trade this time"<<endl;}
    if(smallest < 0){cout<<"Loss of most Losing trade was : "<< smallest << endl;}
    else{cout<<"Voila !! There was no loss in any trade "<<endl;}
    cout<<"Thank you for using !!"<<endl;
    return 0;
}