/**
 *  Copyright 2018 Ajeet Wankhede
 *  @file    main.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    9/23/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 4, Test Driven Development - Part 1
 *
 *  @section DESCRIPTION
 *
 *  An implementation of a PID Controller for a new mobile
 *  robot product development at Acme Robotics
 *
 */
#include "PIDController.hpp"
#include <iostream>

int main() {
  PIDController PID;
  double offset = 0.1;
  double setVelocity = 5.0;
  double currentVelocity = 1.0;
  double kp = 1.0;
  double ki = 1.0;
  double kd = 1.0;
  double waitTime = 0.1;

  std::cout << "Set Kp values" << std::endl;
  std::cin >> kp;
  std::cout << "Set Ki values" << std::endl;
  std::cin >> ki;
  std::cout << "Set Kd values" << std::endl;
  std::cin >> kd;
  std::cout << "Set wait time values" << std::endl;
  std::cin >> waitTime;

  PID.chnageParameters(kp,ki,kd,waitTime);
  while (abs(currentVelocity - setVelocity) > offset) {
  currentVelocity = PID.calculateVelocity(setVelocity,currentVelocity);
  std::cout <<"Error in velocity is "<<abs(currentVelocity - setVelocity)<<std::endl;
}
  //std::cout << testObject->displayParameters() << std::endl;
  PID.displayParameters();
  return 0;
}
