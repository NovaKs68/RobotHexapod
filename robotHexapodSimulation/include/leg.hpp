#ifndef DEF_ROBOT_HEXAPOD
#define DEF_ROBOT_HEXAPOD

#include <iostream>

class Leg
{
    public:
        Leg(float weightCoxa, 
        float weightFemur, 
        float weightTibia, 
        float lenghtCoxa, 
        float lenghtFemur, 
        float lenghtTibia);

    private:
        float weight_Coxa;
        float weight_Femur;
        float weight_Tibia;
        static float length_Coxa;
        static float length_Femur;
        static float length_Tibia;
        float angle_Hip_Horizontal = 0; // min -120 max 120
        float angle_Hip_Vertical = 0;
        float angle_Knee = 0;
        float positionStartLegX; // Relative to the robot position
        float positionStartLegY; // Relative to the robot position
        float positionStartLegZ; // Relative to the robot position
        float positionEndLegX;
        float positionEnfLegY;
        float positionEndLegZ;
};

#endif // DEF_ROBOT_HEXAPOD