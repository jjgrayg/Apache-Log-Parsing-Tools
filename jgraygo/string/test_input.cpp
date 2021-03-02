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

    std::ifstream in("log_3_medium.txt");
    if (!in) {
        std::cerr << "Could not open log_3_medium.txt, exiting" << std::endl;
        exit(1);
    }

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
    
    in.close();

    // ADD ADDITIONAL TESTS AS NECESSARY
    // FitnessGram Test

    std::ifstream in2("string.txt");
    if (!in) {
        std::cerr << "Could not open string.txt, exiting" << std::endl;
        exit(1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("The");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("FitnessGram");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Pacer");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("Test");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("is");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("a");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("multistage");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("aerobic");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("capacity");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("test");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("that");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;
        String  right("progressively");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == right);
    }

    //Multiple assignment test
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "gets");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "more");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "difficult");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "as");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "it");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "continues.");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "The");

        // TEST
        in2 >> result;

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "20");
    }


    std::cout << "Done testing input." << std::endl;
}
