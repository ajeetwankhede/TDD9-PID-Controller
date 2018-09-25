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
#include <iostream>
#include "PIDController.hpp"

int main() {
  PIDController PID;  //  Create object of class PIDController
  double offset = 0.1;  //  initialize offset between velocities
  double setVelocity = 5.0;  // initialize desired set velocity
  double currentVelocity = 1.0;  // initialize current velocity
  double kp = 0.4;
  double ki = 0.2;
  double kd = 0.4;
  double waitTime = 0.0;
  //  Get values of kp, ki, kd, waitTime from user
  std::cout << "Enter Kp, Ki, Kd and wait"
      " time in order with a space between them" << std::endl;
  std::cin >> kp >> ki >> kd >> waitTime;

  //  Set kp, ki, kd, waitTime taken from user
  PID.chnageParameters(kp, ki, kd, waitTime);

  //  Running PID control on velocity and ensuring
  //  convergence below required offset
  while (abs(currentVelocity - setVelocity) > offset) {
    currentVelocity = PID.calculateVelocity(setVelocity, currentVelocity);
    std::cout << "Error in velocity is " << abs(currentVelocity - setVelocity)
        << std::endl;
  }
  //  Display Parameters of kp, ki, kd, waitTime which were used for computing
  PID.displayParameters();
  return 0;
}
