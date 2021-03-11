#include "evaluator.h"
#include <QDebug>

void FactorialCalculator::handleCalculate(const QString &val)
{
  bool check;
  auto num = val.toUShort(&check);
  m_result = check ? QString::number(calculate(num)) : QString();
  emit resultChanged();
}

quint64 FactorialCalculator::calculate(quint16 value)
{
  quint64 tmp = 1;
  while(value > 0)
  {
      tmp *= value;
      value--;
  }
  return tmp;
}
