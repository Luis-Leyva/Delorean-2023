// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Chassis.h"

#include <frc/trajectory/constraint/CentripetalAccelerationConstraint.h>
#include <iostream>

Chassis::Chassis() {
    LeftSlave.Follow(LeftMaster);
    RightSlave.Follow(RightMaster);

    rightMaster.SetInverted(InvertType::InvertMotorOutput);     //PENDIENTE
    rightSlave1.SetInverted(InvertType::InvertMotorOutput);     //PENDIENTE
    rightSlave2.SetInverted(InvertType::InvertMotorOutput);     //PENDIENTE

    LeftMaster.ConfigSupplyCurrentLimit(SupplyCurrentLimitConfiguration(true, 30, 0, 1));
    RightMaster.ConfigSupplyCurrentLimit(SupplyCurrentLimitConfiguration(true, 30, 0, 1));

    
}
    
}

// This method will be called once per scheduler run
void Chassis::Periodic() {}
