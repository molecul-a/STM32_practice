################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/adxl345.c \
../Src/i2c.c \
../Src/main.c \
../Src/spi.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/uart.c 

OBJS += \
./Src/adxl345.o \
./Src/i2c.o \
./Src/main.o \
./Src/spi.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/uart.o 

C_DEPS += \
./Src/adxl345.d \
./Src/i2c.d \
./Src/main.d \
./Src/spi.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Src/adxl345.o: ../Src/adxl345.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/adxl345.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/i2c.o: ../Src/i2c.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/i2c.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/spi.o: ../Src/spi.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/spi.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/uart.o: ../Src/uart.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F411RETx -DDEBUG -DSTM32F411xE -c -I../Inc -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Israel/Documents/STM32F4-BareMetal_Workspace/22_SPI_adxl346/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/uart.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

