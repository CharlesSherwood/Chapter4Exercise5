/*FileName:Chapter4Exercise5.cpp
Programmer:Charles Sherwood
Date:2/25
Requirements:This Program should ask for the users 
height and weight and then calculate their bmi 
then display a message if its underweight,overweight,or in a good range
*/





#include<iomanip>
#include<cmath>
#include <iostream>
using namespace std;

//Create Variables for height and weight
double Weight()
{
    double weight;
    cout << setw(70) << "Please Enter Your Weight:";
    cin >> weight;
    return weight;
}

double Height()
{
    double height;
    cout << setw(70) << "Please Enter Your Height:";
    cin >> height;
    return height;
}
//Return them to main and calculate 
int main()
{
    double weight = Weight();
    double height = Height();
    double BMI = weight * 703 / pow(height, 2);


    //Display Results Formatting to middle of screen
    cout << setw(63) << fixed << setprecision(1) << "Your BMI Is: " << BMI << endl;
    if (BMI < 18.5)
        cout << setw(81) << "You Are Underweight For Your Height Pls Eat"<<endl;
    else if (BMI > 25)
        cout << setw(76) << "You Are Overweight For Your Height"<<endl;
    else
        cout << setw(81) << "You Are At A Good Weight To Height Ratio!!!"<<endl;

    cout << setw(81)<< "!!!!Thank You For Using My BMI Calculator!!!!";
 

}
