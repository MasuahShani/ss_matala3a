#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("+")
{
    Fraction a(5,2);//1.5
    Fraction b(1,2);//0.5
    Fraction c(4,2);//2

    Fraction d=a+b;
    CHECK(d==c);
    CHECK((a+b)==2);
    CHECK((a+0.5)==2);
    CHECK((0.5+a)==2);
    d=a+0.5;
    CHECK(d==c);
    d=0.5+a;
    CHECK(d==c);

}
TEST_CASE("-")
{
    Fraction a(5,2);//1.5
    Fraction b(1,2);//0.5
    Fraction c(4,2);//2

    Fraction d=c-a;
    CHECK(d==b);
    CHECK((c-a)==0.5);
    CHECK((c-0.5)==1.5);
    CHECK((1.5-b)==1);
    d=c-0.5;
    CHECK(d==a);
    d=2-a;
    CHECK(d==b);

}
TEST_CASE("*")
{
    Fraction a(5,2);//1.5
    Fraction b(1,2);//0.5
    Fraction c(4,2);//2
    Fraction d(1,1);//1

    Fraction e=c*b;

    CHECK(e==b);
    CHECK((c*a)==3);
    CHECK((c*0.5)==1);
    CHECK((0.5*c)==1);
    e=(c*0.5);
    CHECK(e==d);
    e=(2*d);
    CHECK(e==c);

}
TEST_CASE("/")
{
    Fraction a(5,2);//1.5
    Fraction b(1,2);//0.5
    Fraction c(4,2);//2
    Fraction d(1,1);//1

    Fraction e=c/c;

    CHECK(e==d);
    CHECK((d/c)==0.5);
    CHECK((c/2)==1);
    CHECK((1/c)==0.5);
    e=d/2;
    CHECK(e==a);
    e=1/c;
    CHECK(e==b);

}
TEST_CASE("=")
{
    Fraction f;
    Fraction a(5,2);
    CHECK_NOTHROW(f=a);
}
TEST_CASE("boolean")
{
    Fraction a(5,2);//1.5
    Fraction b(1,2);//0.5
    
    CHECK(a==a);
    CHECK(a>b);
    CHECK(a>=a);
    CHECK(a>=b);
    CHECK(b<a);
    CHECK(b<=b);
    CHECK(b<=a);

}
TEST_CASE("++")
{
    Fraction a(5,2);//1.5

    CHECK(a++==2.5);
    CHECK(++a==2.5);
    CHECK(a==3.5);
}
TEST_CASE("--")
{
    Fraction a(7,2);//3.5

    CHECK(a--==2.5);
    CHECK(--a==2.5);
    CHECK(a==1.5);
}
TEST_CASE("denominator is 0")
{
   CHECK_THROWS( Fraction(3,0));
}
TEST_CASE("Numerator is 0")
{
   CHECK_NOTHROW( Fraction(0,1));
}
TEST_CASE("negative/negative is positive")
{
    Fraction a(-1,-2);
    CHECK(a>0);
}