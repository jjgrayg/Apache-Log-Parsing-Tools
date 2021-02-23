//  String class test program
//
//  Name:  XXX
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <limits>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right('X');

        // TEST
        std::cout << "Please type exactly the following on the next line: " << right << std::endl;
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "X");
        assert(right  == 'X');

        std::cin.ignore(result.capacity(), '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Waffles");

        // TEST
        std::cout << "Please type exactly the following on the next line: " << right << std::endl;
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "Waffles");
        assert(right  == "Waffles");

        std::cin.ignore(result.capacity(), '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Jarod Graygo");

        // TEST
        std::cout << "Please type exactly the following on the next line: " << right << std::endl;
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "Jarod");
        assert(right  == "Jarod Graygo");

        std::cin.ignore(result.capacity(), '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("This is a test for the input operator.");

        // TEST
        std::cout << "Please type exactly the following on the next line: " << right << std::endl;
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "This");
        assert(right  == "This is a test for the input operator.");

        std::cin.ignore(result.capacity(), '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Bacon and Eggs");

        // TEST
        std::cout << "Please type exactly the following on the next line: " << right << std::endl;
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "Bacon");
        assert(right  == "Bacon and Eggs");

        std::cin.ignore(result.capacity(), '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");

        // TEST
        std::cout << "Please copy this: " << right << std::endl << "On this line: ";
        std::cin >> result;
        std::cout << std::endl;

        // VERIFY
        assert(result == "Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");
        assert(right  == "Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");

        std::cin.ignore(result.capacity(), '\n');
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing input." << std::endl;
}
