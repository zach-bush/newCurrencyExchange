// newCurrencyExchange.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <vector>
using namespace std;


// this class hold all of the methods used for the currency conversion.
class Conversion {
public:

    std::vector<int> myVector;

    // This is the conversion method for USD to British Pounds.
    void pound() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars: ";
        std::cin >> input;
        dollar = stod(input);
        double pound = dollar * 0.73;
        cout << dollar << " Dollars to Pounds = " << pound << " Pounds " << endl;
        myVector.push_back(pound);
    }

    // This is the conversion method for USD to Euros.
    void euro() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double euro = dollar * 0.86;
        cout << dollar << " Dollars to Euros = " << euro << " Euros " << endl;
        myVector.push_back(euro);
    }

    // This is the conversion method for USD to Indian Rupees.
    void rupee() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double rupee = dollar * 75.13;
        cout << dollar << " Dollars to Rupees = " << rupee << " Rupees " << endl;
        myVector.push_back(rupee);
    }

    // This is the conversion method for USD to Ghanain Cedis.
    void cedi() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double cedi = dollar * 11.50;
        cout << dollar << " Dollars to Cedis = " << cedi << " Cedis " << endl;
        myVector.push_back(cedi);
    }

    // This is the conversion method for USD to Australian Dollars.
    void aus() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double aus = dollar * 1.43;
        cout << dollar << " Dollars to Australian Dollars = " << aus << " Australian Dollars " << endl;
        myVector.push_back(aus);
    }

    // This is the conversion method for USD to Bitcoin.
    void btc() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double btc = dollar / 20934;
        cout << dollar << " Dollars to Bitcoin = " << btc << " Bitcoin " << endl;
        myVector.push_back(btc);
        
        
    }

    // This is the conversion method for USD to Russian Rubles.
    void ruble() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double ruble = dollar * 65;
        cout << dollar << " Dollars to Rubles = " << ruble << " Rubles " << endl;
        myVector.push_back(ruble);
    }

    //This is the conversion method from USD to Brazilian Reals.
    void real() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double real = dollar * 5.10;
        cout << dollar << " Dollars to Reals = " << real << " Reals " << endl;
        myVector.push_back(real);
    }


    // This is the conversion method for USD to Iraqi Dinar.
    void dinar() {
        double dollar;
        string input;
        cout << " Verify the amount in US Dollars:  ";
        std::cin >> input;
        dollar = stod(input);
        double dinar = dollar * 1458.50;
        cout << dollar << " Dollars to Dinar = " << dinar << " Dinar " << endl;
        myVector.push_back(dinar);
    }

    void list() {
        std::cout << "Vector elements: ";
        for (int i = 0; i < myVector.size(); i++) {
            std::cout << myVector[i] << " ";
        }
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
            "cedi for Ghanain Cedis, aus for Australian Dollars, btc for Bitcoin, ruble for "
            "Russian Rubles, real for Brazilian Reals, dinar for Iraqi dinars, list to see what you have converted already, or quit to exit the converter:\n";
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

        else if (currency == "list") {
            conversion.list();
        }

        else {
            cout << " That input is not valid, please try again.\n";
        }

    }
}

