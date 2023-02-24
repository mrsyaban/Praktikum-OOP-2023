#include "AddExpression.hpp"

AddExpression::AddExpression(Expression* x, Expression* y) : BinaryExpression::BinaryExpression(x, y) {}

int AddExpression::solve() {
  int hasil = (this->x)->solve() + (this->y)->solve();
  return hasil;
}