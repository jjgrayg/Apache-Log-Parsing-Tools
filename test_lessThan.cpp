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
        String  right('X');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == '\0');
        assert(right  == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('A');
        String  right('B');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == 'A');
        assert(right  == 'B');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('0');
        String  right('A');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == '0');
        assert(right  == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("czefUgPay16tH8lz7IRgwTekTkaKvxTeuUS5PvXwC52M0ynfmF");
        String  right("dzefUgPay16tH8lz7IRgwTekTkaKvxTeuUS5PvXwC52M0ynfmF");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == "czefUgPay16tH8lz7IRgwTekTkaKvxTeuUS5PvXwC52M0ynfmF");
        assert(right  == "dzefUgPay16tH8lz7IRgwTekTkaKvxTeuUS5PvXwC52M0ynfmF");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("nbl2Bbbd18bhWLGUKtNbsFjUQEoctA5Rgp6Dq5H85bltgT62CIdaBQ0tpziYk1sfuugGIs2u3IGiSYhLA6GckW0Zh9ABqcxu6iZYgUjicW1r1WxmRrGQmYjcXFtoc6A8tY7b0qzUqY24GUrfCC0ArZ");
        String  right("nbl2Bbbd18bhWLGUKtNbsFjUQEoctA5Rgp6Dq5H85bltgT62CIdaBQ0tpziYk1sfuugGIs2u3IGiSYhLA6GckW0Zh9ABqcxu6iZYgUjicW1r1WxmRrGQmYjcXFtoc6A8uY7b0qzUqY24GUrfCC0ArZ");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == "nbl2Bbbd18bhWLGUKtNbsFjUQEoctA5Rgp6Dq5H85bltgT62CIdaBQ0tpziYk1sfuugGIs2u3IGiSYhLA6GckW0Zh9ABqcxu6iZYgUjicW1r1WxmRrGQmYjcXFtoc6A8tY7b0qzUqY24GUrfCC0ArZ");
        assert(right  == "nbl2Bbbd18bhWLGUKtNbsFjUQEoctA5Rgp6Dq5H85bltgT62CIdaBQ0tpziYk1sfuugGIs2u3IGiSYhLA6GckW0Zh9ABqcxu6iZYgUjicW1r1WxmRrGQmYjcXFtoc6A8uY7b0qzUqY24GUrfCC0ArZ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("2mo6jV6Osd0C4lOwwdHhTJ8YZdK6Ct5qBET3xFGj6x5R0ANOOgVHxjrS7qDYZzwr5hJloVsYUorOolMHKfuaIpzEMK0v4F5DRBlU6AZR5jOvBqwUilNAhceuSnTmaJQdPfLChHTXqTUmSmEyQ7S0VjS8BmbiJG5AnmT4JJ1kFIMTqWMqtH8q5EiZSks5gAicl2r8leQCYcYZf33xI1MX09QLZNbxlucn5HZXe2flm8CVUjDxU0RC4Xkm5Y2a7ia");
        String  right("2mo6jV6Osd0C4lOwwdHhTJ8YZdK6Ct5qBET3xFGj6x5R0ANOOgVHxjrS7qDYZzwr5hJloVsYUorOolMHKfuaIpzEMK0v4F5DRBlU6AZR5jOvBqwUilNAhceuSnTmaJQdPfLChHTXqTUmSmEyQ7S0VjS8BmbiJG5AnmT4JJ1kFIMTqWMqtH8q5EiZSks5gAicl2r8leQCYcYZf33xI1MX09QLZNbxlucn5HZXe2flm8CVUjDxU0RC4Xkm5Y2a7ib");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result);
        assert(left   == "2mo6jV6Osd0C4lOwwdHhTJ8YZdK6Ct5qBET3xFGj6x5R0ANOOgVHxjrS7qDYZzwr5hJloVsYUorOolMHKfuaIpzEMK0v4F5DRBlU6AZR5jOvBqwUilNAhceuSnTmaJQdPfLChHTXqTUmSmEyQ7S0VjS8BmbiJG5AnmT4JJ1kFIMTqWMqtH8q5EiZSks5gAicl2r8leQCYcYZf33xI1MX09QLZNbxlucn5HZXe2flm8CVUjDxU0RC4Xkm5Y2a7ia");
        assert(right  == "2mo6jV6Osd0C4lOwwdHhTJ8YZdK6Ct5qBET3xFGj6x5R0ANOOgVHxjrS7qDYZzwr5hJloVsYUorOolMHKfuaIpzEMK0v4F5DRBlU6AZR5jOvBqwUilNAhceuSnTmaJQdPfLChHTXqTUmSmEyQ7S0VjS8BmbiJG5AnmT4JJ1kFIMTqWMqtH8q5EiZSks5gAicl2r8leQCYcYZf33xI1MX09QLZNbxlucn5HZXe2flm8CVUjDxU0RC4Xkm5Y2a7ib");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing less than." << std::endl;
}

