#include <iostream>

using namespace std;

int main() {
    int dollars = 0;
    int cents = 0;
    std::cout << "Enter dollars: "; std::cin >> dollars;
    cout << "Enter cents: "; cin >> cents;
    int quarter = 25;
    int nickel = 5;
    int dime = 10;
    int penny = 1;

    

    float total = dollars + (cents*.01);
    //cout << total << endl;
    int num_pen = 0;
    int num_nick = 0;
    int num_dime = 0;
    int num_quart = 0;
    int total_coins = 0;

    int num_quart_total = 0;
    num_quart_total = dollars / (quarter * .01);
    //cout << "dollar to quarters" << num_quart_total << endl;

    if (cents >= quarter){

        num_quart = (cents / quarter);
        
        cents -=  quarter * num_quart; // - (cents % quarter));
        //cout << num_quart << "quarter " << "cents: " << cents << endl;

    }
    if (cents >= dime){
        num_dime = (cents / dime); // - (cents % dime));
        cents -=  dime * num_dime; // - (cents % dime));
        //cout << num_dime << "dime" << "cents: " << cents << endl;

    }
    if (cents >= nickel){
        num_nick = (cents / nickel); // - (cents % nickel));
        cents -=  nickel * num_nick; // - (cents % nickel));
        //cout << num_nick << "NIckel" << "cents: " << cents << endl;

    }
    if(cents >= penny){
        num_pen = cents / penny; // - (cents % penny));
        cents -=  penny * num_pen; // - (cents % penny));
        //cout << num_pen << "penny" << "cents: " << cents << endl;

    }

    num_quart += num_quart_total;
    total_coins = num_pen + num_nick + num_dime + num_quart;


    cout << "Pennies: " << num_pen << endl;
    cout << "Nickels: " << num_nick << endl;
    cout << "Dimes: " << num_dime << endl;
    cout << "Quarters: " << num_quart << endl;
    cout << endl;
    cout << "Total coins used: " << total_coins;
}


