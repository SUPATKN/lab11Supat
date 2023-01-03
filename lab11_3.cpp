#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
    double mean;
    double sumX2;
    double sum;
    int count;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
        sum += atof(text.c_str());
        sumX2 += pow(atof(text.c_str()),2);
        count++;
    }
    mean = sum/count;
    cout << "Number of data = "<< count  << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = "<< sqrt((sumX2/count)-pow(mean,2));
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
