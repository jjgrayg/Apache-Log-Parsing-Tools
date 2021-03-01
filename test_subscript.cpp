//  String class test program
//
//  Tests: Subscript operator
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
        String  str("Waffle");

        // TEST
        char result = str[0];

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 'W');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffle");

        // TEST
        char result = str[5];

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 'e');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffle");

        // TEST
        char result = str[2];

        // VERIFY
        assert(str    == "Waffle");
        assert(result == 'f');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str('X');

        // TEST
        char result = str[0];

        // VERIFY
        assert(str    == 'X');
        assert(result == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("ig9n5yTwFftEHZKi2e7OLvCH92BEqBmk7PfKHmbbESi50DJVc0A3KKW644eKKqZZp2MbozruTpCdvB66axwJeQurwAVIbCHWrErQkfL3MilUJajkd3gPQyQWmCuuWMAsHKvVXTK0nEnnvtBJiALTDP");

        // TEST
        char result = str[55];

        // VERIFY
        assert(str    == "ig9n5yTwFftEHZKi2e7OLvCH92BEqBmk7PfKHmbbESi50DJVc0A3KKW644eKKqZZp2MbozruTpCdvB66axwJeQurwAVIbCHWrErQkfL3MilUJajkd3gPQyQWmCuuWMAsHKvVXTK0nEnnvtBJiALTDP");
        assert(result == '6');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("CpJSCpkC3jZqW02SM8GQje8NmSCTwwwKS48cgzPBMEfSxew7qZw0MizDfiACSG02l06nIQ0ghhAof5QrUG1OgNDbxl7jxs06pC2m4z6YMBAOqhd2Knxg8ZdoGPmwYNLc2zrDFH18B0wZYpZmnDgCxZK5pBvejZ9wJtaSwwGRkNciugb5hMzvonezP8A325OQeHvM87L3Rd9vIbPFKvU1V8s0pxTk5lvYCavc8dibXNYsQlhcXH1l0vnSQlSaUa5");

        // TEST
        char result = str[254];

        // VERIFY
        assert(str    == "CpJSCpkC3jZqW02SM8GQje8NmSCTwwwKS48cgzPBMEfSxew7qZw0MizDfiACSG02l06nIQ0ghhAof5QrUG1OgNDbxl7jxs06pC2m4z6YMBAOqhd2Knxg8ZdoGPmwYNLc2zrDFH18B0wZYpZmnDgCxZK5pBvejZ9wJtaSwwGRkNciugb5hMzvonezP8A325OQeHvM87L3Rd9vIbPFKvU1V8s0pxTk5lvYCavc8dibXNYsQlhcXH1l0vnSQlSaUa5");
        assert(result == '5');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing subscript." << std::endl;
}

