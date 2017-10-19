/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Account.h"

using namespace std;


int main() {
    Account a1;
    a1.Deposit(90);
    for(auto s:a1.Report()){
        cout << s << endl;
    }
}