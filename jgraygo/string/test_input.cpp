//  String class test program
//
//  Name:  XXX
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream> 

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right('X');

        // TEST
        result >> right;

        // VERIFY
        assert(result == 'X');
        assert(right  == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Waffles");

        // TEST
        result >> right;

        // VERIFY
        assert(result == "Waffles");
        assert(right  == "Waffles");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Jarod Graygo");

        // TEST
        result >> right;

        // VERIFY
        assert(result == "Jarod");
        assert(right  == "Jarod Graygo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("This is a test for the input operator.");

        // TEST
        result >> right;

        // VERIFY
        assert(result == "This");
        assert(right  == "This is a test for the input operator.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("jb5xIxfFRjFyWpPLWlRO2d6OP4JVudd50EubHmlgpSWB0redD3");

        // TEST
        result >> right;

        // VERIFY
        assert(result == "jb5xIxfFRjFyWpPLWlRO2d6OP4JVudd50EubHmlgpSWB0redD3");
        assert(right  == "jb5xIxfFRjFyWpPLWlRO2d6OP4JVudd50EubHmlgpSWB0redD3");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");

        // TEST
        result >> right;

        // VERIFY
        assert(result == "Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");
        assert(right  == "Pfr2A6NEVCjzZ0uJsAmPDBLJoqyZ8wTWiNuHs0cGtSeQUlNz0i2SzZqsoWepmfdLPofoShgYLYYTGaz2xNAdc9RUQAVjtkDdTb6dwghPzjuKt8IDXW9dhXdwiFX3QCWD23co2KOjwE2pm9iTFnqoUtKbvnY0keqL8uZvA4stx1EI0fYHQo9tqpM3NX2kmxBqDhlz02RrHrRDeFyDSHpwIZ0mFJ4mwSY1CDDuFamxUmgaFVJrSjjg2bsYqGVws7R");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing input." << std::endl;
}
