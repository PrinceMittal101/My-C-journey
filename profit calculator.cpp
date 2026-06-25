#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"How many days you want to calculate your Profit/Loss of : ";
    cin>>j;
    int i = 1;
    int profit;
    int sum=0;
    while(i<=j){
        cout<<"Day " << i << " : " ;
        cin>>profit;
        sum = sum+profit;
        i++;
    }
    cout<<"Your Total Profit is : "<<sum<<endl;
    float x=(float)sum/j;
    cout<<"Your average daily profit is : "<< x <<endl;
    return 0;
}