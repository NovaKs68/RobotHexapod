#ifndef DEF_ROBOT_HEXAPOD
#define DEF_ROBOT_HEXAPOD

#include <iostream>
#include "leg.hpp"

class RobotHexapod
{
    public:
        // RobotHexapod(
        //     const float widthBody = 10, 
        //     const float lenghtBody = 20, 
        //     const float heightBody = 5.3,
        //     float xLeg1Leg3RelativeToBodyPosition = 4.7295,
        //     float xLeg4Leg6RelativeToBodyPosition = -4.7295,
        //     float xLeg2RelativeToBodyPosition = 7.532,
        //     float xLeg5RelativeToBodyPosition = -7.532,
        //     float yAllLegsRelativeToBodyPosition = 0,
        //     float zLeg1Leg6RelativeToBodyPosition = -9.7295,
        //     float zLeg2Leg5RelativeToBodyPosition = 0,
        //     float zLe3Leg4RelativeToBodyPosition = 9.7295,
        //     float lenghtCoxa = 6,
        //     float lenghtFemur = 8,
        //     float lenghtTibia = 14,
        //     float angleLeg1 = 45, // Angles are clockwise
        //     float angleLeg2 = 90,
        //     float angleLeg3 = 135,
        //     float angleLeg4 = 225,
        //     float angleLeg5 = 270,
        //     float angleLeg6 = 315
        //     );
            RobotHexapod(
            float widthBody,
            float lenghtBody,
            float heightBody,
            float weightBody,
            float xLeg1Leg3RelativeToBodyPosition,
            float xLeg4Leg6RelativeToBodyPosition,
            float xLeg2RelativeToBodyPosition,
            float xLeg5RelativeToBodyPosition,
            float yAllLegsRelativeToBodyPosition,
            float zLeg1Leg6RelativeToBodyPosition,
            float zLeg2Leg5RelativeToBodyPosition,
            float zLe3Leg4RelativeToBodyPosition,
            float lenghtCoxa,
            float lenghtFemur,
            float lenghtTibia,
            float angleLeg1, // Angles are clockwise
            float angleLeg2,
            float angleLeg3,
            float angleLeg4,
            float angleLeg5,
            float angleLeg6
            );
        //    RobotHexapod(float, float, float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float);
    private:
        const float a_weightBody;
        const float a_widthBody;
        const float a_lenghtBody;
        const float a_heightBody;
        float a_positionRobotHexapodX = 0;
        float a_positionRobotHexapodY = 0;
        float a_positionRobotHexapodZ = 0;
        const float a_xLeg1Leg3RelativeToBodyPosition;
        const float a_xLeg4Leg6RelativeToBodyPosition;
        const float a_xLeg2RelativeToBodyPosition;
        const float a_xLeg5RelativeToBodyPosition;
        const float a_yAllLegsRelativeToBodyPosition;
        const float a_zLeg1Leg6RelativeToBodyPosition;
        const float a_zLeg2Leg5RelativeToBodyPosition;
        const float a_zLeg3Leg4RelativeToBodyPosition;
        const float a_angleLeg1;
        const float a_angleLeg2;
        const float a_angleLeg3;
        const float a_angleLeg4;
        const float a_angleLeg5;
        const float a_angleLeg6;
        // Leg Leg1;
        // Leg Leg2;
        // Leg Leg3;
        // Leg Leg4;
        // Leg Leg5;
        // Leg Leg6;
};

#endif // DEF_ROBOT_HEXAPOD