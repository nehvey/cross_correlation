/*
 * norm_corr.h
 *
 *  Created on: 11.08.2018
 *      Author: fliess
 */

#ifndef NORM_CORR_H_
#define NORM_CORR_H_

#include "queue.h"
#include "datatypes.h"

#define AF_PUSH 2

#define CORR_THRESHOLD_PUSH 1.96

#define LOAD_TREND_SAMPLES 200

extern const float push[];
extern const int pushLenTotal;
extern volatile int pushLenMax;
extern volatile int pushSamples;

extern volatile float rpmMax;

extern volatile float loadTrend;

void initCorrelation(void);
bool crossCorrelate(Queue* q, float* arr, int arrLen, float corrTres, int sampleIndex);

#endif /* NORM_CORR_H_ */
