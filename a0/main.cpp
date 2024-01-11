#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace std;


#define Pi acos(-1.0f)

void introduction_eigen() {
    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    cout << j << endl;
//     matrix add i + j
//     matrix scalar multiply i * 2.0
//     matrix multiply i * j
//     matrix multiply vector i * v
    cout << "Mat calc : \n" ;
    cout << i * j << endl;
    cout << i * v << endl;

}

void a0() {

    // Point (2,1) in homogeneous coordinate
    Eigen::Vector3f p ;
    p << 2.0, 1.0, 1.0;
    cout << "\n>>>Point P: \n" << p << endl;

    // Rotation transformation of 45 degree in counter-clockwise direction
    Eigen::Matrix3f rotation45 ;
    float rad = Pi/4;
    rotation45 <<
        cos(rad), -sin(rad), 0.0,
        sin(rad), cos(rad), 0.0,
        0.0, 0.0, 1.0 ;
    cout << "\n>>>Rotation of 45 degree (Pi/4) counter-clockwise: \n" << rotation45 << endl;


    // Translation of (1, 2) in homogeneous form (as matrix)
    Eigen::Matrix3f trans_h ;
    trans_h << 1.0, 0.0, 1.0,
               0.0, 1.0, 2.0,
               0.0, 0.0, 1.0;

    cout << "\n>>>Translation : \n" << trans_h << endl;


    // perform homogeneous calc : rotate -> trans
    cout << "\n>>>Homogeneous Transform Res : \n" << trans_h * rotation45 * p;



}


int main(){

    a0();



    return 0;
}