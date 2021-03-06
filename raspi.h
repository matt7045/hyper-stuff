#include <stdbool.h>

enum state{Idle, Test};

//When called, pulls data from wireless link and updates values
//Returns true if successful
bool wirelessDataReciever(void){

}

//Filters control input and recieved data
bool dataProcessing(void){

}

//Calls functions to pull data from mega/motor controller/IMU
//Returns true if successful
bool dataReciever(void) {
	return imuReciever() && megaReciever();
}

//Recieves data from IMU
//Returns true if successful
bool imuReciever(void) {

}

//Recieves data from arduino Mega
//Returns true if successful
bool megaReciever(void) {

}

//Uses current data values and sets state
bool stateChange(void) {

}

//sends control signal to motor controller and Mega
//calls the 2 other methods
bool controlDispatch(void) {
	return megaControlDispatch();
}

//sends control signal to motor controller
bool megaControlDispatch(void) {

}

//sends data in a packet to PC
bool wirelessDataForwarding(void){

}
