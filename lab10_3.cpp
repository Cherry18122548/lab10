#include <iostream>

#include <iomanip>

#include <cmath>

#include <string>

#include <cstdlib>

#include <fstream>


using namespace std;



int main()

{

        int count = 0;

        double sum = 0;

        float sum_of_square = 0;

        string textline;

        ifstream source("score.txt");

        while (getline(source,textline))
        {

                sum += stof(textline);

                sum_of_square += pow(stof(textline),2);

                count++;

        }

        float mean = sum/count;
        float Standard_deviation = sqrt((sum_of_square/count)-(mean*mean));
        


        cout << "Number of data = " << count<< "\n";

        cout << setprecision(3);

        cout << "Mean = " << mean << "\n";

        cout << "Standard deviation = " << Standard_deviation;

}
