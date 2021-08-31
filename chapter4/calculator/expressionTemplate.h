#include <iostream>

// template class to evaluate simple expressions
template <typename ty>
class Expression {
  private:
      ty lhs, rhs, result;
      char oper;
  public:
    Expression(ty _lhs, char _oper, ty _rhs)
    : lhs(_lhs), oper(_oper), rhs(_rhs) {
      result = evaluate();
    };
    ty evaluate() {
      switch (oper) {
        case '+':
          return lhs+rhs;
        case '-':
          return lhs-rhs;
        case '*':
          return lhs*rhs;
        case '/':
          return lhs/rhs;
        default:
          std::cout << "Warning - Invalid Operator! Returned 0\n";
          return 0;
      }
    }
    void printEvaluation() const {
      std::cout << lhs << oper << rhs << '=' << result <<'\n';
    }
};
