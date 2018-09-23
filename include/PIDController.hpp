/**
 *  Copyright 2018 Ajeet Wankhede
 *  @file    PIDController.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    9/23/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 4, Test Driven Development - Part 1
 *
 *  @section DESCRIPTION
 *
 *  PID class declaration
 *
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

class PIDController {
 private:
  // Declaration of PID parameters
  double kp, ki, kd;
  // Declaration of error and time step
  double errorSum, errorPrevious;
  // Declaration of current velocity
  double velocity;

 public:
  double waitTime;
  /**
   *   @brief Default constructor for PIDController with kp, ki, and kd initialized to random values
   *
   *   @param nothing
   *   @return nothing
   */
  PIDController();
  /**
   *   @brief Default destructor for PIDController
   *
   *   @param nothing
   *   @return nothing
   */
  virtual ~PIDController();
  /**
   *   @brief Use this function to change the PID parameters kp, ki, and kd, and time step dt
   *
   *   @param double value of proportional gain (kp)
   *   @param double value of integral gain (ki)
   *   @param double value of differential gain (kd)
   *   @param double value of time step (waitTime)
   *   @return none
   */
  void chnageParameters(double, double, double, double);
  /**
   *   @brief Use this function to display the current values of PID parameters kp, ki, and kd, and time step (waitTime)
   *
   *   @param none
   *   @return none
   */
  void displayParameters();
  /**
   *   @brief Use this function to calculate the current velocity from the errors and PID parameters
   *   @param double value of desired velocity
   *   @param double value of current velocity
   *   @return double value of current velocity
   */
  double calculateVelocity(double, double);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_
