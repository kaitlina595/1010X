#ifndef AUTOFUNCTIONS_H_
#define AUTOFUNCTIONS_H_


#define FORWARD 1
#define BACKWARDS -1
#define CLOCKWISE 1
#define COUNTERCLOCKWISE -1

void drive_encoder(int direction, int target, int timeout, int maxpower, int minpower, float kdrift_encoder, float kaccel, float kdeaccel);

void drive_gyro(int direction, int target, int timeout, int maxpower, int minpower, float kdrift_gyro, float kaccel, float kdeaccel);

void nolag(int demo_tics, int demo_movepower, int demo_holdpower);

void turn_gyro(int direction, int target, int timeout, int maxpower, int minpower, float kaccel, float kdeaccel);

#endif
