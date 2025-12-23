#include <iostream>
#include<fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
	source.open("score.txt") ;
    double result=0,mean=0,sum_sq=0;
	string text;
    int i = 0;
	while(getline(source , text)){
        result += stof(text);
        sum_sq += pow(stof(text),2);
        i++;
	}
    mean = result/i;
    double SD = sqrt((sum_sq/i)-(pow(mean,2))); 

    cout << "Number of data = "<< i;
    cout << setprecision(3);
    cout << "\nMean = "<< mean;
    cout << "\nStandard deviation = "<< SD;
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
