#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

I2C_HandleTypeDef hi2c1
// #define GYRO_SENSOR_ADDRESS  // Putactuial I2C address

unit8_t gyroData[10]
void SystemClock_Config(void);
void Error_Handler(void);

void Gyroscope_Init() {
  // Initialize the HAL Library
  HAL_Init();

  // Configure the system clock
  SystemClock_Config();

  // Initialize the I2C peripheral
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;  // Replace with your sensor's required speed
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK) {
    Error_Handler();
  }
}

void Gyroscope_ReadData() {
  // Read gyroscope data from the sensor
  if (HAL_I2C_Mem_Read(&hi2c1, GYRO_SENSOR_ADDRESS, 0x00, I2C_MEMADD_SIZE_8BIT, gyroData, sizeof(gyroData), HAL_MAX_DELAY) != HAL_OK) {
    Error_Handler();
  }

  // Process and use the gyroscope data as needed
  
}

int main(void){
    // Initializing Gyroscope and I2C comm.
    Gyroscope_Init();

    while(1){
        Gyroscope_ReadData();

        HAL_Delay(100)
    }
}

void SystemClock_Config(void) {
  // Configure the system clock (typically done in the HAL configuration files)
  // ...
}

void Error_Handler(void) {
  // Handle errors (e.g., by entering an error state or logging the error)
  // ...
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line) {
  // User-defined assert_failed function
  // ...
}
#endif

