#include <gtest/gtest.h>
#include "func.h"

TEST(laba1, Monday) {
    EXPECT_TRUE(isAfraid("понедельник", 12));
    EXPECT_FALSE(isAfraid("понедельник", 11));
    EXPECT_FALSE(isAfraid("понедельник", 13));
}

TEST(laba1, Tuesday) {
    EXPECT_TRUE(isAfraid("вторник", 96));
    EXPECT_TRUE(isAfraid("вторник", 100));
    EXPECT_FALSE(isAfraid("вторник", 95));
    EXPECT_FALSE(isAfraid("вторник", 50));
}

TEST(laba1, Wednesday) {
    EXPECT_TRUE(isAfraid("среда", 34));
    EXPECT_FALSE(isAfraid("среда", 33));
    EXPECT_FALSE(isAfraid("среда", 35));
}

TEST(laba1, Thursday) {
    EXPECT_TRUE(isAfraid("четверг", 0));
    EXPECT_FALSE(isAfraid("четверг", 1));
    EXPECT_FALSE(isAfraid("четверг", -1));
}

TEST(laba1, Friday) {
    EXPECT_TRUE(isAfraid("пятница", 2));
    EXPECT_TRUE(isAfraid("пятница", 4));
    EXPECT_TRUE(isAfraid("пятница", -6));
    EXPECT_FALSE(isAfraid("пятница", 3));
    EXPECT_FALSE(isAfraid("пятница", 5));
}

TEST(laab1, Saturday) {
    EXPECT_TRUE(isAfraid("суббота", 56));
    EXPECT_FALSE(isAfraid("суббота", 55));
    EXPECT_FALSE(isAfraid("суббота", 57));
}

TEST(laba1, Sunday) {
    EXPECT_TRUE(isAfraid("воскресенье", 666));
    EXPECT_TRUE(isAfraid("воскресенье", -666));
    EXPECT_FALSE(isAfraid("воскресенье", 665));
    EXPECT_FALSE(isAfraid("воскресенье", 667));
}

TEST(laba1, InvalidDay) {
    EXPECT_FALSE(isAfraid("invalid", 12));
    EXPECT_FALSE(isAfraid("", 12));
}