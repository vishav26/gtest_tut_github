#include "cube.hpp"
#include "gtest/gtest.h"

class TestPower: public ::testing::Test
{
public:

	class TestPowImpl: public power
	{
	public:
		TestPowImpl():
			power(5)
		{

		}
	};

	TestPowImpl Impl1;
	TestPower(void):
			Impl1()
	{

	}

	~TestPower(void)
	{

	}
};

TEST_F(TestPower, Testing1)
{
	EXPECT_EQ(24,Impl1.square(5));
}

TEST(testMath, myCubeTest)
{
    EXPECT_EQ(1000, cubic(10));
}

int
main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
//    unittest::registerConfigurableEventListener();

    return RUN_ALL_TESTS();
}
