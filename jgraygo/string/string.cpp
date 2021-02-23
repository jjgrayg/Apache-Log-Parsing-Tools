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

//Input operator overload
std::istream& operator>>(std::istream& in, String& rhs)
{
	in >> rhs.str;
	return in;
}
//Output operator overload
std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	for (int i = 0; i < STRING_SIZE; i++)
	{
		if (rhs.str[i] == 0) break;
		out << rhs.str[i];
	}

	return out;
}

//Accessor and Modifier for String
char& String::operator[](int index) { return str[index]; }

//Simple Accessor for String
char String::operator[](int index) const { return str[index]; }

//Concatenation operator overloads
String String::operator+(const String& rhs) const
{
	int index = 0;
	String temp;
	for (int i = 0; i < STRING_SIZE; i++) temp[i] = this->str[i];
	while (rhs[index] != 0)
	{
		temp[(length() + index)] = rhs[index];
		index++;
	}

	return temp;
}

String operator+(const char lhs[], const String& rhs) 
{
	String lhsString = String(lhs);
	return lhsString + rhs; 
}

String operator+(char lhs, const String& rhs) 
{
	String lhsString = String(lhs);
	return lhsString + rhs; 
}

//Concatenation and assignment operator
String& String::operator+=(const String& rhs)
{
	*this = *this + rhs;
	return *this;
}

//Equals operator overloads
bool String::operator==(const String& rhs) const
{
	bool equal;
	int index = 0;

	do {
		if (rhs[index] == str[index])
		{
			equal = true;
		}
		else if (rhs[index] != str[index])
		{
			equal = false;
		}
		index++;
	} while (equal && index < STRING_SIZE);
	return equal;
}

bool operator==(const char lhs[], const String& rhs) { return rhs == lhs; }
bool operator==(char lhs, const String& rhs) { return rhs == lhs; }

//Less than operator overloads
bool String::operator<(const String& rhs) const
{
	int index = 0;

	do {
		if (str[index] < rhs[index])
		{
			return true;
		}
		else if (str[index] == rhs[index])
		{
			index++;
		}
	} while (index < STRING_SIZE);

	return false;
}

bool operator<(const char lhs[], const String& rhs) { return rhs > lhs; }
bool operator<(char lhs, const String& rhs) { return rhs > lhs; }

//Greater than operator overload
bool operator>(const String& lhs, const String& rhs) { return rhs < lhs; }

//Less than or equal to operator overload
bool operator<=(const String& lhs, const String& rhs)
{
	if (lhs == rhs) return true;
	else if (lhs < rhs) return true;
	else return false;
}

//Greater than or equal to operator overload
bool operator>=(const String& lhs, const String& rhs)
{
	if (lhs == rhs) return true;
	else if (lhs > rhs) return true;
	else return false;
}

//Not equal operator overload
bool operator!=(const String& lhs, const String& rhs) { return !(lhs == rhs); }

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

//Returns the substring from the first arg to the second arg inclusive
String String::substr(int start, int end)
{
	String result;
	for (int i = start; i <= end; i++) result += str[i];
	return result;
}

//Finds the position of a char at or after the position in the argument. Returns -1 if the char is not present in the string
int String::findch(int pos, char ch)
{
	for (int i = pos; i < STRING_SIZE; i++)
	{
		if (str[i] == ch) return i;
	}

	return -1;

}

//Finds the position of a string at or after the position in the argument and returns the position where it starts
//Returns -1 if the string is not present
int String::findstr(int pos, const String& string)
{

	bool isPresent = false;

	for (int i = pos; i < STRING_SIZE; i++)
	{
		if (str[i] == string[0])
		{
			for (int j = 0; j < string.length(); j++)
			{
				if (str[i + j] != string[j]) isPresent = false;
				else isPresent = true;
				if (isPresent && j == (string.length() - 1)) return i;
			}
		}
	}

	return -1;

}