#include "test.h"


std::string test::get0()
{
	return std::string("hello");
}
float test::eigen_test()
{
    //2D objects:
    MatrixXd m(2,2);

    //method 1
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);

    //method 2
    m<<3,		-1,
            2.5,		-1.5;
    std::cout <<"m=\n"<< m << std::endl;

    return m.eigenvalues().x().real();
}