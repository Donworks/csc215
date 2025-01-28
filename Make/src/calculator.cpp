#include <iostream>
#include <string>
using namespace std;

enum OpType {ADD, SUBTRACT, MULTIPLY, STOP, ILLEGAL_OP;

 OpType string_to_op(const string &s) {
    if (s == "+") return ADD;
    if (s == "-") return SUBTRACT;
    if (s == "*") return MULTIPLY;
    if (s == "=") return STOP;
    return ILLEGAL_OP;
}

    OPType get_op() {
    string s;

Optype op;
    do {
	cout << "Enter + - * (or = to leave prgram);
	cin >> s;
    } While ((op = string_to_op(s)) == ILLEGAL_OP);


    return op;
}

int main() {
    int accumulator = 0;
    int current;
    Optype op = ADD;

    while (op != STOP) {
	cout << "Enter desired value:";
	cin >> Current;
	switch (op) {
    	    case ADD:
		accumulator += current;
		break;
	    case SUBTRACT:
		accumulator -= current;
		break;
	    case MULTIPLY:
		accumulator *= current;
		break;
	   default:
		cerr << "99 percent user error" << endl;
	}
	cout << "--> " << acumulator << endl;
	op = get_op();
    }
    cout << "The Desired Total:" << acumulator << endl;

    return 0;
}



   
