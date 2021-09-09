#pragma once

#include "RangeFinder.h"
#include "RangeFinder_Backend.h"

class AP_RangeFinder_PX4FLOW : public AP_RangeFinder_Backend
{

public:
    // constructor
    // AP_RangeFinder_PX4FLOW(RangeFinder &ranger, uint8_t instance, RangeFinder::RangeFinder_State &_state);
    AP_RangeFinder_PX4FLOW(RangeFinder::RangeFinder_State &_state, AP_RangeFinder_Params &_params,uint8_t instance);

    // static detection function
    static bool detect(uint8_t instance);

    // update state
    void update(void) override;

protected:

    virtual MAV_DISTANCE_SENSOR _get_mav_distance_sensor_type() const override {
        return MAV_DISTANCE_SENSOR_UNKNOWN;
    }
};
