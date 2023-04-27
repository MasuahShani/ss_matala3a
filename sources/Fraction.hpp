#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>


namespace ariel{
class Fraction
{
private:
    int mon;
    int mach;
public:
    Fraction(int mon=0,int mach=1)
    {
        this->mon=mon;
        this->mach=mach;
    }
    ~Fraction(){};
    Fraction (Fraction& f)
    {
        mon=f.mon;
        mach=f.mach;
    }
    Fraction& operator=(const Fraction& f){return *this;}
    Fraction (Fraction &&f) noexcept
    {
        mon=f.mon;
        mach=f.mach;
    }
    Fraction & operator=(Fraction&& f) noexcept{return *this;}
    
   
    //prefix
    Fraction& operator++(){return (*this);}
    Fraction& operator--(){return (*this);}
    //postfix
    Fraction operator++(int)
    {
        Fraction f(1,2);
        return f;
    }
    Fraction operator--(int)
    {
        Fraction f(1,2);
        return f;
    }

    bool operator==(const Fraction& b){return true;}
    bool operator>(const Fraction& b){return true;}
    bool operator<(const Fraction& b){return true;}
    bool operator<=(const Fraction& b){return true;}
    bool operator>=(const Fraction& b){return true;}
    
    bool operator==(const float b){return true;}
    bool operator>(const float b){return true;}
    bool operator<(const float b){return true;}
    bool operator<=(const float b){return true;}
    bool operator>=(const float b){return true;}

    friend bool operator==(const float a, const Fraction& b){return true;}
    friend bool operator>(const float a, const Fraction& b){return true;}
    friend bool operator<(const float a, const Fraction& b){return true;}
    friend bool operator<=(const float a, const Fraction& b){return true;}
    friend bool operator>=(const float a, const Fraction& b){return true;}

    Fraction operator+(const Fraction& b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator-(const Fraction& b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator/(const Fraction& b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator*(const Fraction& b) const {
        Fraction f(1,2);
        return f;
    }
    friend Fraction operator+(const float a, const Fraction& b){
        Fraction f(1,2);
        return f;
    }
    friend Fraction operator-(const float a, const Fraction& b){
        Fraction f(1,2);
        return f;
    }
    friend Fraction operator/(const float a, const Fraction& b){
        Fraction f(1,2);
        return f;
    }
    friend Fraction operator*(const float a, const Fraction& b){
        Fraction f(1,2);
        return f;
    }
    Fraction operator+(const float b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator-(const float b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator/(const float b) const {
        Fraction f(1,2);
        return f;
    }
    Fraction operator*(const float b) const {
        Fraction f(1,2);
        return f;
    }

    friend std::ostream& operator<< (std::ostream& output, const Fraction& f){return output;}
    friend std::istream& operator>> (std::istream& input , Fraction& f){return input;}

};}


