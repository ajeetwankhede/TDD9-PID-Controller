/**
 *  Copyright 2018 Ajeet Wankhede
 *  @file    PIDController.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    9/23/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 4, Test Driven Development - Part 1
 *
 *  @section DESCRIPTION
 *
 *  PID class implementation
 *
 */

#include "PIDController.hpp"
#include <iostream>
/**
 *   @brief Default constructor for PIDController with kp, ki, and kd initialized to random values
 *
 *   @param nothing
 *   @return nothing
 */
PIDController::PIDController() {
  kp = 0.4;
  ki = 0.2;
  kd = 0.4;
  waitTime = 1;
  velocity = 0.0;
  errorSum = 0.0;
  errorPrevious = 0.0;
}

/**
 *   @brief Default destructor for PIDController
 *
 *   @param nothing
 *   @return nothing
 */

PIDController::~PIDController() {
  // TODO(ajeetwankhede) Auto-generated destructor stub
}

/**
 *   @brief Use this function to change the PID parameters kp, ki, and kd, and time step dt
 *
 *   @param double value of proportional gain (kp)
 *   @param double value of integral gain (ki)
 *   @param double value of differential gain (kd)
 *   @param double value of time step (dt)
 *   @return none
 */
void PIDController::chnageParameters(double kp1, double ki1, double kd1,
                                     double waitTime1) {
  kp = kp1;  //  Set proportional gain (kp)
  ki = ki1;  //  Set integral gain (ki)
  kd = kd1;  //  Set differential gain (kd)
  waitTime = waitTime1;  //  time step (dt)
}

/**
 *   @brief Use this function to display the current values of PID parameters kp, ki, and kd, and time step (waitTime)
 *
 *   @param none
 *   @return none
 */
void PIDController::displayParameters() {
  //  Display kp, ki, kd parameters
  std::cout << "Proportional constant is : " << kp << std::endl;
  std::cout << "Integral constant is : " << ki << std::endl;
  std::cout << "Differential constant is : " << kd << std::endl;
}


/**
 *   @brief Use this function to calculate the current velocity from the error and PID parameters
 *
 *   @param none
 *   @return double value of new current velocity
 */
double PIDController::calculateVelocity(double setVelocity,
                                        double currentVelocity) {
    double errorP =
    setVelocity - currentVelocity;  // Compute proportional error
    errorSum = errorSum + errorP;  //  Compute accumulated error
    double errorD = errorP - errorPrevious;  //  Compute Differential error
    currentVelocity += kp*errorP
        + ki*errorSum + kd*errorD;  //  Compute Current velocity
    errorPrevious = errorP;
    return currentVelocity;
}
