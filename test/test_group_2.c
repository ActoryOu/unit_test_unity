#include "test_group_2.h"
#include "utils.h"

int a;
int b;

TEST_SETUP( TestGroup2 )
{
    a = 10;
    b = 2;
}

TEST_TEAR_DOWN( TestGroup2 )
{
    
}

TEST( TestGroup2, TestGroup2_TestCase1 )
{
    a = my_add( a, b );
    TEST_ASSERT_EQUAL_INT32( a, 12 );
}

TEST( TestGroup2, TestGroup2_TestCase2 )
{
    a = my_minus( a, b );
    TEST_ASSERT_EQUAL_INT32( a, 10 );
}

TEST_GROUP_RUNNER( TestGroup2 )
{
    RUN_TEST_CASE( TestGroup2, TestGroup2_TestCase1 );
    RUN_TEST_CASE( TestGroup2, TestGroup2_TestCase2 );
}