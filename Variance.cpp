using namespace std;
#include <iostream>
#include <vector>

double expected_value_calculation(vector<double> X);

int main() {
    vector<double> X = {2,4,9};
    double Xexp = expected_value_calculation(X);
    vector<double> Xsqr;
    for (int i = 0; i < X.size(); i++) {
        Xsqr.push_back(X[i]*X[i]);
    }
    double Xsqrexp = expected_value_calculation(Xsqr);
    
    double variance = Xsqrexp - (Xexp * Xexp);
    cout << "The variance for the input is: " << variance << endl;

    return 0;
}

double expected_value_calculation(vector<double> X) {
    double sumX = 0;
    for (int i = 0; i < X.size(); i++) {
        sumX += X[i];
    }
    return sumX / X.size();
}