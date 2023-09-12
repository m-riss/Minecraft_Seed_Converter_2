#include "Integers.cpp"
#include "Strings.cpp"
#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

bool Multiple_Words_In_Seed = 0;
int First_Seed_Character_Number = 0;
int Second_Seed_Character_Number = 0;
int Third_Seed_Character_Number = 0;
int Fourth_Seed_Character_Number = 0;
int Fifth_Seed_Character_Number = 0;
int ASCII_Codes_Array[80] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

string Second_Character_of_First_Seed = "";
string Third_Character_of_First_Seed = "";
string Fourth_Character_of_First_Seed = "";
string Fifth_Character_of_First_Seed = "";

QuestionMark = "?";
Space = " ";
Period = ".";
Colon = ":";
Comma = ",";

ASCII_Codes_Array[0] = 65;
ASCII_Codes_Array[1] = 66;
ASCII_Codes_Array[2] = 67;
ASCII_Codes_Array[3] = 68;
ASCII_Codes_Array[4] = 69;
ASCII_Codes_Array[5] = 70;
ASCII_Codes_Array[6] = 71;
ASCII_Codes_Array[7] = 72;
ASCII_Codes_Array[8] = 73;
ASCII_Codes_Array[9] = 74;
ASCII_Codes_Array[10] = 75;
ASCII_Codes_Array[11] = 76;
ASCII_Codes_Array[12] = 77;
ASCII_Codes_Array[13] = 78;
ASCII_Codes_Array[14] = 79;
ASCII_Codes_Array[15] = 80;
cout << ASCII_Codes_Array[0] << endl;
cout << ASCII_Codes_Array[1] << endl;
cout << ASCII_Codes_Array[2] << endl;
cout << ASCII_Codes_Array[3] << endl;
cout << ASCII_Codes_Array[4] << endl;
cout << ASCII_Codes_Array[5] << endl;
cout << ASCII_Codes_Array[6] << endl;
cout << ASCII_Codes_Array[7] << endl;
cout << ASCII_Codes_Array[8] << endl;
cout << ASCII_Codes_Array[9] << endl;
cout << ASCII_Codes_Array[10] << endl;
cout << ASCII_Codes_Array[11] << endl;
cout << ASCII_Codes_Array[12] << endl;
cout << ASCII_Codes_Array[13] << endl;
cout << ASCII_Codes_Array[14] << endl;
cout << ASCII_Codes_Array[15] << endl;

//cin >> Exit_Variable;
//return 0;



//cout << "Are There Multiple Words In Your Seed" << QuestionMark << endl;
//cin >> Multiple_Words_In_Seed;

cout << "Note" << Colon << Space << "Seeds are limited to thirty two characters in length" << Period << endl;

cout << "What is the first text seed you want to convert" << QuestionMark << endl;
cin >> First_Seed;

First_Seed_Length = First_Seed.length();
cout << First_Seed_Length << endl;

char* First_Seed_Array = new char[First_Seed_Length + 1];
strcpy(First_Seed_Array, First_Seed.c_str());
cout << First_Seed_Array[0] << endl;

First_Character_of_First_Seed = First_Seed_Array[0];
Second_Character_of_First_Seed = First_Seed_Array[1];
Third_Character_of_First_Seed = First_Seed_Array[2];

if (First_Character_of_First_Seed == "A") {
First_Seed_Character_Number = ASCII_Codes_Array[0]; }

if (First_Character_of_First_Seed == "B") {
First_Seed_Character_Number = 66; }

if (First_Character_of_First_Seed == "C") {
First_Seed_Character_Number = 67; }

if (First_Character_of_First_Seed == "D") {
First_Seed_Character_Number = 68; }

if (First_Character_of_First_Seed == "E") {
First_Seed_Character_Number = 69; }

if (Second_Character_of_First_Seed == "A") {
Second_Seed_Character_Number = 65;
}



cout << First_Seed_Character_Number << endl;


/*
if (First_Seed_Length < 32) {

char* First_Seed_Array = new char[First_Seed.length() + 1];
First_Seed_Array[First_Seed.length()] = '\0';

for (i = 0; i < First_Seed.length(); i++) {
First_Seed_Array[i] = First_Seed[i];
}
cout << First_Seed_Array << endl;
} else {
cout << "Your Text String Is Too Long" << Period << endl;
cout << "Please Split Up Your Input String" << Comma << Space << "Or Make It Shorter" << Period << endl;
}
//cout << First_Seed << endl;
string Example = "";
string Example_2 = "";
Example = "I love Blahajs";
Seed_String_Length = Example.length();
cout << Seed_String_Length << endl;
Example_2 = "Seeds are limited to thirty two characters in length.";
Seed_String_Length_2 = Example_2.length();
cout << Seed_String_Length_2 << endl;
char* char_arr = First_Seed.data();
cout << char_arr << endl;
*/
cin >> Exit_Variable;
return 0;
}
