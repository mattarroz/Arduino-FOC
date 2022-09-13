#include "DigitalBEMFSensor.h"

DigitalBEMFSensor::DigitalBEMFSensor(int phaseAPin, int phaseBPin, int phaseCPin, int polePairs) :
  HallSensor(phaseAPin, phaseBPin, phaseCPin, polePairs) {}

float DigitalBEMFSensor::getMechanicalAngle() {
  return ((float)((electric_rotations * 6 + electric_sector) % cpr) / (float)cpr) * _2PI  + BEMF_OFFSET;
}

float DigitalBEMFSensor::getAngle() {
  return ((float)(electric_rotations * 6 + electric_sector) / (float)cpr) * _2PI + BEMF_OFFSET;
}

double DigitalBEMFSensor::getPreciseAngle() {
  return ((double)(electric_rotations * 6 + electric_sector) / (double)cpr) * (double)_2PI + BEMF_OFFSET;
}

void DigitalBEMFSensor::setInterruptMaskHandler(void (*_interruptMaskHandler)(int,int,int)) {
  interruptMaskHandler = _interruptMaskHandler; 
}

void DigitalBEMFSensor::setPhaseState(int phA, int phB, int phC) {
  interruptMaskHandler(phA, phB, phC);
}

