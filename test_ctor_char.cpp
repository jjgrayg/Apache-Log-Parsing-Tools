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
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('0');

        // VERIFY
        assert(str == '0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');

        // VERIFY
        assert(str == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('^');

        // VERIFY
        assert(str == '^');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(' ');

        // VERIFY
        assert(str == ' ');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\n');

        // VERIFY
        assert(str == '\n');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing char constructor." << std::endl;

}

