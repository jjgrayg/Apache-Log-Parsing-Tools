//  String class test program
//
//  Name:  String
//  Tests: Input operator
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <limits>
#include <fstream>

//===========================================================================
int main()
{

    std::ifstream in("log_1_tiny.txt");
    if (!in) {
        std::cerr << "Could not open log_1_tiny.txt, exiting" << std::endl;
        exit(1);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("131.123.47.176");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("-");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("-");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("[18/Sep/2002:12:05:25");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("-0400]");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("\"GET");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("/~darci/");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("HTTP/1.0\"");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("200");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    if (!in.eof())
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("5625");

        // TEST
        in >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

    std::cout << "Done testing input." << std::endl;
}
