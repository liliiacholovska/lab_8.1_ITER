#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1(1)/lab8.1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(FindThirdDotIndexTest)
        {
            char str1[] = "++-+!!!!!!,,...";
            char str2[] = "...";
            char str3[] = "abc";

            Assert::AreEqual(14, FindThirdDotIndex(str1)); 
            Assert::AreEqual(2, FindThirdDotIndex(str2));  
            Assert::AreEqual(-1, FindThirdDotIndex(str3)); 
        }

        TEST_METHOD(ReplaceEveryFourthCharWithDotTest)
        {
            char str1[] = "abcdefghijklmnopqrstuvwxyz";
            char str2[] = "abc";

            char* result1 = ReplaceEveryFourthCharWithDot(str1);
            char* result2 = ReplaceEveryFourthCharWithDot(str2);

            Assert::AreEqual(-1, strcmp("abc.def.ghi.jkl.mno.pqr.stu.vwx.yz", result1)); 
            Assert::AreEqual(0, strcmp("abc", result2));

            delete[] result1; 
            delete[] result2;
        }
	};
}