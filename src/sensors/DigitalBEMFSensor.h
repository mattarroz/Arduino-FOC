#ifndef DIGITAL_BEMF_SENSOR_LIB_H
#define DIGITAL_BEMF_SENSOR_LIB_H



#include "HallSensor.h"

class DigitalBEMFSensor: public HallSensor {
public:
  DigitalBEMFSensor(int phaseAPin, int phaseBPin, int phaseCPin, int polePairs);
  float getSensorAngle() override;
  void setPhaseState(int phA, int phB, int phC) override;
  float getMechanicalAngle() override;
  float getAngle() override;
  double getPreciseAngle() override;
  void setInterruptMaskHandler(void (*_interruptsMaskHandler)(int,int,int) = nullptr);

private:
  static constexpr float BEMF_OFFSET = 30/360 * _2PI;

  void (*interruptMaskHandler)(int phA, int phB, int phC) = nullptr;
};

#endif

