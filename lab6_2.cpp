#include <iostream>
#include <cmath>

using namespace std;



double deg2rad(double degree){
    return degree*M_PI/180.0;
}
double rad2deg(double radian){
    return radian*180.0/M_PI;
}

double findXComponent(double length1, double length2, double angle1Rad, double angle2Rad) {
    return length1 * cos(angle1Rad) + length2 * cos(angle2Rad);
}


double findYComponent(double length1, double length2, double angle1Rad, double angle2Rad) {
    return length1 * sin(angle1Rad) + length2 * sin(angle2Rad);
}


double pythagoras(double xComp, double yComp) {
    return sqrt(pow(xComp, 2) + pow(yComp, 2));
}

void showResult(double resultVecLength, double resultVecDirection) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << resultVecLength << endl;
    cout << "Direction of the resultant vector (deg) = " << resultVecDirection << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
