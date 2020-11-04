#include "heart.h"
#include <gtest/gtest.h>
namespace {
TEST(heart_test, displayBetween) {  
  EXPECT_EQ(34, displayBetween(75038,75157, "heart_data_csv.csv"));
}

TEST(heart_test, highHeartRate) {  
  EXPECT_EQ(1208, highHeartRate(100, "heart_data_csv.csv"));
}
TEST(heart_test, exerciseZoneMax) {  
  EXPECT_EQ(140, exerciseZoneMax(25,"heart_data_csv.csv"));
}
} // namespace