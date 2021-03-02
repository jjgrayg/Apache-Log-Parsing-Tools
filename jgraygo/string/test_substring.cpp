//  String class test program
//
//  Tests: Substr member function
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
        String  str;

        // TEST
        String result = str.substr(0, 0);

        // VERIFY
        assert(str    == "\0");
        assert(result == "\0");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("X");

        // TEST
        String result = str.substr(0, 0);

        // VERIFY
        assert(str    == "X");
        assert(result == "X");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Waffles");

        // TEST
        String result = str.substr(0, 2);

        // VERIFY
        assert(str    == "Waffles");
        assert(result == "Waf");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Jarod Graygo");

        // TEST
        String result = str.substr(2, 8);

        // VERIFY
        assert(str    == "Jarod Graygo");
        assert(result == "rod Gra");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for substr");

        // TEST
        String result = str.substr(5,6);

        // VERIFY
        assert(str    == "This is a test for substr");
        assert(result == "is");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("This is a test for substr");

        // TEST
        String result = str.substr(5,7);

        // VERIFY
        assert(str    == "This is a test for substr");
        assert(result == "is ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Include this whole string");

        // TEST
        String result = str.substr(0, 24);

        // VERIFY
        assert(str    == "Include this whole string");
        assert(result == "Include this whole string");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(1, 8);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == "12345678");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(0, 0);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == "0");
    }

    //Out-of-bounds tests
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(1, 10);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == "123456789");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(8, 1);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(10, 12);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("0123456789");

        // TEST
        String result = str.substr(9, 12);

        // VERIFY
        assert(str    == "0123456789");
        assert(result == '9');
    }

    //Super long
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("7QcVOKkr4MQW3mxX69tuiuLZv1wibPjlOGeNsNcUA1wZLEzfyvB2oJFUDaKfuLxZ39Q986yZWT5FOH1dOeH1j3g6rhmUlQXzt5aaJROtwFDhB4zM6JTd8GW7x8lX5ErKDayzl0J06Qqk7iiZR6pXFQZzBh5N3uye7DgYwkCzwUHhNpDb6Kwp32hMP2rVkARCO9Dx1KgPzE1xQ90IKu0rAJD5INm81Vy0AbCM4QaqSnx958tmXRFP7Qb34JsZbRe");

        // TEST
        String result = str.substr(0, 254);

        // VERIFY
        assert(str    == "7QcVOKkr4MQW3mxX69tuiuLZv1wibPjlOGeNsNcUA1wZLEzfyvB2oJFUDaKfuLxZ39Q986yZWT5FOH1dOeH1j3g6rhmUlQXzt5aaJROtwFDhB4zM6JTd8GW7x8lX5ErKDayzl0J06Qqk7iiZR6pXFQZzBh5N3uye7DgYwkCzwUHhNpDb6Kwp32hMP2rVkARCO9Dx1KgPzE1xQ90IKu0rAJD5INm81Vy0AbCM4QaqSnx958tmXRFP7Qb34JsZbRe");
        assert(result == "7QcVOKkr4MQW3mxX69tuiuLZv1wibPjlOGeNsNcUA1wZLEzfyvB2oJFUDaKfuLxZ39Q986yZWT5FOH1dOeH1j3g6rhmUlQXzt5aaJROtwFDhB4zM6JTd8GW7x8lX5ErKDayzl0J06Qqk7iiZR6pXFQZzBh5N3uye7DgYwkCzwUHhNpDb6Kwp32hMP2rVkARCO9Dx1KgPzE1xQ90IKu0rAJD5INm81Vy0AbCM4QaqSnx958tmXRFP7Qb34JsZbRe");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("7QcVOKkr4MQW3mxX69tuiuLZv1wibPjlOGeNsNcUA1wZLEzfyvB2oJFUDaKfuLxZ39Q986yZWT5FOH1dOeH1j3g6rhmUlQXzt5aaJROtwFDhB4zM6JTd8GW7x8lX5ErKDayzl0J06Qqk7iiZR6pXFQZzBh5N3uye7DgYwkCzwUHhNpDb6Kwp32hMP2rVkARCO9Dx1KgPzE1xQ90IKu0rAJD5INm81Vy0AbCM4QaqSnx958tmXRFP7Qb34JsZbRe");

        // TEST
        String result = str.substr(254, 254);

        // VERIFY
        assert(str    == "7QcVOKkr4MQW3mxX69tuiuLZv1wibPjlOGeNsNcUA1wZLEzfyvB2oJFUDaKfuLxZ39Q986yZWT5FOH1dOeH1j3g6rhmUlQXzt5aaJROtwFDhB4zM6JTd8GW7x8lX5ErKDayzl0J06Qqk7iiZR6pXFQZzBh5N3uye7DgYwkCzwUHhNpDb6Kwp32hMP2rVkARCO9Dx1KgPzE1xQ90IKu0rAJD5INm81Vy0AbCM4QaqSnx958tmXRFP7Qb34JsZbRe");
        assert(result == "e");
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing substr." << std::endl;
}

