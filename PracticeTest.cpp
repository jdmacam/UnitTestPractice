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

TEST(PracticeTest, null_test)
{
    Practice obj;
    bool actual = obj.isPalindrome("a\0aa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, big_null_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a\0bcdefgh");
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
