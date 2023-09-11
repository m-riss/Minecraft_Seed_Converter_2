#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit_Variable = 0;
int Seed_String_Length = 0;
int Seed_String_Length_2 = 0;
bool Multiple_Words_In_Seed = 0;
string Space = "";
string Colon = "";
string Period = "";
string QuestionMark = "";
string First_Seed = "";
string Second_Seed = "";

QuestionMark = "?";
Space = " ";
Period = ".";
Colon = ":";

cout << "Are There Multiple Words In Your Seed" << "?" << endl;
cin >> Multiple_Words_In_Seed;

cout << "Note" << Colon << Space << "Seeds are limited to thirty two characters in length" << Period << endl;

cout << "What is the first text seed you want to convert" << QuestionMark << endl;
cin >> First_Seed;

cout << First_Seed << endl;


















/*
string Example = "";
string Example_2 = "";
Example = "I love Blahajs";

Seed_String_Length = Example.length();

cout << Seed_String_Length << endl;

Example_2 = "Seeds are limited to thirty two characters in length.";
Seed_String_Length_2 = Example_2.length();
cout << Seed_String_Length_2 << endl;
*/
cin >> Exit_Variable;
return 0;
}
