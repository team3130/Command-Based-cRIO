################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/ExampleSubsystem.cpp \
../src/Subsystems/WiffleCannon.cpp 

OBJS += \
./src/Subsystems/ExampleSubsystem.o \
./src/Subsystems/WiffleCannon.o 

CPP_DEPS += \
./src/Subsystems/ExampleSubsystem.d \
./src/Subsystems/WiffleCannon.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Thunder cRIO Tools C++ Compiler'
	powerpc-wrs-vxworks-g++ -DCPU=PPC603 -DTOOL_FAMILY=gnu -DTOOL=gnu -D_WRS_KERNEL -I"C:\Users\Colin\workspace\Command Based cRIO\include" -I"C:\Program Files (x86)\FRC_Toolchain\mingw\powerpc-wrs-vxworks\wind_base\/../include/WPILib" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=603 -mstrict-align -mlongcall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


