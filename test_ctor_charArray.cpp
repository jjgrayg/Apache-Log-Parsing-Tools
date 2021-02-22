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
        String  str("0");

        // VERIFY
        assert(str == "0");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("X");

        // VERIFY
        assert(str == "X");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("Waffles");

        // VERIFY
        assert(str == "Waffles");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("YeetyEetyeEtyeeT");

        // VERIFY
        assert(str == "YeetyEetyeEtyeeT");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("nVY15dJrOWVJeDPcL60qe63pRXPLDEftRFFUp0wCC8KJKo7LDvvGhpyfZZcmS70acY2AI6IZGR8ugFztUiY16XRUlPrjfQA6cKu0sYxgQkyNzXxgWPxIzfN8ZjlazuV0dYRstq64hu4bD91axjb1crlliunACezw5YTr8W62fE6f818Hs2P0or6Yrgwg5lYzEHHjXuMEEygyEGz1KpedB9vldIhEfcGB8su0pT0ONJJVInHrnc40Ewc6XqE9UbY");

        // VERIFY
        assert(str == "nVY15dJrOWVJeDPcL60qe63pRXPLDEftRFFUp0wCC8KJKo7LDvvGhpyfZZcmS70acY2AI6IZGR8ugFztUiY16XRUlPrjfQA6cKu0sYxgQkyNzXxgWPxIzfN8ZjlazuV0dYRstq64hu4bD91axjb1crlliunACezw5YTr8W62fE6f818Hs2P0or6Yrgwg5lYzEHHjXuMEEygyEGz1KpedB9vldIhEfcGB8su0pT0ONJJVInHrnc40Ewc6XqE9UbY");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing char[] constructor." << std::endl;

}

