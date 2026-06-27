#include<iostream>
using namespace std;
int main(){
    int pass=8000;
    int pin;
    int x=3;
    int ini=10000;
    cout<<"Welcome to ATM simulator"<<endl;
    cout<<"You have Initial balance as 10000$"<<endl;
    cout<<"To login you need to enter PIN and the PIN is : (80*[60 - {7*8 + (13 - 2*5)}])*100"<<endl;
    while(x>0){
        cout<<"Please enter 4 digit PIN :  ";
        cin>>pin;
        if(pin == pass){cout<<"Correct PIN !!"<<endl;
            x = x-3;}
        
        else {cout<<"Incorrect PIN !! Try again "<<endl;
            x--;
            cout<<"Attempts remaining : "<<x<<endl;}
        }
    if(x==0 && pin !=pass){cout<<"You need to re-run the code"<<endl;
    return 0;}
    int n;
    int dep;
    int with;
    int DepositSum = 0;
    int WithdrawSum = 0;
    int a=0;
    int b=0;
    string choice = "yes";
    while(choice == "yes"){cout<<"========ATM========"<<endl;
    cout<<"1. Check Balance "<<endl;
    cout<<"2. Deposit Money "<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"          <<endl;
    cout<<"Enter the corresponding number to use the facility : ";
    cin>>n;
    if(n==1){cout<<"Current Balance = "<<ini<<endl;}
    else if(n==2){cout<<"Enter amount to deposit : ";
                  cin>>dep;
                  if(dep>0)
                  {ini = ini + dep;
                  DepositSum = DepositSum + dep;
                  a = a+1;
                  cout<<"Your new balance is : "<<ini<<endl;}
                  else{cout<<"Invalid Deposit amount"<<endl;}}
    else if(n==3){cout<<"Enter amount to withdraw : ";
                  cin>>with;
                  if(with>ini){cout<<"INSUFFICIENT BALANCE"<<endl;}
                  else if(with <= 0){cout<<"INVALID AMOUNT"<<endl;}
                  else if(with > 20000){cout<<"Daily limit exceeded"<<endl;}
                  else{ini = ini-with;
                       WithdrawSum = WithdrawSum + with;
                       b = b+1;
                  cout<<"Transaction successful"<<endl;
                  cout<<"Your new balance is : "<<ini<<endl;}}
    else if(n==4){cout<<"Exit successful"<<endl;
                  choice = "no";
                  break;
    }
    else{cout<<"Invalid option chosen"<<endl;}
    cout<<"Do you want another transaction (yes/no) : ";
    cin>>choice;}
    if(ini < 1000){cout<<"Warning Balance is Low"<<endl;}
    
    cout<<"========ATM SUMMARY========"<<endl;
    cout<<"Final balance : "<<ini<<endl;
    cout<<"Deposits made : "<<a<<endl;
    cout<<"Withdrawls made : "<<b<<endl;
    cout<<"Total money deposited : "<<DepositSum<<endl;
    cout<<"Total money withdrawl : "<<WithdrawSum<<endl;
    cout<<"Thanks for using our ATM service"<<endl;
    return 0;
    }
    
                  
    
    
