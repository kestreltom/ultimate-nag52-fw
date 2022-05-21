#ifndef __PRESSURE_MANAGER_H_
#define __PRESSURE_MANAGER_H_

#include <common_structs.h>
#include "profiles.h"
#include "adaptation/adapt_map.h"
#include <gearbox_config.h>
#include "nvs/eeprom_config.h"

/*
    Large NAG W5A580 gearbox pressure maps (Defaults)
*/

// 1 -> 2 upshift
/*
const pressure_map spc_1_2_large = {520, 500, 480, 460, 440, 420, 400, 390, 380, 370, 350};
const pressure_map mpc_1_2_large = {550, 530, 510, 490, 460, 440, 420, 400, 380, 370, 350};

// 2 -> 3 upshift
const pressure_map spc_2_3_large = {450, 430, 420, 400, 380, 360, 340, 320, 300, 280, 260};
const pressure_map mpc_2_3_large = {450, 430, 420, 400, 380, 360, 340, 320, 300, 280, 260};


// 3 -> 4 upshift
const pressure_map spc_3_4_large = {380, 370, 360, 350, 340, 330, 320, 300, 280, 260, 240};
const pressure_map mpc_3_4_large = {400, 390, 380, 370, 360, 350, 340, 330, 300, 280, 260};

 
// 4 -> 5 upshift
const pressure_map spc_4_5_large = {450, 440, 430, 420, 410, 400, 390, 380, 360, 340, 300};
const pressure_map mpc_4_5_large = {450, 440, 430, 420, 410, 400, 390, 380, 360, 340, 300};


// 2 -> 1 downshift
const pressure_map spc_2_1_large = {530, 510, 500, 490, 480, 475, 470, 460, 450, 420, 400};
const pressure_map mpc_2_1_large = {530, 510, 500, 490, 480, 475, 470, 460, 450, 420, 400};

// 3 -> 2 downshift
const pressure_map spc_3_2_large = {400, 390, 380, 360, 350, 340, 330, 320, 310, 300, 300};
const pressure_map mpc_3_2_large = {400, 390, 380, 360, 350, 340, 330, 320, 310, 300, 300};

// 4 -> 3 downshift
const pressure_map spc_4_3_large = {420, 415, 410, 400, 390, 380, 370, 350, 330, 310, 290};
const pressure_map mpc_4_3_large = {420, 415, 410, 400, 390, 380, 370, 350, 330, 310, 290};

// 5 -> 4 downshift
const pressure_map spc_5_4_large = {430, 420, 395, 385, 385, 370, 360, 360, 350, 340, 325};
const pressure_map mpc_5_4_large = {430, 420, 395, 385, 385, 370, 360, 360, 350, 340, 325};
*/
const pressure_map spc_1_2_large = {550, 540, 530, 520, 510, 500, 490, 480, 470, 460, 450};
const pressure_map mpc_1_2_large = {550, 540, 530, 520, 510, 500, 490, 480, 470, 460, 450};

// 2 -> 3 upshift
const pressure_map spc_2_3_large = {490, 480, 470, 460, 450, 445, 440, 430, 420, 410, 400};
const pressure_map mpc_2_3_large = {490, 480, 470, 460, 450, 445, 440, 430, 420, 410, 400};

// 3 -> 4 upshift
const pressure_map spc_3_4_large = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300}; // Pedal position
const pressure_map mpc_3_4_large = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300}; // Torque 0-100% of gearbox rating

//const pressure_map spc_3_4_small = {390, 380, 370, 350, 330, 310, 300, 290, 280, 270, 260};
//const pressure_map mpc_3_4_small = {390, 380, 370, 350, 330, 310, 300, 290, 280, 270, 260};

// 4 -> 5 upshift
const pressure_map spc_4_5_large = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300};
const pressure_map mpc_4_5_large = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300};

// 2 -> 1 downshift
const pressure_map spc_2_1_large = {500, 490, 480, 470, 460, 450, 440, 430, 420, 410, 400};
const pressure_map mpc_2_1_large = {500, 490, 480, 470, 460, 450, 440, 430, 420, 410, 400};

// 3 -> 2 downshift
const pressure_map spc_3_2_large = {480, 470, 460, 450, 440, 430, 420, 410, 400, 380, 360};
const pressure_map mpc_3_2_large = {480, 470, 460, 450, 440, 430, 420, 410, 400, 380, 360};

// 4 -> 3 downshift
const pressure_map spc_4_3_large = {480, 470, 460, 450, 440, 430, 420, 410, 400, 390, 380};
const pressure_map mpc_4_3_large = {480, 470, 460, 450, 440, 430, 420, 410, 400, 390, 380};

// 5 -> 4 downshift
const pressure_map spc_5_4_large = {500, 480, 460, 440, 420, 400, 360, 360, 350, 340, 325};
const pressure_map mpc_5_4_large = {500, 480, 460, 440, 420, 400, 360, 360, 350, 340, 325};

/*
    Small NAG W5A330 gearbox pressure maps (Defaults)
*/

// 1 -> 2 upshift
const pressure_map spc_1_2_small = {550, 540, 530, 520, 510, 500, 490, 480, 470, 460, 450};
const pressure_map mpc_1_2_small = {550, 540, 530, 520, 510, 500, 490, 480, 470, 460, 450};

// 2 -> 3 upshift
const pressure_map spc_2_3_small = {490, 480, 470, 460, 450, 445, 440, 430, 420, 410, 400};
const pressure_map mpc_2_3_small = {490, 480, 470, 460, 450, 445, 440, 430, 420, 410, 400};

// 3 -> 4 upshift
const pressure_map spc_3_4_small = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300}; // Pedal position
const pressure_map mpc_3_4_small = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300}; // Torque 0-100% of gearbox rating

//const pressure_map spc_3_4_small = {390, 380, 370, 350, 330, 310, 300, 290, 280, 270, 260};
//const pressure_map mpc_3_4_small = {390, 380, 370, 350, 330, 310, 300, 290, 280, 270, 260};

// 4 -> 5 upshift
const pressure_map spc_4_5_small = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300};
const pressure_map mpc_4_5_small = {500, 480, 460, 440, 420, 400, 380, 360, 340, 320, 300};

// 2 -> 1 downshift
const pressure_map spc_2_1_small = {500, 490, 480, 470, 460, 450, 440, 430, 420, 410, 400};
const pressure_map mpc_2_1_small = {500, 490, 480, 470, 460, 450, 440, 430, 420, 410, 400};

// 3 -> 2 downshift
const pressure_map spc_3_2_small = {480, 470, 460, 450, 440, 430, 420, 410, 400, 380, 360};
const pressure_map mpc_3_2_small = {480, 470, 460, 450, 440, 430, 420, 410, 400, 380, 360};

// 4 -> 3 downshift
const pressure_map spc_4_3_small = {480, 470, 460, 450, 440, 430, 420, 410, 400, 390, 380};
const pressure_map mpc_4_3_small = {480, 470, 460, 450, 440, 430, 420, 410, 400, 390, 380};

// 5 -> 4 downshift
const pressure_map spc_5_4_small = {500, 480, 460, 440, 420, 400, 360, 360, 350, 340, 325};
const pressure_map mpc_5_4_small = {500, 480, 460, 440, 420, 400, 360, 360, 350, 340, 325};


// These values are autogenerated by the compiler. Please do NOT modify!
// The gearbox uses these values to work out when to stop torque cutting and monitoring shift progress

#define SHIFT_IN_PROGRESS_THRESH 25 // 25%

typedef struct {
    uint16_t targ_pwm_percent;
    uint16_t curr_pwm_percent;
    float ramp_speed;
    bool write_pwm;
} PSolenoidData;

typedef enum {
    MPC,
    SPC,
    TCC
} PSolenoidType;

/*
const float pressure_temp_normalizer[17] = {
    0.7, 0.72, 0.75, 0.78, 0.84, // -40-0C (0-40)
    0.89, 0.93, 0.96, 0.98, 0.99, // 10-50C (50-90)
    1, 1, 1, 1, 1, 1, 1.01 //60C-120C (100-160) - NOTE. Keep 60-110C as '1.0' to allow adaptation!
};
*/

const float ramp_speed_temp_normalizer[17] = {
    1.2, 1.18, 1.16, 1.14, 1.12, // -40-0C (0-40)
    1.1, 1.08, 1.06, 1.04, 1.02, // 10-50C (50-90)
    1, 1, 1, 1, 1, 1, 0.99 //60C-120C (100-160) - NOTE. Keep 60-110C as '1.0' to allow adaptation!
};

// 0, 1k, 2k, 3k, 4k, 5k, 6k, 7k, 8k RPM (SPC Ramp speed multiplier)
const rpm_modifier_map rpm_normalizer = {0.98, 0.99, 1.00, 1.02, 1.04, 1.06, 1.08, 1.1, 1.12};

// 0 -> 100% rated torque
const pressure_map working_norm_pressure_p = {490, 460, 450, 440, 430, 420, 410, 400, 390, 380, 370}; // Park or N
const pressure_map working_norm_pressure_r = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // R1 or R2
const pressure_map working_norm_pressure_1 = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // 1
const pressure_map working_norm_pressure_2 = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // 2
const pressure_map working_norm_pressure_3 = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // 3
const pressure_map working_norm_pressure_4 = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // 4
const pressure_map working_norm_pressure_5 = {460, 450, 430, 400, 370, 340, 310, 290, 260, 230, 200}; // 5


// RPM vs MPC pressure when driving (0-8000RPM)
//const uint16_t mpc_hold_pressure[9] = {300, 320, 340, 360, 370, 380, 390, 400, 400};

typedef void (*P_RAMP_FUNC)(float, float);

class PressureManager {

public:

    void set_target_mpc_percent(uint16_t targ, int speed);
    void set_target_spc_percent(uint16_t targ, int speed);
    void set_target_tcc_percent(uint16_t targ, int speed);
    void set_spc_compensation_factor(float amount);

    PressureManager(SensorData* sensor_ptr);

    void update(GearboxGear curr_gear, GearboxGear targ_gear);

    /**
     * @brief Get the shift data object for the requested shift
     * 
     * @param shift_firmness Firmness of the shift (higher = firmer shift)
     * @param shift_speed Speed of the shift (higer = faster shift)
     * @return ShiftData 
     */
    ShiftData get_shift_data(SensorData* sensors, ProfileGearChange shift_request, ShiftCharacteristics chars, int max_rated_torque);

    void perform_adaptation(SensorData* sensors, ProfileGearChange change, ShiftResponse response, bool upshift) {
        if (this->adapt_map != nullptr) { 
            this->adapt_map->perform_adaptation(sensors, change, response, upshift);
        }
    }

    void save() {
        if (this->adapt_map != nullptr) { 
            this->adapt_map->save(); 
        }
    }

    uint16_t find_working_mpc_pressure(GearboxGear curr_g, SensorData* sensors, int max_rated_torque);

    float get_tcc_temp_multiplier(int atf_temp);
private:
    bool abort = false;
    SensorData* sensor_data;
    AdaptationMap* adapt_map;
    PressureMgrData map_data;

    PSolenoidData tcc;
    PSolenoidData mpc;
    PSolenoidData spc;
    float spc_compensation_amount = 1.0;

};

#endif