/*
 * @Author: your name
 * @Date: 2021-05-12 13:13:24
 * @LastEditTime: 2021-05-12 13:27:31
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \action\test\main.cpp
 */
#include "gtest/gtest.h"

#include <algorithm.h>

TEST(algorithm_test, add) {
    EXPECT_EQ(gt::add(1, 2), 3);
}

TEST(algorithm_test, sub) {
    EXPECT_EQ(gt::sub(3, 2), 1);
}