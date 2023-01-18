// newCurrencyExchange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Conversion {
public:




    void pound() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars: ";
        std::cin >> input;
        dollar = stod(input);
        double pound = dollar * 0.73;
        cout << dollar << " Dollars to Pounds = " << pound << " Pounds " << endl;
    }

    void euro() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double euro = dollar * 0.86;
        cout << dollar << " Dollars to Euros = " << euro << " Euros " << endl;
    }

    void rupee() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double rupee = dollar * 75.13;
        cout << dollar << " Dollars to Rupees = " << rupee << " Rupees " << endl;
    }

    void cedi() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double cedi = dollar * 11.50;
        cout << dollar << " Dollars to Cedis = " << cedi << " Cedis " << endl;
    }

    void aus() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double aus = dollar * 1.43;
        cout << dollar << " Dollars to Australian Dollars = " << aus << " Australian Dollars " << endl;
    }

    void btc() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double btc = dollar / 20934;
        cout << dollar << " Dollars to Bitcoin = " << btc << " Bitcoin " << endl;
    }

    void ruble() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double ruble = dollar * 65;
        cout << dollar << " Dollars to Rubles = " << ruble << " Rubles " << endl;
    }

    void real() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double real = dollar * 5.10;
        cout << dollar << " Dollars to Reals = " << real << " Reals " << endl;
    }


    void dinar() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double dinar = dollar * 1458.50;
        cout << dollar << " Dollars to Dinar = " << dinar << " Dinar " << endl;
    }


};



int main()
{
    Conversion conversion;



    double dollar;
    string currency;

    cout << " Currency Converter \n ";
    cout << " Enter amount in US dollars you want to convert: ";
    cin >> dollar;

    
    
   
    
  
    


    while (currency != "quit") {

        cout << " \n Enter pound to convert USD to British Pounds, euro to Euros, rupee to Rupees,"
            "cedi for Ghanain Cedis, aus for Australian Dollars, btc for Bitcoin, ruble for"
            "Russian Rubles, real for Brazilian Reals, dinar for Iraqi dinars, or quit to exit the converter:\n";
        cin >> currency;


        if (currency == "pound") {
            conversion.pound();

        }

        else if (currency == "euro") {
            conversion.euro();
        }

        else if (currency == "rupee") {
            conversion.rupee();
        }

        else if (currency == "cedi") {
            conversion.cedi();
        }

        else if (currency == "aus") {
            conversion.aus();
        }

        else if (currency == "btc") {
            conversion.btc();
        }

        else if (currency == "ruble") {
            conversion.ruble();
        }

        else if (currency == "real") {
            conversion.real();
        }

        else if (currency == "dinar") {
            conversion.dinar();
        }

        else {
            cout << " That input is not valid, please try again.\n";
        }

    }
}

