/*
 * encoder.h
 *
 *  Created on: Oct 27, 2015
 *      Author: pekka
 */

#ifndef ENCODER_H_
#define ENCODER_H_
#include "configuration.h"
#define ENCODER_TIM TIM2
//#define ENCODER_TIM2_REMAP //with this TIM2 connected to PA15 and PB3

void initEncoder();
void getEncoderCount();


uint16_t findCurrentEncoderCommutationPos();
uint16_t findNextEncoderCommutationPos(int8_t dir);


extern volatile servoConfig s;

int32_t encoder_count;

uint16_t encoder_shaft_pos; //this is the shaft position as encoder counts
uint16_t encoder_full_rounds;
uint16_t encoder_commutation_pos; //this is shaft position from the beginning of current commuatiton sequence.

uint8_t encoder_commutation_table[4096]; //20 poles max //8096 PPR max at the moment.

uint16_t encoder_next_commutation_cnt_cw;
uint16_t encoder_next_commutation_cnt_ccw;




#endif /* ENCODER_H_ */
