// Authors: Luis Solano, Angie Solís, Emilia Víquez

#ifndef IDS
#define IDS

#include "common.hpp"
#include "matrix.hpp"
#include <iostream>
#include <chrono>
#include <memory>
#include <stack>
#include <string>

#define LIMIT 40320

class Ids {
  private:
    std::shared_ptr<Matrix> initial;
    Common common;
    std::stack<std::string> path;
    bool measure;

    void printSolution();

  public:
    Ids();
    Ids(std::string strInitial, bool measure);
    ~Ids();
    void solve();
    bool checkLevel(int level, int actualLevel, std::shared_ptr<Matrix>actual);
    void printAsMatrix(std::string text);
};

#endif