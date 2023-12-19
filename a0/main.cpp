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

    // define point p(2,1) in homogeneous coordinate
    Eigen::Vector3f p ;
    p << 2.0, 1.0, 1.0;
    cout << "Point P: \n" << p << endl;

    // defien the rotation transformation of 45 degree in counter-clockwise direction
    Eigen::Matrix3f rotation45 ;
    float rad = Pi/4;
    rotation45 <<
        cos(rad), -sin(rad), 0.0,
        cos(rad), sin(rad), 0.0,
        0.0, 0.0, 1.0 ;
    cout << "Rotation of 45 degree (Pi/4) counter-clockwise: \n" << rotation45 << endl;

    // define the translation of (2, 1)
    Eigen::Vector3f trans ;
    trans << 1.0, 2.0, 0.0;
    cout << "Translation : \n" << trans << endl;

    // perform rotation
    cout << "P after rotation: \n" << rotation45 * p << endl;

    // perform translation
    cout << "after tanslation get : \n" <<  rotation45 * p + trans ;





}


int main(){

    a0();



    return 0;
}