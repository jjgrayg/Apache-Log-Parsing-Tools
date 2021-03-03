//  String class test program
//
//  Tests: Constant time swap
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
        String  str1("X");
        String  str2;

        assert(str1     == "X");
        assert(str2     == "\0");

        // TEST
        str1.swap(str2);

        // VERIFY
        assert(str1     == '\0');
        assert(str2     == "X");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1("Charmin ultra strong");
        String  str2("Squeebles");
        
        assert(str1     == "Charmin ultra strong");
        assert(str2     == "Squeebles");

        // TEST
        str1.swap(str2);

        // VERIFY
        assert(str1     == "Squeebles");
        assert(str2     == "Charmin ultra strong");
    }

    std::cout << "Done testing swap" << std::endl;
}