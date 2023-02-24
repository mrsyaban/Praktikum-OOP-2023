#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression* x, Expression* y) : BinaryExpression::BinaryExpression(x, y) {}

int SubstractExpression::solve() {
  int hasil = (this->x)->solve() - (this->y)->solve();
  return hasil;
}