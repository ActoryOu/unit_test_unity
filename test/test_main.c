#include <stdio.h>
#include "unity.h"
#include "unity_fixture.h"

#include "test_group_1.h"
#include "test_group_2.h"

int local_status = 0;

TEST_GROUP( LocalGroup );

TEST_SETUP( LocalGroup )
{
    local_status = 0;
}

TEST_TEAR_DOWN( LocalGroup )
{
    local_status = 0xFF;
}

TEST( LocalGroup, LocalGroup_TestCase1 )
{
    TEST_ASSERT_EQUAL_INT32( local_status, 0 );
}

TEST( LocalGroup, LocalGroup_TestCase2 )
{
    TEST_ASSERT_EQUAL_INT32( local_status, 0 );
}

TEST_GROUP_RUNNER( LocalGroup )
{
    RUN_TEST_CASE( LocalGroup, LocalGroup_TestCase1 );
    RUN_TEST_CASE( LocalGroup, LocalGroup_TestCase2 );
}

int main()
{
    int status = -1;

    printf("Begin the test\n");
    
    /* Initialize unity. */
    UnityFixture.Verbose = 1;
    UnityFixture.GroupFilter = 0;
    UnityFixture.NameFilter = 0;
    UnityFixture.RepeatCount = 1;
    UNITY_BEGIN();

    /* Run the test group. */
    RUN_TEST_GROUP( LocalGroup );
    RUN_TEST_GROUP( TestGroup1 );
    RUN_TEST_GROUP( TestGroup2 );

    status = UNITY_END();
    
    printf("End the test, status: %d\n", status);

    return 0;
}