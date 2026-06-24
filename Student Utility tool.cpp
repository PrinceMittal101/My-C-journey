#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to the student Utility Tool"<<endl;
    cout<<"Please enter your Name : ";
    string Name;
    cin>>Name;
    int A, B, C, D ;
    string choice;
    cout<<"Choose one of the following :- "<<endl;
    cout<<"A) Area of Circle"<<endl;
    cout<<"B) Rectangle Calculator"<<endl;
    cout<<"C) Ascii value finder"<<endl;
    cout<<"D) Percentage Calculator"<<endl;
    cout<<"Enter the corresponding Alphabet (Capital letter only) : ";
    cin>>choice;
    if(choice == "A"){
        cout<<"You chose to calculate Area of circle "<<endl;
        float radius;
        cout<<"Enter radius of Circle : ";
        cin>>radius;
        cout<<"Area of the circle of given radius is : "<< 3.14*radius*radius <<endl;}
    else if(choice == "B"){
        cout<<"You chose to calculate Area/Perimeter of rectangle" <<endl;
        float length, breadth;
        cout<<"Enter Length of the rectangle : ";
        cin>>length;
        cout<<"Enter Breadth of the rectangle : ";
        cin>>breadth;
        cout<<"Area of the rectangle of given dimensions is : " <<length*breadth<<endl;
        cout<<"Perimeter of the rectangle of given dimensions is : " <<2*(length + breadth)<<endl;}
    else if(choice == "C"){
        cout<<"You chose to find Ascii value of any char"<<endl;
        char x;
        cout<<"Input the char you need to find the Ascii value of :";
        cin>>x;
        cout<<"The ascii value of the given char is : " << (int)x<<endl;}
    else if(choice == "D"){
        cout<<"You chose to calculate percentage with given marks"<<endl;
        float Subject1;
        float Subject2;
        float Subject3;
        float Subject4;
        float Subject5;
        cout<<"Enter the marks of Subject 1(out of 100) : ";
        cin>>Subject1;
        cout<<"Enter the marks of Subject 2(out of 100) : ";
        cin>>Subject2;
        cout<<"Enter the marks of Subject 3(out of 100) : ";
        cin>>Subject3;
        cout<<"Enter the marks of Subject 4(out of 100) : ";
        cin>>Subject4;
        cout<<"Enter the marks of Subject 5(out of 100) : ";
        cin>>Subject5;
        cout<<"Your Total marks are : " << (Subject1 + Subject2 + Subject3 + Subject4 + Subject5)<<endl;
        cout<<"Percentage is : " << (Subject1 + Subject2 + Subject3 + Subject4 + Subject5)/500 * 100 <<endl;}
    else {cout<<"INVALID CHOICE !!"<<endl;}
    cout<<"Thanks "<< Name << " for using our Student utility Tool "<<endl;
        float rating;
        cout<<"Please rate this program out of 5 : ";
        cin>>rating;
    if(rating >= 4) {cout<<"I am glad you Liked our program !!"<<endl;}
    else {cout<<"Thanks for the rating!! We will try to improve it"<<endl;}
        return 0;
    }