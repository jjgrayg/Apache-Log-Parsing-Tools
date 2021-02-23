//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{

    //Tests with searched for char is present in string
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("X");

        // TEST
        int result = str.findch(0,'X');

        // VERIFY
        assert(str    == "X");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffle");

        // TEST
        int result = str.findch(0, 'e');

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Bacon and Eggs");

        // TEST
        int result = str.findch(5, 'n');

        // VERIFY
        assert(str    == "Bacon and Eggs");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Jarod Graygo");

        // TEST
        int result = str.findch(0, 'd');

        // VERIFY
        assert(str    == "Jarod Graygo");
        assert(result == 4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Test for findch");

        // TEST
        int result = str.findch(0, ' ');

        // VERIFY
        assert(str    == "Test for findch");
        assert(result == 4);
    }

    //Tests where the searched for char is not present in string
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffles");

        // TEST
        int result = str.findch(0, 'F');

        // VERIFY
        assert(str    == "Waffles");
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffles");

        // TEST
        int result = str.findch(0, 'z');

        // VERIFY
        assert(str    == "Waffles");
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffles");

        // TEST
        int result = str.findch(3, 'W');

        // VERIFY
        assert(str    == "Waffles");
        assert(result == -1);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing finch." << std::endl;
}

