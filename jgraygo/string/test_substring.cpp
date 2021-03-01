//  String class test program
//
//  Tests: Substr member function
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
        String  str("X");

        // TEST
        String result = str.substr(0, 0);

        // VERIFY
        assert(str    == "X");
        assert(result == "X");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffles");

        // TEST
        String result = str.substr(0, 2);

        // VERIFY
        assert(str    == "Waffles");
        assert(result == "Waf");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Jarod Graygo");

        // TEST
        String result = str.substr(2, 8);

        // VERIFY
        assert(str    == "Jarod Graygo");
        assert(result == "rod Gra");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for substr");

        // TEST
        String result = str.substr(5,6);

        // VERIFY
        assert(str    == "This is a test for substr");
        assert(result == "is");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Include this whole string");

        // TEST
        String result = str.substr(0, 24);

        // VERIFY
        assert(str    == "Include this whole string");
        assert(result == "Include this whole string");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(1, 8);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == "12345678");
    }

    //Out-of-bounds tests
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(1, 10);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(8, 1);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(10, 12);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '\0');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing substr." << std::endl;
}

