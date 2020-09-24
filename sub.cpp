#include "sub.hpp"
using namespace std;

double Sub::evaluate_(Base* x, Base* y) {
        return x ->evaluate() - y ->evaluate();
}

string Sub::stringify() {
        return x1 ->stringify() + " - " + y1->stringify();
}

