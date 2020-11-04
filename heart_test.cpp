#include "heart.h"
#include <gtest/gtest.h>
namespace {
TEST(heart_test, displayBetween) {  
  EXPECT_EQ(34, displayBetween(75038,75157, "heart_data_csv.csv"));
}
TEST(heart_test, fileNotFound){
  EXPECT_EQ(-1, displayBetween(75038,75157, "random.csv"));
  EXPECT_EQ(-1, highHeartRate(100, "random.csv"));
  EXPECT_EQ(-1, exerciseZoneMax(25,"random.csv"));
}

TEST(heart_test, highHeartRate) {  
  EXPECT_EQ(1208, highHeartRate(100, "heart_data_csv.csv"));
}
TEST(heart_test, exerciseZoneMax) {  
  EXPECT_EQ(140, exerciseZoneMax(25,"heart_data_csv.csv"));
}
} // namespace