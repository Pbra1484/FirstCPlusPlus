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
    cout << "your nam is " << name << " noff" << endl;
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

}
