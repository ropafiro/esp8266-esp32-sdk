/*
 *  Copyright (c) 2019 Sinric. All rights reserved.
 *  Licensed under Creative Commons Attribution-Share Alike (CC BY-SA)
 *
 *  This file is part of the Sinric Pro (https://github.com/sinricpro/)
 */

#ifndef _SINRICLIGHT_H_
#define _SINRICLIGHT_H_

#include "SinricProDevice.h"
#include "Capabilities/SettingController.h"
#include "Capabilities/PowerStateController.h"
#include "Capabilities/BrightnessController.h"
#include "Capabilities/ColorController.h"
#include "Capabilities/ColorTemperatureController.h"

/**
 * @class SinricProLight
 * @brief Device to control a light 
 * @ingroup Devices
 * 
 * Supporting 
 * * On / Off
 * * Brightness (0..100)
 * * Color (RGB)
 * * Color temperature
 **/
class SinricProLight :  public SinricProDevice,
                        public SettingController<SinricProLight>,
                        public PowerStateController<SinricProLight>,
                        public BrightnessController<SinricProLight>,
                        public ColorController<SinricProLight>,
                        public ColorTemperatureController<SinricProLight> {
                        friend class SettingController<SinricProLight>;
                        friend class PowerStateController<SinricProLight>;
                        friend class BrightnessController<SinricProLight>;
                        friend class ColorController<SinricProLight>;
                        friend class ColorTemperatureController<SinricProLight>;
  public:
    SinricProLight(const DeviceId &deviceId) : SinricProDevice(deviceId, "LIGHT") {}
};

#endif

