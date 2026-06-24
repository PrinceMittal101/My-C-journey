#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to the Trading Assistant !! I hope you trade well "<<endl;
    string name;
    cout<<"Please enter you name : ";
    cin>>name;
    char choice;
    cout<<"What do you need our help with :)"<<endl;
    cout<<"Please select one from the menu below : "<<endl;
    cout<<"A) Profit calculator "<<endl;
    cout<<"B) Loss Calculator "<<endl;
    cout<<"C) Risk Reward Calculator "<<endl;
    cout<<"D) Position value Calculator "<<endl;
    cout<<"Enter the corresponding alphabet (capital letter only)"<<endl;
    cin>>choice;
    if (choice == 'A'){
        float Buy_price;
        float Sell_price;
        int Quantity;
        cout<<"You chose to calculate your profit over the trade"<<endl;
        cout<<"Please enter Buy Price : ";
        cin>>Buy_price;
        cout<<"Buy price of the unit is : "<<Buy_price<<endl;
        cout<<"Please enter Sell Price : ";
        cin>>Sell_price;
        cout<<"Sell price of the unit is : "<<Sell_price<<endl;
        cout<<"Please enter the no of units : ";
        cin>>Quantity;
        cout<<"Profit per unit = " << (Sell_price - Buy_price)<<endl;
        float PPU=(Sell_price - Buy_price);
        cout<<"Total profit = " << (PPU*Quantity)<<endl;}
    else if(choice == 'B'){
        float Buy_price;
        float Sell_price;
        int Quantity;
        cout<<"You chose to calculate your loss over the trade"<<endl;
        cout<<"Please enter Buy Price : ";
        cin>>Buy_price;
        cout<<"Buy price of the unit is : "<<Buy_price<<endl;
        cout<<"Please enter Sell Price : ";
        cin>>Sell_price;
        cout<<"Sell price of the unit is : "<<Sell_price<<endl;
        cout<<"Please enter the no of units : ";
        cin>>Quantity;
        cout<<"Loss per unit is : "<<(Buy_price - Sell_price)<<endl;
        float LPU = (Buy_price - Sell_price);
        cout<<"Total loss is : "<< (LPU*Quantity)<<endl;}
    else if (choice == 'C'){
        float Entry_Price;
        float Stop_loss;
        float Target_Price;
        cout<<"You chose to calculate RISK to REWARD RATIO"<<endl;
        cout<<"Please enter Entry Price : ";
        cin>>Entry_Price;
        cout<<"Please enter Stop Loss : ";
        cin>>Stop_loss;
        cout<<"Please enter Target Price : ";
        cin>>Target_Price;
        float Risk=(Entry_Price - Stop_loss);
        cout<<"Risk over the Trade is : "<< Risk <<endl;
        float Reward=(Target_Price - Entry_Price);
        cout<<"Reward over the Trade is : "<<Reward<<endl;
        cout<<"Risk to Reward ratio over the trade is : "<< (Risk/Reward) <<endl;
    if (Reward/Risk >= 2) {cout<<"Good Trade Setup"<<endl;}
    else {cout<<"Poor Risk Reward"<<endl;}
    }
    else if (choice == 'D'){
        float Price_Per_Share;
        int Quantity;
        cout<<"You chose to calculate Position value"<<endl;
        cout<<"Please enter Price per share : ";
        cin>>Price_Per_Share;
        cout<<"Please enter Quantity : ";
        cin>>Quantity;
        float Position= (Price_Per_Share * Quantity);
        cout<<"Position value over the trade is : "<< Position <<endl;}
    else {cout<<"INVALID CHOICE !!"<<endl;}
    string option;
    cout<<"Do you want to make yourself a Trading Journal for your trade (Yes/No) ? ";
    cin>>option;
    if(option == "Yes"){
        string Stock;
        cout<<"Enter Stock name : ";
        cin>>Stock;
        float Buy_price;
        cout<<"Enter Buy Price : ";
        cin>>Buy_price;
        float Sell_price;
        cout<<"Enter Sell Price : ";
        cin>>Sell_price;
        int Quantity;
        cout<<"Enter the no of units : ";
        cin>>Quantity;
        cout<<"=======TRADE SUMMARY======="<<endl;
        cout<<"STOCK NAME : "<<Stock<<endl;
        cout<<"BUY PRICE : "<<Buy_price<<endl;
        cout<<"SELL PRICE : "<<Sell_price<<endl;
        cout<<"QUANTITY : "<<Quantity<<endl;
        if (Buy_price>Sell_price)
        {cout<<"LOSS : "<<((Buy_price - Sell_price)*Quantity)<<endl;}
        else {cout<<"PROFIT : "<<((Sell_price - Buy_price)*Quantity)<<endl;}
        cout<<"==========================="<<endl;
    }   
    else {cout<<"OK No issues"<<endl;}
    float rating;
    cout<<"Please give rating for the program"<<endl;
    cin>>rating;
    if(rating >= 4){
        cout<<"I am glad you liked it"<<endl;}
    else {cout<<"Thanks! We will try to improve"<<endl;}
    cout<<"Thanks "<< name << " for using the trade assistant"<<endl;
    return 0;

    }