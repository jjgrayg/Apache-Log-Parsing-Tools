//  String class test program
//
//  Name:  XXX
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
        String  left;
        String  right;

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == '\0');
        assert(left   == '\0');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('A');
        String  right('\0');

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == 'A');
        assert(left   == 'A');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('A');
        String  right('A');

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "AA");
        assert(left   == 'A');
        assert(right  == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Waffle");
        String  right("-Iron");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "Waffle-Iron");
        assert(left   == "Waffle");
        assert(right  == "-Iron");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Jarod");
        String  right(" Graygo");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "Jarod Graygo");
        assert(left   == "Jarod");
        assert(right  == " Graygo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("T2O0mRRXuZumw5fIrO9pZyKi9krICaSCdYvZddHCvdsBjO1iz6ymXiU32RaAHdbUo8k0A6tr8PgOd7wuUsJ8US5Hi8wrTGn7AK8S");
        String  right("9KDT76dkckARJSztt752ylC5ZgGtprwMUFopD652iaplYJDCkVMWibretxJeUC0hwbI7IvpyADMyWV76XmHpCNRGiVpRVisp3kmG");

        // TEST
        std::cout << left << std::endl;
        String result = (left + right);

        // VERIFY
        std::cout << left << std::endl;
        assert(result == "T2O0mRRXuZumw5fIrO9pZyKi9krICaSCdYvZddHCvdsBjO1iz6ymXiU32RaAHdbUo8k0A6tr8PgOd7wuUsJ8US5Hi8wrTGn7AK8S9KDT76dkckARJSztt752ylC5ZgGtprwMUFopD652iaplYJDCkVMWibretxJeUC0hwbI7IvpyADMyWV76XmHpCNRGiVpRVisp3kmG");
        assert(left   == "T2O0mRRXuZumw5fIrO9pZyKi9krICaSCdYvZddHCvdsBjO1iz6ymXiU32RaAHdbUo8k0A6tr8PgOd7wuUsJ8US5Hi8wrTGn7AK8S");
        assert(right  == "9KDT76dkckARJSztt752ylC5ZgGtprwMUFopD652iaplYJDCkVMWibretxJeUC0hwbI7IvpyADMyWV76XmHpCNRGiVpRVisp3kmG");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing concatenation." << std::endl;
}

