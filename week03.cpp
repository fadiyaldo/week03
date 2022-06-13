// week03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // declaring variables
    using namespace std;
    string item_name; 
    string fragile;
    int total;
    string destination;
    float shipping=0;
    float total_cost=0;
    // taking inputs and storing them into variables
    cout << "please enter the name of the item........" ;
    cin >> item_name; 
    cout << "is the item fragile (y:yes/n:no).........";
    cin >> fragile;
    // having an or so that both captialize and small work
    if (fragile == "y" || fragile=="Y") {
        shipping=shipping + 2;
    }
    else if (fragile == "n" || fragile == "N") {
        shipping = shipping ;
    }
    else {
        cout << "invalid entry, exiting" << exit;
    }
    cout << "please enter your order total............." ;
    cin >> total;
    cout << "please enter your destination(usa/cad/aus/mars)" << endl;
    cin >> destination;
    // setting up the logic combining both the total with the destination since they depend on each other using the and (&&)
    if (total < 50 && destination == "usa") {
        shipping = shipping + 6;
    }
    else if (total > 50 && destination == "cad") {
        shipping = shipping + 8;
    }
    else if (total < 50 && destination == "aus") {
        shipping = shipping + 10;
    }
    else if (total >= 50 && total <= 100 && destination == "usa") {
        shipping = shipping + 9;
    }
    else if (total >= 50 && total <= 100 && destination == "cad") {
        shipping = shipping + 12;
    }
    else if  (total >= 50 && total <= 100 && destination == "aus") {
        shipping = shipping + 14;
    }
    else if (total > 100 && total <= 150 && destination == "usa") {
        shipping = shipping + 12;
    }
    else if (total > 100 && total <= 150 && destination == "cad") {
        shipping = shipping + 15;
    }
    else if (total > 100 && total <= 150 && destination == "aus") {
        shipping = shipping + 17;
    }
    else if (total > 150) {
        shipping = 0;
    }
    else if (destination == "mars") {
        shipping = 1000000;
    }
    //adding up the total and shipping for the finale cost
    total_cost = total + shipping;

    cout << "your item is........................." << item_name<< endl;
    cout << "the total shipping is ..............."<< shipping<< endl;
    cout << "you are shipping to ................." << destination << endl;
    cout << "Your total shipping costs are ......." << total_cost << endl;
    system("pause");
        return 0;
}


