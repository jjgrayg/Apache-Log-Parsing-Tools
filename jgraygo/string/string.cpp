//Function definitions for the class String
//Jarod Graygo

#include <iostream>
#include "string.hpp" 

//////////////////////////////////
// CONSTRUCTORS
//////////////////////////////////

//Default constructor for String
//Initializes to an empty string
String::String()
{
	for (int i = 0; i < STRING_SIZE; i++) str[i] = 0;
}

//Char constructor for String
String::String(char x) : String()
{
	str[0] = x;
}

//Char array constructor for String
String::String(const char x[]) : String()
{
	for (int i = 0; i < STRING_SIZE; i++)
	{
		if (x[i] == 0) break;
		str[i] = x[i];
	}
}

//////////////////////////////////
// OPERATOR OVERLOADS
//////////////////////////////////

//Output operator overload
std::ostream& operator<<(std::ostream& out, const String& string)
{
	for (int i = 0; i < STRING_SIZE; i++)
	{
		if (string.str[i] == 0) break;
		out << string.str[i];
	}

	return out;
}

//Accessor and Modifier for String
char& String::operator[](int index) { return str[index]; }

//Simple Accessor for String
char String::operator[](int index) const { return str[index]; }

//Concatenation operator for 2 Strings
String String::operator+ (const String& string) const
{
	int index = 0;
	String temp;
	for (int i = 0; i < STRING_SIZE; i++) temp[i] = this->str[i];
	while (string[index] != 0)
	{
		temp[(length() + index)] = string[index];
		index++;
	}

	return temp;
}

//////////////////////////////////
// MEMBER FUNCTIONS
//////////////////////////////////

//Returns the capacity of String
int String::capacity() const { return STRING_SIZE; }

//Returns the number of characters in the string
int String::length() const
{
	int counter = 0;
	while (str[counter] != 0) counter++;
	return counter;
}