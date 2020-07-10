/*
 ============================================================================
 Name        : enum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include<stdlib.h>





enum TrafficLight {

	RED, YELLOW, GREEN

};



int main() {



	enum TrafficLight signal;



	signal = RED;



	printf("Red = %d, Yellow = %d, Green = %d\n\n", RED, YELLOW, GREEN);



	switch (signal) {



		case RED:

			puts("Stop");

		break;



		case YELLOW:

			puts("Proceed with caution");

		break;



		case GREEN:

			puts("Go");

		break;



		default:

			puts("No color found");

	}



	return 0;

}
