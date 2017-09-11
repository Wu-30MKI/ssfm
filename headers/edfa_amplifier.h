#ifndef EDFA_AMPLIFIER_H_
#define EDFA_AMPLIFIER_H_

#include "signal.h"
const double boltzmann = 1.38064852e-23;

class EdfaAmplifier {
    double gain;
    double noise_factor;
    double bandwidth;

  public:
    EdfaAmplifier();
    void setGain();
    void setNoiseFactor();
    void setNoiseFigure();
    void setBandwidth();

    void amplify(Signal& field) const;
};

#endif  // EDFA_AMPLIFIER_H_
