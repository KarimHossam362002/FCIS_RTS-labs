#include "FreeRTOS.h"
#include "task.h"
#include <avr/io.h>

// Task handle for pedestrian control
TaskHandle_t xPedestrianHandle;

// Function prototypes
void vVehicleLightTask(void *pvParameters);
void vPedestrianLightTask(void *pvParameters);

int main(void)
{
	DDRB = 0xFF; // All PORTB pins as outputs for LEDs

	// Create tasks
	xTaskCreate(vVehicleLightTask, "VehicleLights", 256, NULL, 2, NULL);
	xTaskCreate(vPedestrianLightTask, "PedLights", 256, NULL, 1, &xPedestrianHandle);

	// Start scheduler
	vTaskStartScheduler();

	for (;;);
	return 0;
}

// ===================================================
// Vehicle Light Task
// ===================================================
void vVehicleLightTask(void *pvParameters)
{
	TickType_t xLastWakeTime = xTaskGetTickCount();

	while (1)
	{
		// ===== VEHICLE GREEN PHASE =====
		PORTB |= (1 << PB0);   // Vehicle GREEN ON
		PORTB &= ~(1 << PB1);  // Vehicle RED OFF

		PORTB |= (1 << PB3);   // Pedestrian RED ON
		PORTB &= ~(1 << PB2);  // Pedestrian GREEN OFF

		vTaskSuspend(xPedestrianHandle);  
		vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(3000));

		// ===== VEHICLE RED PHASE =====
		PORTB &= ~(1 << PB0);  
		PORTB |= (1 << PB1);  

		PORTB &= ~(1 << PB3);  
		PORTB |= (1 << PB2);   

		vTaskResume(xPedestrianHandle); 
		vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(2000)); 
	}
}

// ===================================================
// Pedestrian Light Task
// ===================================================
void vPedestrianLightTask(void *pvParameters)
{
	TickType_t xLastWakeTime = xTaskGetTickCount();

	while (1)
	{
		PORTB ^= (1 << PB2);  
		vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(500)); 
	}
}
