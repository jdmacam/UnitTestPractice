/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

//isPalindrome tests
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("bab");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("baab");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, def_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("12345");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, even_num_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("212");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, odd_num_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("2112");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, spaces_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("2 2");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, special_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("{[]}");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, special_char_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("{[}");
    ASSERT_FALSE(actual);
}

//sortDescending Tests
TEST(PracticeTest, three_unique)
{
    Practice obj;
		int a = 1;
		int b = 2;
		int c = 3;
    obj.sortDescending(&a, &b, &c);
    ASSERT_TRUE(a > b && a > c);
		ASSERT_TRUE(b < a && b > c);
		ASSERT_TRUE(c < a && c < b);
}
