#include "dsp_algorithm.h"
#include <cassert>
#include <iostream>

void testProcessSignal() {
    DSPAlgorithm dsp;
    std::vector<double> inputSignal = {1.0, 4.0, 9.0, 16.0};
    std::vector<double> expectedOutput = {1.0, 2.0, 3.0, 4.0};

    std::vector<double> outputSignal = dsp.processSignal(inputSignal);

    assert(outputSignal == expectedOutput);
    std::cout << "Test passed: processSignal" << std::endl;
}

int main() {
    std::cout << "Running tests..." << std::endl;
    testProcessSignal();
    return 0;
}
