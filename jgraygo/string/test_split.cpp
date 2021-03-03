//  String class test program
//
//  Tests: Split member function
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{

   {
    // SETUP FIXTURE
    String str("abc ef gh");

    // TESTS
    assert(str == "abc ef gh");
    assert(str.length() == 9);
    assert(str.capacity() == 9);

    std::vector<String> words = str.split(' ');
    String expected[] = {"abc","ef","gh"};

    assert(words.size() == 3);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

  {
    // SETUP FIXTURE
    String str("-a--b-");

    // TESTS
    assert(str == "-a--b-");
    assert(str.length() == 6);
    assert(str.capacity() == 6);

    std::vector<String> words = str.split('-');
    String expected[] = {"","a","","b",""};

    assert(words.size() == 5);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

  {
    // SETUP FIXTURE
    String str("Waffles are the bees knees");

    // TESTS
    assert(str == "Waffles are the bees knees");
    assert(str.length() == 26);
    assert(str.capacity() == 26);

    std::vector<String> words = str.split(' ');
    String expected[] = {"Waffles","are","the","bees","knees"};

    assert(words.size() == 5);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

  {
    // SETUP FIXTURE
    String str("ThisShouldNotBeDivided");

    // TESTS
    assert(str == "ThisShouldNotBeDivided");
    assert(str.length() == 22);
    assert(str.capacity() == 22);

    std::vector<String> words = str.split(' ');
    String expected[] = {"ThisShouldNotBeDivided"};

    assert(words.size() == 1);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

  {
    // SETUP FIXTURE
    String str("This sentence continues onto\nthis line");

    // TESTS
    assert(str == "This sentence continues onto\nthis line");
    assert(str.length() == 38);
    assert(str.capacity() == 38);

    std::vector<String> words = str.split('\n');
    String expected[] = {"This sentence continues onto","this line"};

    assert(words.size() == 2);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

  {
    // SETUP FIXTURE
    String str("The5detlim5is5the5number5five");

    // TESTS
    assert(str == "The5detlim5is5the5number5five");
    assert(str.length() == 29);
    assert(str.capacity() == 29);

    std::vector<String> words = str.split('5');
    String expected[] = {"The","detlim","is","the","number","five"};

    assert(words.size() == 6);

    for(size_t i = 0; i < words.size(); i++) {

      assert(words[i] == expected[i]);

    }
  }

    std::cout << "Done testing split" << std::endl;
}