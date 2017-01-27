//
//  Controller.cpp
//  FirstCPlusPlus
//
//  Created by Brashear, Patrick on 1/23/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include <iostream>
#include "Controller.h"

using namespace std;

void Controller :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * ( 7868234);
    
}

void Controller :: start()
{
    
    cout << "mosh" << endl;
    this->somthing();
    
}
void Controller :: somthing()
{
    cout << "sothing" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "type in your name" << endl;
    string name;
    cin.ignore();
    cin >> name;
    cout << "youtxjhbjkmns " << name << " nobtcdbf" << endl;
    cin.ignore();
    cin >> name;
    cout << name << endl;
    cout << "thype name and age" << endl;
    cin.ignore();
    cin >> name >> age;
    cout << " you tuped " << name << " and " << age << endl;
    cout << "Type in full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;

    
    int myNumber = 9;
    cout << myNumber << endl;
    useNumbers(myNumber);
    cout << myNumber << endl;
    
    int * numberPointer = &myNumber;
    
    cout << "Changing with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "number changed: " << myNumber << endl;
    
    int ** pointer2 = &numberPointer;
    
    pointer2 =
}

void Controller :: useNumbers(int suppliedNumber)
{
    cout << "the number is: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 32849) /34;
    cout << "It is now: " << suppliedNumber << endl;
}

int Controller :: impactNumber()
{
    return 775;
}
