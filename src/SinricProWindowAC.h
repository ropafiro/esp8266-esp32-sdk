/*
 *  Copyright (c) 2019 Sinric. All rights reserved.
 *  Licensed under Creative Commons Attribution-Share Alike (CC BY-SA)
 *
 *  This file is part of the Sinric Pro (https://github.com/sinricpro/)
 */

#ifndef _SINRICWINDOWAC_H_
#define _SINRICWINDOWAC_H_

#include "SinricProDevice.h"
#include "Capabilities/SettingController.h"
#include "Capabilities/PowerStateController.h"
#include "Capabilities/RangeController.h"
#include "Capabilities/ThermostatController.h"

/**
 * @class SinricProWindowAC
 * @brief Device to control Window Air Conditioner 
 * @ingroup Devices
 * 
 * Support
 * * Set / adjust target temperature
 * * Set mode `AUTO`, `COOL`, `HEAT`
 * * Set range value 
 * * Report target temperature
 * * Report actual temperature
 **/

class SinricProWindowAC :  public SinricProDevice,
                           public SettingController<SinricProWindowAC>,
                           public PowerStateController<SinricProWindowAC>,
                           public RangeController<SinricProWindowAC>,
                           public ThermostatController<SinricProWindowAC> {
                           friend class SettingController<SinricProWindowAC>;
                           friend class PowerStateController<SinricProWindowAC>;
                           friend class RangeController<SinricProWindowAC>;
                           friend class ThermostatController<SinricProWindowAC>;
  public:
	  SinricProWindowAC(const DeviceId &deviceId) : SinricProDevice(deviceId, "AC_UNIT") {}
};

#endif