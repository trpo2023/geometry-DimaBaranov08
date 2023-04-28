#include <ctest.h>
#include<stdio.h>
#include <libgeometry/parser.h>
#include<string.h>
#include<math.h>

CTEST(suite1, test_area)
{
    int x = 2;
    int expected = area(x);
    int result = 12;

    ASSERT_EQUAL(expected, result);
    ASSERT_TRUE(result);
}

CTEST(suite2, test_perimetr)
{
    int x = 5;
    int expected = per(x);
    int result = 31;
    ASSERT_EQUAL(expected, result);

}