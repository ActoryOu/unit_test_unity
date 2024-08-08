#include "test_group_1.h"

int test_group_1_status = 0;

TEST_SETUP( TestGroup1 )
{
    
}

TEST_TEAR_DOWN( TestGroup1 )
{
    test_group_1_status = 1;
}

TEST( TestGroup1, TestGroup1_TestCase1 )
{
    TEST_ASSERT_EQUAL_INT32( test_group_1_status, 0 );
}

TEST( TestGroup1, TestGroup1_TestCase2 )
{
    TEST_ASSERT_EQUAL_INT32( test_group_1_status, 0 );
}

TEST_GROUP_RUNNER( TestGroup1 )
{
    RUN_TEST_CASE( TestGroup1, TestGroup1_TestCase1 );
    // RUN_TEST_CASE( TestGroup1, TestGroup1_TestCase2 );
}