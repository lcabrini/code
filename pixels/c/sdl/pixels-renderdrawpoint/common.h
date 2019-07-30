#ifndef COMMON_H
#define COMMON_H

#define RUNNING 1
#define CLEAR 2
#define RED_FILTER 4
#define GREEN_FILTER 8
#define BLUE_FILTER 16

#define MIN_SPEED 10
#define MAX_SPEED 100
#define DEFAULT_SPEED MIN_SPEED

#define red flags & RED_FILTER
#define green flags & GREEN_FILTER
#define blue flags & BLUE_FILTER
#define running flags & RUNNING
#define clear flags & CLEAR

unsigned char flags;
unsigned char speed;

#endif /* COMMON_H */
