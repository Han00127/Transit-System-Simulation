/**
 * @file transit_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <ctime>
#include <iostream>
#include <random>

#include "src/local_simulator.h"

int main() {
  // Number of rounds of generation to simulate in test
  int rounds = 50;
  // Seed the random number generator...
  srand((long)time(NULL));
  LocalSimulator my_sim;
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "         STARTING" << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "*************************/" << std::endl;

  my_sim.Start();

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "           BEGIN" << std::endl;
  std::cout << "          UPDATING" << std::endl;
  std::cout << "*************************/" << std::endl;

  for (int i = 0; i < rounds; i++) {
    my_sim.Update();
  }

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "         COMPLETE" << std::endl;
  std::cout << "*************************/" << std::endl;


  return 0;
}
