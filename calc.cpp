/*
Catalina Bedoya
CSCI 135
Project 1B
This program builds a simple calculator that can add and subtract integers
will also accept arbitrarily long mathematical formulas composed of symbols
and non-negative numbers


*/

#include <iostream>

#include <sstream>

#include <string>

#include <cctype>

using namespace std;

string PreNum( string str )

{

   string result;

   for ( int i=0;i<str.length();i++ )

        if ( !isspace( str[i] ) ) result += str[i];

   return result;

}

int main()

{

   int n;

   int s = 0;

   string inp;

   cout << "Enter an expression: ";

   getline( cin, inp );

   inp = PreNum( inp );

   stringstream ss( inp );

   while ( ss >> n ) s += n;

   cout << "Result : " << s << '\n';

   system("pause");

}