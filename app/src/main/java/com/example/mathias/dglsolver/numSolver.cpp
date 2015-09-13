//
// Created by Mathias Duwe on 12.09.15.
//

#include "numSolver.h"


//constructor
numSolver::numSolver(int _stepSize, double _bounds[]) {
    _stepSize = _stepSize;
    _bounds[1] = _bounds[1];
    _bounds[2] = _bounds[2];
}
numSolver::~numSolver() {
delete _stepSize;
delete[] _bounds;
}
double numSolver::solver(int ind) {

    switch (ind){
    case 1:
        return explicitEuler();
    case 2:
        return implicitEuler();
    case 3:
        return rungeKutta();
    }
}

double numSolver::explicitEuler() {

    return 1.1;
}
double numSolver::implicitEuler() {

    return 1.2;
}
double numSolver::rungeKutta() {

    return 1.3;
}