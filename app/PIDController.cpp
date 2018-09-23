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

/**
 *   @brief Default constructor for PIDController with kp, ki, and kd initialized to random values
 *
 *   @param nothing
 *   @return nothing
 */
PIDController::PIDController() {
  // TODO(ajeetwankhede) Auto-generated constructor stub
  kp = 1.0;
  ki = 1.0;
  kd = 1.0;
  waitTime = -0.1;
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
void PIDController::chnageParameters(double kp, double ki, double kd,
                                     double waitTime) {
  // TODO(ajeetwankhede) change the values of kp, ki, kd, and waitTime
}

/**
 *   @brief Use this function to display the current values of PID parameters kp, ki, and kd, and time step (waitTime)
 *
 *   @param none
 *   @return none
 */
void PIDController::displayParameters() {
  // TODO(ajeetwankhede) display the PID parameters kp, ki, kd
}


/**
 *   @brief Use this function to calculate the current velocity from the error and PID parameters
 *
 *   @param none
 *   @return double value of new current velocity
 */
double PIDController::calculateVelocity(double setVelocity,
                                        double currentVelocity) {
  // TODO(ajeetwankhede) 1. Find errorP = setVelocity - currentVelocity
  // 2. Find errorSum + = errorP
  // 3. Find errorD = errorP - errorPrevious
  // 4. Return current velocity += kp*errorP + ki*errorSum + kd*errorD;
  return 5.2;
}
