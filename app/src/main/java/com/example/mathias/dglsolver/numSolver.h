//
// Created by mathias on 12.09.15.
//

#ifndef DGLSOLVER_NUMSOLVER_H
#define DGLSOLVER_NUMSOLVER_H


class numSolver {
private:
    int _stepSize;
    double _bounds[2];
    double **solution;

public:
    numSolver(int _stepSize, double _bounds[2]);
    ~numSolver();
    double solver(int ind);
    double rungeKutta();
    double implicitEuler();
    double explicitEuler();
};


#endif //DGLSOLVER_NUMSOLVER_H
