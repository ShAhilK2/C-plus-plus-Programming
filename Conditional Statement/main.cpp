//
//  main.cpp
//  Conditional Statement
//
//  Created by Shahil Kataria on 26/03/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    int numberOne,numberTwo;
    
    cout << "Enter the First Number : ";
    cin >> numberOne;
    
    
    cout << "Enter the Second Number : ";
    cin >> numberTwo;
    
    
    if(numberOne > numberTwo){
        cout << "First Number is Greater than Second Number. Max : " << numberOne << endl;
    }
    else {
        cout << "Second Number is greater than First Number. Max : " << numberTwo << endl;
    }
    
    //Validation Code
    if(true){
        cout << "Hello World" << endl;
    }
    else {
        cout << "Bye"  << endl;
    }
    
    
    
    int a,b,c;
    cout <<"Enter Two Number : ";
    cin >>a>>b;
    
    if (b==0){
        cout << "Division By Zero" <<endl;
    }
    else {
        c=a/b;
        cout << c << endl;
    }
    
    //Compound Conditional Statement
    int hour;
    cout << "Enter Hour  : ";
    cin >> hour;
    if(hour>=9 && hour <=18){
        cout << "It is Working Time" << endl;
    }
    else{
        cout << "It is Leisure Time" << endl;
    }
    
    
    int age;
    cout << "Enter your age : ";
    cin >> age;
    //        if(age>12 || age <50){
    //            cout << "Eligible" <<endl;
    //        }
    //        else {
    //    cout << "Not Eligible"
    //}
    if(age>=12 && age<=50){
        cout << "You are Young" <<endl;
    }
    else{
        cout << "You are Elder" <<endl;
    }
    
    
    
    
    int firstNumber,secondNumber,thirdNumber;
    cout << "Enter Three Numbers : ";
    cin >> firstNumber >> secondNumber >> thirdNumber ;
    if(firstNumber > secondNumber && firstNumber >thirdNumber){
        cout << "First Number is Greatest Among All."<<endl;
    }else if(secondNumber > thirdNumber){
        cout << "Second Number is Greatest Among All."<<endl;
    }
    else{
        cout << "Third Number is Greatest Among All."<<endl;
    }
    
    
    
    int mark1,mark2,mark3;
    float avgMark;
    cout << "Enter the Marks : ";
    cin >> mark1 >> mark2 >>mark3;
    avgMark = (mark1+mark2+mark3 ) /3;
    if(avgMark >=60){
        cout << "A" <<endl;
    }
    else if (avgMark >=35 && avgMark <=60){
        cout<< "B" <<endl;
        
    }
    else{
        cout << "C" <<endl;}
    
    
    
    int day;
    cout << "Enter Day Number  : ";
    cin >> day;
    if (day==0){
        cout << "Sunday" <<endl;
    }
    else if(day==1) {
        cout << "Monday" << endl;
    }
    else if(day==2) {
        cout << "Tuesday" << endl;
    }
    else if(day==3) {
        cout << "Wednesday" << endl;
    }
    else if(day==4) {
        cout << "Thursday" << endl;
    }
    else if(day==5) {
        cout << "Friday" << endl;
    }
    else if(day==6) {
        cout << "Saturday" << endl;
    }
    else {
        cout << "Invalid Number" <<endl;
    }
    
    
    
    //Short Circuit
    
    
    int q=10,w=5,e=5;
    
    //    if(q<w && ++e <=b){ //false 10<5
    //
    //    } //then it doesnot check another condition
    if(q>w && ++e <=b){
        
    }
    
    cout << e << endl;  //6
    
    if(q<w || ++e<=b){
        
    }
    
    cout << e << endl; //6
    
    
    
    
    
    //Switch Statement
    
    
    int DayNo;
    cout << "Enter Your Day : ";
    cin >> DayNo;
    
    switch(DayNo){
        case 0:
            cout << "Today is Monday" <<endl;
            break;
        case 1:
            cout << "Today is Tuesday" <<endl;
            break;
        case 2:
            cout << "Today is Wednesday" <<endl;
            break;
        case 3:
            cout << "Today is Thursday" <<endl;
            break;
        case 4:
            cout << "Today is Friday" <<endl;
            break;
        case 5:
            cout << "Today is Saturday" <<endl;
            break;
        case  6:
            cout << "Today is Sunday" <<endl;
            break;
        default :
            cout << "Invalid" << endl;
    }
    
    
    cout <<"Menu \n";
    int option;
    cout << "1.Add \n" << "2.Sub \n" << "3.Mul \n" << "4.Div \n";
    cin >> option;
    int fN,sN,res;
    cout << "Enter 2 Number : ";
    cin >> fN >> sN;
    switch (option) {
        case 1:
            res=fN+sN;
            cout << "Addition : " << res <<endl;
        case 2:
            res=fN-sN;
            cout << "Subtraction : " << res <<endl;
        case 3:
            res=fN*sN;
            cout << "Multiplcation : " << res <<endl;
            break;
        case 4:
            res=fN/sN;
            cout  << "Division : " << res <<endl;
            
            break;
            
        default:
            break;
    }
    
    float billAmount;
    float discount=0.0;
    cout<<"Enter Bill Amount:";
    cin>>billAmount;
    if(billAmount>=500)
        discount=billAmount*20/100;
    else if(billAmount>=100 && billAmount<500)
        discount=billAmount*10/100;
    cout<<"Bill Amount is:"<<billAmount<<endl;
    cout<<"Discount is :"<<discount<<endl;
    cout<<"Discounted Amount is:"<<billAmount-
    discount<<endl;
    
    
    
    int year ;
    cout << "Enter Year :  ";
    cin >> year;
    
    if(year % 4 == 0){
        if(year % 100 ==0){
            if(year %400 == 0){
                cout << year << " is a leap year .";
            }
                else {
                    cout << year  << " is not a leap year.";
                }
            }
        else {
            cout << year << " is a leap year .";
            }
        }
    
    
    
    
    return 0;
}
    
    
    
    
    
    
    
    
    




/*
 Conditional Statement
 
 
 
 Relational Operators:

 - `<` (less than)
 - `>` (greater than)
 - `<=` (less than or equal to)
 - `>=` (greater than or equal to)
 - `==` (equal to)
 - `!=` (not equal to)

 
 Compound Conditional Statement
 Logical Operators:

 - `&&` (logical AND)
 - `||` (logical OR)
 - `!` (logical NOT)
 
 
 
 
 //Short Circuit
 
 
 
 
One condition then another conditional doesnot check to logical operator
 This mechanism done by the compiler is short circuit
 
 
 
 
 //Dynamic Decalaration
 Activation code of the main function will  e growing and shrinking as u go on dynamically declartion of the variables and they go out of the scope,once the block ends

 
 //int k =exp;
 if(int k=exp ,k <a){
 
 
 }
 
 for (int i =0;i<10;i++){
 
 }
 
 Better Utilize the Memory by Dynamic Declaration
 
 int a=10,b=5;
 
 if(int c>a+b;c<10){   //Work on C++ 17 extension only
 
 }
 
 
 
 
 Switch Case Statement ;
 
 //switch is faster than if else if else
 switch(expr){
 
 case 1 :
    break;
 
 case 2 :
    braek;
 
 
 
 default :
 
 
 }
 
 
 
 

 
 
 
 */


