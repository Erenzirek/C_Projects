#include "integer.h"

Integer::Integer(){
    m_pInt = new int(0);
}
Integer::Integer(int value){
    m_pInt = new int(value);
}
void SetValue(int value){
    *m_pInt = value;
}
int GetValue(){
    return *m_pInt;
}

Integer::~Integer(){
    delete m_pInt;
}