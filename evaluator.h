#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <QObject>

class FactorialCalculator : public QObject
{
  Q_OBJECT
public:
  Q_PROPERTY(QString result READ result NOTIFY resultChanged)
  QString result() const {return m_result;}

  Q_INVOKABLE void handleCalculate(const QString& val);

signals:
  void resultChanged();

private:
  quint64 calculate(quint16 value);

private:
  QString m_result;
};

#endif // EVALUATOR_H
