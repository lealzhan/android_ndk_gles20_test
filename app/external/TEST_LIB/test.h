#include <string>
#include <iostream>

#include "../Eigen/Dense"
//using Eigen::MatrixXd;
using namespace Eigen;
using namespace Eigen::internal;
using namespace Eigen::Architecture;

class test
{
public:
	std::string get0();
	float eigen_test();
};