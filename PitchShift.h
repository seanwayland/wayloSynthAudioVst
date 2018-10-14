//
//  PitchShift.h
//
//
//  Created by sean wayland on 10/12/18.
//

#ifndef PitchShift_h
#define PitchShift_h

void smbFft(float *fftBuffer, long fftFrameSize, long sign);
double smbAtan2(double x, double y);
void smbPitchShift(float pitchShift, long numSampsToProcess, long fftFrameSize, long osamp, float sampleRate, float *indata, float *outdata);

#endif /* PitchShift_h */

