#pragma once

//#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>
#include <frc/DoubleSolenoid.h>

class Chassis : public frc2::SubsystemBase {
 public:
  Chassis();
  void setLeftMotor(double voltage){
    LeftSlave.follow(LeftMaster);
    LeftMaster.SetVoltage(units::volt_t(voltage));
  }

  void setRightMotor(double voltage){
    RightSlave.follow(RightMaster);
    RightMaster.SetVoltage(units::volt_t(voltage*-1));
  }

  void Periodic() override;

 private:
  TalonSRX LeftMaster {1};
  WPI_VictorSRX LeftSlave {2};
  WPI_TalonSRX RightMaster {3};
  WPI_VictorSPX RightSlave {4};
  
};
