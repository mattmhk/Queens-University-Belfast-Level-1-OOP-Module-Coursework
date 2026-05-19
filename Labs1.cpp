#include <iostream>
using namespace std;

int main() {
    double usd,eur,cny,sgd,myr,gbp=0.0;

    cout << "Enter the amount in USD: ";
    cin >> usd;
    cout << "Enter the amount in EUR: ";
    cin >> eur;
    cout << "Enter the amount in CNY: ";
    cin >> cny;
    cout << "Enter the amount in SGD: ";
    cin >> sgd;
    cout << "Enter the amount in MYR: ";
    cin >> myr;

    const double usd_to_gbp = 0.75;
    const double eur_to_gbp = 0.85;
    const double cny_to_gbp = 0.11;
    const double sgd_to_gbp = 0.55;
    const double myr_to_gbp = 0.18;

    gbp += usd * usd_to_gbp;
    gbp += eur * eur_to_gbp;
    gbp += cny * cny_to_gbp;
    gbp += sgd * sgd_to_gbp;
    gbp += myr * myr_to_gbp;

    cout << "Total amount in GBP:" << gbp<< endl;

}