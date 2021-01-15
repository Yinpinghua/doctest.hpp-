#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.hpp"

int main(int argc, char** argv) {
	doctest::Context context;
	context.applyCommandLine(argc, argv);

	int res = context.run(); // run doctest

	// important - query flags (and --exit) rely on the user doing this
	if (context.shouldExit())
	{
		// propagate the result of the tests
		return res;
	}

	printf("%s\n", "Hello, World!");

	system("pause");
	return 0;
}

int add(int a,int b) {
	return a + b;
}

TEST_CASE("testing the add function") {
	CHECK(add(0,0) == 0);
	CHECK(add(1,2) == 3);
	CHECK(add(2,3) == 5);
	CHECK(add(3,4) == 7);
	CHECK(add(1,4) == 5);
}
