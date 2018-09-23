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
#include "PIDController.hpp"

std::shared_ptr<PIDController> testObject;

TEST(PIDController, calculateErrorTest) {
  testObject = std::make_shared<PIDController>();
  ASSERT_EQ(2.0, testObject->calculateError(50.0, 1.0));
}

TEST(PIDController, calculateVelocityTest) {
  testObject = std::make_shared<PIDController>();
  ASSERT_EQ(0.0, testObject->calculateVelocity());
}
