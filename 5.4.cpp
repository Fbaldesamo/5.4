// 5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    string chosen_fig;
    int i,choice_id,side,vol;
    float l, w, h;
    
   
    cout << "Choose your Volume of Figures\n";
    cout << "[C]-Cube\n[R]-Rectangular Prism\n[S]-Sphere\n\n";

    cout << "Choose figure: ";
    cin >> chosen_fig;


    for (i = 0; i < chosen_fig.length(); i++)
    {
        chosen_fig[i] = toupper(chosen_fig[i]);
    }

    if (chosen_fig == "C") {
        choice_id = 1;

    }
    else if (chosen_fig == "R") {

        choice_id = 2;
    }
    else if (chosen_fig == "S") {

        choice_id = 3;
    };
    
    switch (choice_id) {
    case 1:
        cout << "You have chosen Cube.\nEnter side: ";
        cin >> side;
        vol = (side * side * side);
        cout << "The volume of the cube is: "<<vol;
        break;
    case 2:
        cout << "You have chosen Rectangular Prism.";
        cout << "\nenter length: ";
        cin >> l;
        cout << "\nenter width: ";
        cin >> w;
        cout << "\nenter height: ";
        cin >> h;
        vol = (l * w * h);
        cout << "The volume of the cube is: "<<vol;
        break;
    case 3:
        cout << "You have chosen Sphere.\nEnter side: ";
        cin >> side;
        vol = (4 * 3.14 * side * side * side) / 3;
        cout << "The volume of the cube is: "<<vol;
        break;
    }
        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
