#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression* x) : UnaryExpression::UnaryExpression(x) {}

int NegativeExpression::solve() {
  int hasil = (-1)*(this->x)->solve() ;
  return hasil;
}