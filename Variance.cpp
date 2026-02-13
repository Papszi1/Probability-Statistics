using namespace std;
#include <iostream>
#include <vector>

double expected_value(vector<double> X);
double variance(vector<double> X);

int main() {
    vector<double> X = {2,4,9};
    double solution = variance(X);
    cout << "The variance for the input is: " << solution << endl;
    return 0;
}

double variance(vector<double> X) {
    double Xexp = expected_value(X);
    vector<double> Xsqr;
    for (int i = 0; i < X.size(); i++) {
        Xsqr.push_back(X[i]*X[i]);
    }
    
    double Xsqrexp = expected_value(Xsqr);
    double solution = Xsqrexp - (Xexp * Xexp);
    return solution;
}

double expected_value(vector<double> X) {
    double sumX = 0;
    for (int i = 0; i < X.size(); i++) {
        sumX += X[i];
    }
    return sumX / X.size();
}