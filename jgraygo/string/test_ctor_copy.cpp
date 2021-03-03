//  String class test program
//
//  Tests: Copy constructor
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
        String  str1;

        // TEST
        String  str2(str1);
        
        // VERIFY
        assert(str1     == '\0');
        assert(str2     == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1("Charmin ultra strong");

        // TEST
        String  str2(str1);
        
        // VERIFY
        assert(str1     == "Charmin ultra strong");
        assert(str2     == "Charmin ultra strong");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1('X');

        // TEST
        String  str2(str1);
        
        // VERIFY
        assert(str1     == 'X');
        assert(str2     == 'X');
    }

    std::cout << "Done testing copy ctor" << std::endl;
}