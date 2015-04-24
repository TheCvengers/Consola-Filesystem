################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Consola\ FileSystem.c 

OBJS += \
./src/Consola\ FileSystem.o 

C_DEPS += \
./src/Consola\ FileSystem.d 


# Each subdirectory must supply rules for building sources it contributes
src/Consola\ FileSystem.o: ../src/Consola\ FileSystem.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Consola FileSystem.d" -MT"src/Consola\ FileSystem.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


