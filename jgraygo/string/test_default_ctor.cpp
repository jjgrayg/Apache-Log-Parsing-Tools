//  String class test program
//
//  Tests: default constructor
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
        String  str;

        // VERIFY
        assert(str == '\0');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default ctor." << std::endl;

}

