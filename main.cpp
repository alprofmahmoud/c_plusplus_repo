#include<iostream>
#include<cmath>
using namespace std;

int main(){

  string sprator = "+++++++++++++++++++++++++++\n";
  string firstName = "Mahmoud";
  string lastName  = " Mohammed";
  cout << firstName + "" + lastName <<endl;
  string fulName   = firstName.append(lastName);
  cout <<fulName<<endl;
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
  return 0;
}
// #include<iostream>   : header file library
// using namespace std : we can use names for objects and variables from the standard library.
// A blank line : C++ ignores white space.
// int main : called main function 
// << isertion operator 
// return 0 : ends the main function 
// cout   = use print 
// endl   = new line
// \n     = new line
// \t     = tab space 
// \\     = backslash
// \"     = insert double quote
// //     = single comment
// /* */  = multi comment
//+++++++++++++++++++++++++++
//    Data Type 
// int    2 or 4 bytes = interger (whole number)
// double 8 bytes      = floating point number
// float  4 bytes      = floating point number
// char   1 byte       = single Character surrounded by single quotes 
// bool   1 byte       = Boolean
// const  = unchangeable and read-only
// string = string 
//+++++++++++++++++++++++++++
// cin    = user input
//
//+++++++++++++++++++++++++++
//    Arithmetic Operators 
// Addition         : +
// Subtraction      : - 
// Multiplication   : *
// Division         : /
// Modulus          : %
//
// Numbers are added. Strings are concatenated.
//+++++++++++++++++++++++++++
//    Assignment Operators
// assignment     : =
//                : +=
//                : -=
//                : *=
//                : /=
//                : %=
//+++++++++++++++++++++++++++
// 1 : number % sameNumber = 0 
// 2 : small % big = small
// 3 : big % small = smaall - big
// C++ Comparison Operators
//+++++++++++++++++++++++++++
//    Comparison Operators
// <  :  x less than y
// >  :  x greater than y 
// <= :  x less than or equal to y
// <= :  x greater than or equal to  y
// == :  x equal to y
// != :  x not equal y  
//+++++++++++++++++++++++++++
// increment z++
// decrement z--
// postfix z++
// prefix ++z 
//
// ()     the first
// * / %  the second
// + -    the third
// =      the fourth
//++++++++++++++++++++++++++
//    Logical Operators
// And = &&       # two condition most True
// Or  = ||       # any condition most True
// Not = !        # Not 
//
//++++++++++++++++++++++++++
// Boolean expression
//
// expression that returns a boolean value: 1 (true) or 0 (false).
//
//++++++++++++++++++++++++++
//    Functions 
//  append()      : you can concatenate strings
//  length()      : To get the length of a strings
//  varString[index] : You can access the characters in a string
//  max(var1,var2)   : used to find the highest value of var1 and var2
//  cmath         : Header mathematical header file library 
    sqrt()        : square root
    round()       : rounds a number
    log()         : natural logarithm


