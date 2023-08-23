#ifndef INTEGER_H_
#define INTEGER_H_
#include <iostream>

using namespace std;
    int *m_pInt;
class Integer{
    Integer();
    Integer(int value);
    void SetValue(int value);
    int GetValue()const;
    ~Integer();
};


#endif /*INTEGER_H_*/