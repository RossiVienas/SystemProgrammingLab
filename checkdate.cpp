#include "checkdate.h"

#include <iostream>
#include <string>


CheckDate::CheckDate()
{

}



bool CheckDate::rangeMath(double num){
    if(!(num > -1000 && num < 1000)) return false;
    return true;
}


bool CheckDate::rangeArraySize(int num){
    if(num > 1 && num < 21) return true;
    return false;
}


bool CheckDate::integer(std::wstring enter){


    return true;
}
