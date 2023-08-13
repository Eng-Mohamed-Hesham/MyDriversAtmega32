################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/BCD2SSD_Program.c \
../src/DIO_Program.c \
../src/EEPROM_program.c \
../src/EXTI_Program.c \
../src/GIE_Program.c \
../src/LED_Program.c \
../src/SSD_program.c \
../src/TWI_program.c \
../src/app.c 

OBJS += \
./src/BCD2SSD_Program.o \
./src/DIO_Program.o \
./src/EEPROM_program.o \
./src/EXTI_Program.o \
./src/GIE_Program.o \
./src/LED_Program.o \
./src/SSD_program.o \
./src/TWI_program.o \
./src/app.o 

C_DEPS += \
./src/BCD2SSD_Program.d \
./src/DIO_Program.d \
./src/EEPROM_program.d \
./src/EXTI_Program.d \
./src/GIE_Program.d \
./src/LED_Program.d \
./src/SSD_program.d \
./src/TWI_program.d \
./src/app.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


