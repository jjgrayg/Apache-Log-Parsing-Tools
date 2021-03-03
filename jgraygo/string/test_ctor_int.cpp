//  String class test program
//
//  Tests: Int capacity constructor
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
        String  str(0);
        
        // VERIFY
        assert(str     == '\0');
        assert(str.length() == 0);
        assert(str.capacity() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(10);
        
        // VERIFY
        assert(str     == '\0');
        assert(str.length() == 0);
        assert(str.capacity() == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(100);
        
        // VERIFY
        assert(str     == '\0');
        assert(str.length() == 0);
        assert(str.capacity() == 100);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(999);
        
        // VERIFY
        assert(str     == '\0');
        assert(str.length() == 0);
        assert(str.capacity() == 999);
    }

    std::cout << "Done testing ctor int" << std::endl;
}