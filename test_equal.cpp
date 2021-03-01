//  String class test program
//
//  Name:  String
//  Tests: Equals operator
//

#include "string.hpp"
#include <cassert>
#include <iostream> 

//===========================================================================
int main ()
{
    //Testing equals
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == '\0');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('X');
        String  right('X');

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == 'X');
        assert(right  == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Charmin");
        String  right("Charmin");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == "Charmin");
        assert(right  == "Charmin");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ryambvoP4WMT2LR4I44Uvx10Ecg8pD1YSzrbNZ1ImolDP0pIIv");
        String  right("ryambvoP4WMT2LR4I44Uvx10Ecg8pD1YSzrbNZ1ImolDP0pIIv");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == "ryambvoP4WMT2LR4I44Uvx10Ecg8pD1YSzrbNZ1ImolDP0pIIv");
        assert(right  == "ryambvoP4WMT2LR4I44Uvx10Ecg8pD1YSzrbNZ1ImolDP0pIIv");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("FTXIpV7Tsd4j2N8rgQIXqhpOs322xOss5ikY67OXS5siLzwDN1JpIudl1xLUkA3E99d57Y28PrSYyLFf2gOmbubBswTViGEjb8sdWtndUOfSdMbVrYw8j7HNoynnVqSAKSoUUvyGGZdYKap6RINiXH");
        String  right("FTXIpV7Tsd4j2N8rgQIXqhpOs322xOss5ikY67OXS5siLzwDN1JpIudl1xLUkA3E99d57Y28PrSYyLFf2gOmbubBswTViGEjb8sdWtndUOfSdMbVrYw8j7HNoynnVqSAKSoUUvyGGZdYKap6RINiXH");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == "FTXIpV7Tsd4j2N8rgQIXqhpOs322xOss5ikY67OXS5siLzwDN1JpIudl1xLUkA3E99d57Y28PrSYyLFf2gOmbubBswTViGEjb8sdWtndUOfSdMbVrYw8j7HNoynnVqSAKSoUUvyGGZdYKap6RINiXH");
        assert(right  == "FTXIpV7Tsd4j2N8rgQIXqhpOs322xOss5ikY67OXS5siLzwDN1JpIudl1xLUkA3E99d57Y28PrSYyLFf2gOmbubBswTViGEjb8sdWtndUOfSdMbVrYw8j7HNoynnVqSAKSoUUvyGGZdYKap6RINiXH");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("50owJtRyMcw6CJOKVX1FUOfuJynMUP3zFVUTeLkisQS5YbIh0TrG1Th5npURmnENmlJDbgPIvxk7XSYOCBj9wRBhJ99bg70VPMYdNRRQDTraemmunybHr8CGlQ0LsXBX81XRnpjSQMiL2SbcNzaNorUzZgHYiylb4qcmf5UYbBBtfNDyPQmk9yghPJm0cta5FLSnPzHMOCBYeg06rly2vxSiLKogF0Q4EtTb4DAuQEsw34moSPM8sLVbxDg2RHr");
        String  right("50owJtRyMcw6CJOKVX1FUOfuJynMUP3zFVUTeLkisQS5YbIh0TrG1Th5npURmnENmlJDbgPIvxk7XSYOCBj9wRBhJ99bg70VPMYdNRRQDTraemmunybHr8CGlQ0LsXBX81XRnpjSQMiL2SbcNzaNorUzZgHYiylb4qcmf5UYbBBtfNDyPQmk9yghPJm0cta5FLSnPzHMOCBYeg06rly2vxSiLKogF0Q4EtTb4DAuQEsw34moSPM8sLVbxDg2RHr");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result);
        assert(left   == "50owJtRyMcw6CJOKVX1FUOfuJynMUP3zFVUTeLkisQS5YbIh0TrG1Th5npURmnENmlJDbgPIvxk7XSYOCBj9wRBhJ99bg70VPMYdNRRQDTraemmunybHr8CGlQ0LsXBX81XRnpjSQMiL2SbcNzaNorUzZgHYiylb4qcmf5UYbBBtfNDyPQmk9yghPJm0cta5FLSnPzHMOCBYeg06rly2vxSiLKogF0Q4EtTb4DAuQEsw34moSPM8sLVbxDg2RHr");
        assert(right  == "50owJtRyMcw6CJOKVX1FUOfuJynMUP3zFVUTeLkisQS5YbIh0TrG1Th5npURmnENmlJDbgPIvxk7XSYOCBj9wRBhJ99bg70VPMYdNRRQDTraemmunybHr8CGlQ0LsXBX81XRnpjSQMiL2SbcNzaNorUzZgHYiylb4qcmf5UYbBBtfNDyPQmk9yghPJm0cta5FLSnPzHMOCBYeg06rly2vxSiLKogF0Q4EtTb4DAuQEsw34moSPM8sLVbxDg2RHr");
    }

    ////////////////////////////
    //Testing not-equals
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right('X');

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == '\0');
        assert(right  == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('X');
        String  right('x');

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == 'X');
        assert(right  == 'x');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Waffle");
        String  right("WafFle");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == "Waffle");
        assert(right  == "WafFle");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("3XmSf2bKZaTboYiK3Af73QnooPCYArOZHGqm66vO3Wvc2u753R");
        String  right("3XmSf2bKZaTboYiK3Af73QnooPCYArOZHGqm66vO3Wvc2u753r");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == "3XmSf2bKZaTboYiK3Af73QnooPCYArOZHGqm66vO3Wvc2u753R");
        assert(right  == "3XmSf2bKZaTboYiK3Af73QnooPCYArOZHGqm66vO3Wvc2u753r");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("QrkiGUD2FrghqSpylfHFgjWb95nJFRqqzIHmRU96bo6yR181prsC2I6pt57edYLhg2Z01Mnxb2R1MBwz588QqrHUuagrMWxQ4kuXTTsmTdzhQa2GvLO4RjJz3vRW6BIQpRvdDuvr43acuf0N0Ctzi3");
        String  right("QrkiGUD2FrghqSpylfHFgjWb95nJFRqqzIHmRU96bo6yR181prsC2I6pt57edYL");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == "QrkiGUD2FrghqSpylfHFgjWb95nJFRqqzIHmRU96bo6yR181prsC2I6pt57edYLhg2Z01Mnxb2R1MBwz588QqrHUuagrMWxQ4kuXTTsmTdzhQa2GvLO4RjJz3vRW6BIQpRvdDuvr43acuf0N0Ctzi3");
        assert(right  == "QrkiGUD2FrghqSpylfHFgjWb95nJFRqqzIHmRU96bo6yR181prsC2I6pt57edYL");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("VnKjMzaWVLxX69TBm4jIU86KfNyGLL4imn2BnemSWZ6bk07KOEShktDR5F2XQo3vaXYuKAk5iyPrGYst57QbHsVOifCpgMfO7M6CYycKzYJwTwBvuUIUeykA4eC7scyv0VBKxx8V3y10cofecCPPn0XMHTlSLRkgqpXgIdngvfvmnpppIcCu20w0dNOJCyOp4tdn3rT0Y83hvyvB8ZXmKgXY2KAb0xDRpKOhMFdmz3fozkoYNyQ1A5i8XIwTKay");
        String  right("VnKjMzaWVLxX69TBm4jIU86KfNyGLL4imn2BnemSWZ6bk07KOEShktDR5F2XQo3vaXYuKAk5iyPrGYst57QbHsVOifCpgMfO7M6CYycKzYJwTwBvuUIUeykA4eC7scyv0VBKxx8V3y10cofecCPPn0XMHTlSLRkgqpXgIdngvfvmnpppIcCu20w0dNOJCyOp4tdn3rT0Y83HvyvB8ZXmKgXY2KAb0xDRpKOhMFdmz3fozkoYNyQ1A5i8XIwTKay");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result);
        assert(left   == "VnKjMzaWVLxX69TBm4jIU86KfNyGLL4imn2BnemSWZ6bk07KOEShktDR5F2XQo3vaXYuKAk5iyPrGYst57QbHsVOifCpgMfO7M6CYycKzYJwTwBvuUIUeykA4eC7scyv0VBKxx8V3y10cofecCPPn0XMHTlSLRkgqpXgIdngvfvmnpppIcCu20w0dNOJCyOp4tdn3rT0Y83hvyvB8ZXmKgXY2KAb0xDRpKOhMFdmz3fozkoYNyQ1A5i8XIwTKay");
        assert(right  == "VnKjMzaWVLxX69TBm4jIU86KfNyGLL4imn2BnemSWZ6bk07KOEShktDR5F2XQo3vaXYuKAk5iyPrGYst57QbHsVOifCpgMfO7M6CYycKzYJwTwBvuUIUeykA4eC7scyv0VBKxx8V3y10cofecCPPn0XMHTlSLRkgqpXgIdngvfvmnpppIcCu20w0dNOJCyOp4tdn3rT0Y83HvyvB8ZXmKgXY2KAb0xDRpKOhMFdmz3fozkoYNyQ1A5i8XIwTKay");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing equality operators." << std::endl;
}

