#include <gtest/gtest.h>
#include <cstdio>

#define PRINTF(...)  do { printf("[          ] "); printf(__VA_ARGS__); } while(0)

// C++ stream interface
class TestCout : public std::stringstream
{
public:
    ~TestCout()
    {
        printf("%s",str().c_str());
    }
};

#define TEST_COUT  TestCout()
