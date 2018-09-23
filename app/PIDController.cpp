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
  kp = 1;
  ki = 1;
  kd = 1;
  dt = 0.1;
  velocity = 0;
  error = 0;
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
                                     double dt) {
  // TODO(ajeetwankhede) change the values of kp, ki, kd, and dt
}

/**
 *   @brief Use this function to display the current values of PID parameters kp, ki, and kd, and time step dt
 *
 *   @param none
 *   @return none
 */
void PIDController::displayParameters() {
  // TODO(ajeetwankhede) display the PID parameters kp, ki, kd
}

/**
 *   @brief Use this function to calculate the error between desired velocity and current velocity
 *
 *   @param double value of desired velocity
 *   @param double value of current velocity
 *   @return double value of error
 */
double PIDController::calculateError(double setVelocity, double velocity) {
  // TODO(ajeetwankhede) calculate the error and return it
  return 100.0;
}

/**
 *   @brief Use this function to calculate the current velocity from the error and PID parameters
 *
 *   @param none
 *   @return double value of current velocity
 */
double PIDController::calculateVelocity() {
  // TODO(ajeetwankhede) calculate the current velocity
  return 10.0;
}
