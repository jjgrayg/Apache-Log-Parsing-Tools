//  String class test program
//
//  Tests: Int capacity and char array constructor
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
        String  str(0, "\0");
        
        // VERIFY
        assert(str     == '\0');
        assert(str.length() == 0);
        assert(str.capacity() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(10, "abc");
        
        // VERIFY
        assert(str     == "abc");
        assert(str.length() == 3);
        assert(str.capacity() == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(100, "Charmin ultra string");
        
        // VERIFY
        assert(str     == "Charmin ultra string");
        assert(str.length() == 20);
        assert(str.capacity() == 100);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(999, "Wow, that be a large capacity");
        
        // VERIFY
        assert(str     == "Wow, that be a large capacity");
        assert(str.length() == 29);
        assert(str.capacity() == 999);
    }

    std::cout << "Done testing ctor int char array" << std::endl;
}