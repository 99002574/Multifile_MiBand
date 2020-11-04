#include "imageCon.h"
#include<gtest/gtest.h>
namespace{
    TEST(heart_test, generateReport) {  
    EXPECT_EQ(0, generateReport(112346,"heart_data_csv.csv"));
    }




}