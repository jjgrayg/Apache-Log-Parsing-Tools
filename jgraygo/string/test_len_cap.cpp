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

    //Capacity test
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str;

        // TEST
        int result = str.capacity();

        // VERIFY
        assert(str    == '\0');
        assert(result == 256);
    }


    //Length tests
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str;

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == '\0');
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str('X');

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == 'X');
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffle");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 6);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Jarod Graygo");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "Jarod Graygo");
        assert(result == 12);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("9K2Czzyz3TJh0BTZlx1F5syUrYb5VSDUIT5HRqp53vCyESgln43OageRWOXQfA6lEBOlY2AY6hRMInSxFyyZSDcAouTZIE8J5dJA");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "9K2Czzyz3TJh0BTZlx1F5syUrYb5VSDUIT5HRqp53vCyESgln43OageRWOXQfA6lEBOlY2AY6hRMInSxFyyZSDcAouTZIE8J5dJA");
        assert(result == 100);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("RewXSQenAN1kxK1agCDSRUO2SIUujwQpwZZ2LgIHspwL1wkYuP6mK1fMBDkaRjIEb9YVxBkdTTkprqWZo3cHp83SCbPb1XR91AaSbsoIPp0cml1TRydTSeKUzgSdztlOXhW1O2v3c0lcMExeg61m5EWCBwaXttjLSPIVp5XbxxsjRgUmKfdVXbleh8nuLEzoRoxniq8UCu8lTUECrkK1J1qm3KMyeVyXPRLykAIYMtVs3iHgXoMYGlxpsYunLPX");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "RewXSQenAN1kxK1agCDSRUO2SIUujwQpwZZ2LgIHspwL1wkYuP6mK1fMBDkaRjIEb9YVxBkdTTkprqWZo3cHp83SCbPb1XR91AaSbsoIPp0cml1TRydTSeKUzgSdztlOXhW1O2v3c0lcMExeg61m5EWCBwaXttjLSPIVp5XbxxsjRgUmKfdVXbleh8nuLEzoRoxniq8UCu8lTUECrkK1J1qm3KMyeVyXPRLykAIYMtVs3iHgXoMYGlxpsYunLPX");
        assert(result == 255);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing length and capacity." << std::endl;
}

