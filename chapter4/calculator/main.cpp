#include "expressionTemplate.h"

int main() {
  Expression<int> sum(12, '+', 6);
  sum.printEvaluation();

  Expression<double> prod(12.321, '*', 3123.12);
  prod.printEvaluation();

  return 0;
}
