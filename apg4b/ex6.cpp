#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    string op;
    cin >> A >> op >> B;

    if(B!=0||(B==0&&op=="+")||(B==0&&op=="-")||(B==0&&op=="*")){
    if (op == "+") cout << A + B << endl;
    else if(op=="-") cout << A-B << endl;
    else if(op=="*") cout << A*B << endl;
    else if(op=="/") cout << A/B << endl;
    else if(op=="?"||op=="="||op=="!") cout << "error" << endl;
    }
    else cout << "error" <<endl;
}
