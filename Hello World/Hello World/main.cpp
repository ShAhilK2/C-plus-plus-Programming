#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//enum is defining a group of constants under one name
enum day {mon,tue,wed,thu,fri,sat=9,sun} ;  //All are constant in day

enum dep {CS,ECE,IT,AI};

typedef int marks;
typedef int rollno;

int main()
{
    
    //  Hello Worlds
    cout<<"Hello World \n";
    //Addition of Two Number From User
   
    
 
    /*
     int a,b,c;
    cout << "Enter Two Number : ";
    cin >> a >> b;
    c=a+b;
    cout << "Addition : " << c << endl;
     */
    
    
    //Take Name of User and Greet Her
    
    
    string name;
    cout << "May I Know Your Name : ";
//    cin >> name; //Only First Name Shahil
    getline(cin, name);  //Shahil Kataria
    cout << "Welcome to Mr " << name << endl;
    
    
    
    int x = 13;
    int y = 5;
    float z;

    // Type casting x/y to float
    z = (float)x / y;

    cout << "Type Casting Result: " << z << endl;

    
    
    
    
    //Program for Area of Triangle
    
    
    float Base,Height,area;
    
    cout <<  "Enter Base : ";
    cin >> Base;
    cout <<  "Enter Height : ";
    cin >> Height;
    
    area = (Base*Height)/2;
    cout << "Area of Triangle : " << area << endl;
    
    
    //Area of a Circle
    float radius,AreaCircle;
    cout << "Enter The Radius : ";
    cin >> radius;
    AreaCircle = 3.1425f * radius * radius;
    
    cout << "Area of Cicle : " << AreaCircle << endl;
    
    
    //Find Speed from acceleration and initial and final velocity
    
    
    int u,v,acc;
    float speed ;
    cout << "Enter the initial velocity : ";
    cin >> u;
    cout << "Enter the Final velocity : ";
    cin >> v;
    
    cout << "Enter the Acceleration : ";
    cin >> acc;
    
    speed = (v*v- u*u)/(2*acc);
    
    cout << "Speed : " << speed << endl;
    
    //Find The Sum of First N Natural Number;
    
 
    int upto,sum;

    cout << "Enter the Number : ";
    cin >> upto;
    sum = upto*(upto+1)/2;
    cout << "Sum of First N Natural Number : " << sum <<endl;
    
    
    
    
    //Find Roots of Quadratic Equation:
    
    int first,second,third,positiveroot,negativeroot;
    cout << "Enter the First Coefficient : ";
    cin >> first;
    cout << "Enter the Second Coefficient : ";
    cin >> second;
    cout << "Enter the Third Coefficient : ";
    cin >> third;
    
    positiveroot = (-second + sqrt(second*second- 4*first*third))/(2*first);
    negativeroot = (-second - sqrt(second*second- 4*first*third))/(2*first);
    
    cout << "Root of Quadratic Equation : " <<  positiveroot  << " and " << negativeroot << endl;
     
    
    //Compound Operations
    
    
    int s=10,k=4;
    
    k += s;
    cout << k << endl;
    
    
    int incre=10,decre=11;
    
    decre = incre ++;  //First Assign and Then Increment is Done
    
    cout << decre << " " << incre << endl;
    
    
    //OverFlow  char : -128 to 127
    int maxInt = INT_MAX;
    maxInt++;
    char sk=127;
    ++sk;
    cout << (int)sk << maxInt << endl;
    
    int a1=11,a2=7,a3,a4,a5,a6,a7,a8;
    a3 = a1 & a2;
    a4 = a1 | a2;
    a5 = a1 ^ a2;
    a6 = a1<<1;  //Right Shift its multiply
    a7 = a1>>1; //Left Shift its Divide
    a8 = ~a1; //Not operator
    cout << a3 <<endl;
    cout << a4 <<endl;
    cout << a5 <<endl;
    
    cout << a6 <<endl;
    cout << a7 <<endl;
    cout << a8 <<endl;
    
    
    //enum

    day d;
    d=mon;
    cout << d <<endl;    //0
    
    cout <<tue <<endl;
    cout <<wed <<endl;
    cout <<thu <<endl;
    cout <<fri <<endl;
    cout <<sat <<endl;
    cout <<sun <<endl;
    
    
    dep dp;
    dp=CS;
    
    
    marks m1,m2,m3;
    m1=50;
    m2=30;
    m3=45;
    rollno r1,r2,r3;
    r1 =21;
    r2=22;
    r3 =23;
    
    
    //Write a Program to calculate Net Salary Program should take following as input
    //1.Basic Salary
    //2.Percentage of Allowances
    //3.Percentage of Deductions
    
    
    float basicSalary,percAllowances,percDeductions,netSalary;
    
    
    cout << "Enter the Basic Salary : ";
    cin >> basicSalary;
    
    cout << "Enter the Percentage of Allowances : ";
    cin >> percAllowances;
    
    cout << "Enter the Percentage of Deductions: ";
    cin >> percDeductions ;
    
    
    netSalary = basicSalary + (basicSalary * (percAllowances/100)) - (basicSalary * (percDeductions/100));
    
    cout << "NetSalary : " << netSalary <<endl;
    return 0;
    
}



//Data Types :

/*
 Primitive =>
 Integral => int (2 and 4 bytes) Range : -32768 to 32767  and char(1byte)  Range : -128 to 127
 ,bool (undefined size),
 floating Point => float(4 bytes) and double (8 bytes)
 
 
 Userdefined => enum ,structure ,union and class
 
 Derived => Array ,Pointer and Reference
 
 Modifiers : unsigned and long
 
 unsigned int Range  : 0 - 65535
 unisgned char Range : 0 - 255
 
 long int  : 4 or 8 bytes
 long double : 10 bytes
 

 */

/*
 Variable :  To store Information and Value
 
 
 int rollNo ; Declaration of Variable
 rollNo = 22;  Initialization of Variable
 
 
 int age =23; Declaration and Initialization
 
 
 char group = 'A';  //Single Quote
 
 float price = 12.75f;  //by default you not mention f it's double
 
 Variable Names =>  x1 ,rollNo,RollNo,roll_no,rollno,Roll_No
 
 */

/*
 
 Operators and Expressions
 
 Arithmetic => Addition ,Subtraction ,Multiplication ,Division => Quotient,Modulos => Remainder
                 +          -             *              /                     %
 
 
 
 Type Casting : Result in Floating Point
 
 int a=13,b=5;
 float c ;
 c= (float)a/b;
 
 
 //Mod is allowed in integers and character
 
 
 Percedence and Expressions
 
 Operator           Assumed Precedence
 
 ()                     3
 
 *,/,%                  2
 
 +                      1
 
 
 Left To Right Percedence
 
 x = a + b * c - d / e
          1       2    : Order
 
 
 x = (a + b) * (c - d) / e
        1          2   3     : Order
 
 
 
 
 Compound Assignment
 
 +=
 -=
 *=
 /=
 &=
 |=
 <<=
 >>=
 
 etc
 
 
 
 Increment and Decrement Operator:
 
 Pre Increment     ++x
 int i =5;
 i = i + 1; or  i =+ 1;
  
 i++;
 
 int x=5,y;
 
 y = ++x;   First Increment and then Assign //y=6  x=6
 y = x++;   First Assign and then Increment //y=5  x=6
 
 Post Increment    x++
 
 
 Pre Decrement      --x
 Post Decrement     x--
 
 
 OverFlow
 
 
 char sk=127;
 ++sk;
 cout << sk;
 
 
 
 
 
 Bitwise Operators
 
 & and                    only true if all is true
 | or                     only true if only having one among is true
 ^ x-or                   Both are Different operand then true
 ~ not                    Oppositive to operand
 << left shift :
      
 int x=11,y=5,z;
 
    x= 00001011 ~x= 11110100 
    y= 00000101
z=x&y= 00000001
  x|y= 00001111
  x^y= 00001110
   
 
Multiply with shift number
 
 
 >> right shift
 
 Divide by Shift Number
 
 
 
 
 
 Enum and Typedef
 
 
 Enum is used for userdefined Datatype
 
 enum day{mon,tue,wed,thur,fri,sat,sun}
           0    1   2   3   4   5   6
 day d;
 d=mon;
 d=fri;
 
 
 enum dep{CS =1,ECE,IT,CIVIL}
dept d;
d=CSE;
 
 
 typedef int marks;
 typedef int rollno;
 
 
 marks m1,m2,m3;
 rollno r1,r2,r3;
 
 //just Readiliability of a program to utilize
 
 
 
 
 
 
 
 */


 
       
   



