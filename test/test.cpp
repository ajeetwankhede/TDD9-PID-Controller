/**
 *  Copyright 2018 Ajeet Wankhede
 *  @file    PIDControllerTest.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    9/23/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 4, Test Driven Development - Part 1
 *
 *  @section DESCRIPTION
 *
 * Unit test stubs for PID controller
 *
 */

#include <gtest/gtest.h>
#include <memory>
#include <cstdlib>
#include "PIDController.hpp"

std::shared_ptr<PIDController> testObject;

/**
 * @brief This test is for checking the convergence of the controller within the given offset
 *
 */
TEST(PIDController, calculateVelocityTest) {
  testObject = std::make_shared<PIDController>();
  double offset = 0.1;
  double setVelocity = 5.0;
  double currentVelocity = 1.0;
  while (abs(currentVelocity - setVelocity) > offset) {
    currentVelocity = testObject->calculateVelocity(setVelocity,
                                                    currentVelocity);
  }
  EXPECT_NEAR(setVelocity, currentVelocity, offset);
}

/**
 * @brief This test is for checking the value of wait time is not less than zero
 *
 */
TEST(PIDController, waitTimeTest) {
  testObject = std::make_shared<PIDController>();
  ASSERT_LT(0.0, testObject->waitTime);
}
