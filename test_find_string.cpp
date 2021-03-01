//  String class test program
//
//  Tests: Findstr member function
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    //Tests where the string is present
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffle");

        // TEST
        int result = str.findstr(0, "ffle");

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("X");

        // TEST
        int result = str.findstr(0, "X");

        // VERIFY
        assert(str    == "X");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Jarod Graygo");

        // TEST
        int result = str.findstr(3, "ray");

        // VERIFY
        assert(str    == "Jarod Graygo");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for findstr");

        // TEST
        int result = str.findstr(0, "test");

        // VERIFY
        assert(str    == "This is a test for findstr");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Thisisanothertestforfindstr");

        // TEST
        int result = str.findstr(0, "another");

        // VERIFY
        assert(str    == "Thisisanothertestforfindstr");
        assert(result == 6);
    }

    //Tests where the string is not present or the function is checking past where it appears
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for findstr");

        // TEST
        int result = str.findstr(0, "Is");

        // VERIFY
        assert(str    == "This is a test for findstr");
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for findstr");

        // TEST
        int result = str.findstr(6, "This");

        // VERIFY
        assert(str    == "This is a test for findstr");
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for findstr");

        // TEST
        int result = str.findstr(0, "Waffle");

        // VERIFY
        assert(str    == "This is a test for findstr");
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for findstr");

        // TEST
        int result = str.findstr(0, "tests");

        // VERIFY
        assert(str    == "This is a test for findstr");
        assert(result == -1);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing findstr." << std::endl;
}

