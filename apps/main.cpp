// robotHexapod.cpp : Ce fichier contient la fonction 'main'.

#include <iostream>
#include "cmdServo.hpp"
#include "body.hpp"
#include "robotOverallMove.hpp"
#include <pthread.h>
#include <fcntl.h>   // Contient O_RDWR
#include <unistd.h>  // write(), read(), close()
#include <termios.h> // Pour paramétrer le port dont le baud rate
#include <thread>    // A mettre dans le body par la suite
// #include <chrono>

int main(int, char**)
{
    std::cout << "Debut du programme !" << std::endl;
    Body &body = Body::Instance();
    int i{0};
    // RobotOverallMove robot;
    // robot.moveStepsForward(2);
    while(i == 0)
    {
        std::cout << "Que veux-tu faire ?" << std::endl;
        std::cout << "1-Allonger" << std::endl;
        std::cout << "2-Se relever" << std::endl;
        std::cout << "3-Avancer" << std::endl;
        std::cout << "4-Reculer" << std::endl;
        std::cout << "5-Tourner à droite" << std::endl;
        std::cout << "6-Tourner à gauche" << std::endl;
        std::cout << "7-Stop" << std::endl;
        int a;
        std::cin >> a;
        switch(a) {
            case 1:
                body.bodyPosDown();
                break;
            case 2:
                body.bodyPosDownToPosReadyToWalk();
                break;
            case 3:
                body.walkLeft1();
                body.walkLeft2();
                body.walkLeft3();
                body.walkLeft4();
                body.walkLeft5();
                body.walkRight2();
                body.walkRight3();
                body.walkRight4();
                body.walkRight5();
                body.walkRight6();
                break;
            case 4:
                body.walkLeft1();
                body.walkBackLeft2();
                body.walkBackLeft3();
                body.walkBackLeft4();
                body.walkBackLeft5();
                body.walkBackRight2();
                body.walkBackRight3();
                body.walkBackRight4();
                body.walkBackRight5();
                body.walkBackRight6();
                break;
            case 5:
                body.walkLeft1();
                body.rotateLeft2(20);
                body.rotateLeft3(20);
                body.rotateLeft4(20);
                body.rotateLeft5();
                body.walkLeft6();
                break;
            case 6:
                body.walkRight1();
                body.rotateRight2(20);
                body.rotateRight3(20);
                body.rotateRight4(20);
                body.rotateRight5();
                body.walkRight6();
                break;
            case 7:
                i++;
                break;
            default:
                std::cout << "Ce n'est pas une commande !" << std::endl;
        }
    }

    // body.bodyPosReadyToWalk();
    // body.walkBackRight1();
    // body.walkBackRight2();
    // body.walkBackRight3();
    // body.walkBackRight4();
    // body.walkBackRight5();
    // body.walkBackRight6();
    // body.bodyPosReadyToWalk();
    // body.walkBackLeft1();
    // body.walkBackLeft2();
    // body.walkBackLeft3();
    // body.walkBackLeft4();
    // body.walkBackLeft5();
    // body.walkBackLeft6();

    // usleep(5000000);
    // for (int i{0}; i < 2; i++)
    // {
    //     body.bodyPosDown();
    //     body.bodyPosReadyToWalk();
    // }

    // body.walkLeft1();

    // for (int i{0}; i < 3; i++)
    // {
    //     body.walkLeft2();
    //     body.walkLeft3();
    //     body.walkLeft4();
    //     body.walkLeft5();
    //     body.walkRight2();
    //     body.walkRight3();
    //     body.walkRight4();
    //     body.walkRight5();
    // }
    
    // body.walkRight6();
    // body.bodyPosDown();
    //body.bodyPosReadyToWalk();
    // usleep(1000000);
    // body.walkRight1();
    // body.rotateRight2();
    // body.rotateRight3();
    // body.rotateRight4();
    // body.rotateRight5();
    // body.rotateRight6();
    // body.walkLeft1();
    // body.rotateLeft2();
    // body.rotateLeft3();
    // body.rotateLeft4();
    // body.rotateLeft5();
    // body.walkLeft6();

    //-------------------------
    //------- TEST BODY -------
    //-------------------------

    // auto leg1{RightFrontLeg()};
    // auto leg2{RightMiddleLeg()};
    // auto leg3{RightBackLeg()};
    // auto leg4{LeftBackLeg()};
    // auto leg5{LeftMiddleLeg()};
    // auto leg6{LeftFrontLeg()};

    // leg1.posDown();
    // leg2.posDown();
    // leg3.posDown();
    // leg4.posDown();
    // leg5.posDown();
    // leg6.posDown();
    // usleep(1000000);

    // leg1.posReadyToWalk();
    // leg2.posReadyToWalk();
    // leg3.posReadyToWalk();
    // leg4.posReadyToWalk();
    // leg5.posReadyToWalk();
    // leg6.posReadyToWalk();
    // usleep(300000);

    // leg1.posDown();
    // leg2.posDown();
    // leg3.posDown();
    // leg4.posDown();
    // leg5.posDown();
    // leg6.posDown();
    // usleep(300000);

    // leg1.posReadyToWalk();
    // leg2.posReadyToWalk();
    // leg3.posReadyToWalk();
    // leg4.posReadyToWalk();
    // leg5.posReadyToWalk();
    // leg6.posReadyToWalk();
    // usleep(10000000);

    //-------------------------
    //------- TEST LEGS -------
    //-------------------------

    //  auto servo16{Servo(16)};
    //  auto servo17{Servo(17)};
    //  auto servo18{Servo(18)};

    // servo16.WRITE_Servo_Angle(140,0);
    // servo17.WRITE_Servo_Angle(140,0);
    // servo18.WRITE_Servo_Angle(180,0);

    // auto leg1{Leg(1,2,3)};
    // auto leg2{Leg(4,5,6)};
    // auto leg3{Leg(7,8,9)};
    // usleep(80000);
    // auto leg4{LeftBackLeg()};
    // auto leg5{Leg(13,14,15)};
    // auto leg6{Leg(16,17,18)};
    // leg1.posDownWait();
    // leg2.posDownWait();
    // leg3.posDownWait();
    // leg4.posReadyToWalk();
    // leg5.posDownWait();
    // leg6.posDownWait();
    // leg1.start();

    // int result2 = servo2.READ_id();
    // servo2.WRITE_Servo_Angle(90,0);
    // int result1 = servo1.READ_id();
    //servo1.WRITE_Servo_Angle(0,3);
    //usleep(3000000);
    //servo1.WRITE_Servo_Angle(240,3);
    //usleep(3000000);
    //servo1.WRITE_Servo_Angle(0,3);

    //-------------------------
    //------ TEST SERVOS ------
    //-------------------------

    // auto servo1{Servo(1)};
    // auto servo2{Servo(2)};
    // auto servo3{Servo(3)};
    // auto servo4{Servo(4)};
    // auto servo5{Servo(5)};
    // auto servo6{Servo(6)};
    // auto servo7{Servo(7)};
    // auto servo8{Servo(8)};
    // auto servo9{Servo(9)};
    // auto servo10{Servo(10)};
    // auto servo11{Servo(11)};
    // auto servo12{Servo(12)};
    // auto servo13{Servo(13)};
    // auto servo14{Servo(14)};
    // auto servo15{Servo(15)};
    // auto servo16{Servo(16)};
    // auto servo17{Servo(17)};
    // auto servo18{Servo(18)};
    // auto servo254{Servo(254)};

    // Pour connaitre le temps que prends un COM d'un servo :

    // std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
    // int a = servo1.READ_Servo_Angle();
    // std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
    // int elapsed_seconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    // std::cout << "Result: " << a << ", elapsed time: " << elapsed_seconds << "microsec" << std::endl;

    // Pour tester tous les servos :

    // while(1)
    // {

    // int a = servo1.READ_Servo_Angle();
    // int b = servo2.READ_Servo_Angle();
    // int c = servo3.READ_Servo_Angle();
    // int d = servo4.READ_Servo_Angle();
    // int e = servo5.READ_Servo_Angle();
    // int f = servo6.READ_Servo_Angle();
    // int g = servo7.READ_Servo_Angle();
    // int h = servo8.READ_Servo_Angle();
    // int i = servo9.READ_Servo_Angle();
    // int j = servo10.READ_Servo_Angle();
    // int k = servo11.READ_Servo_Angle();
    // int l = servo12.READ_Servo_Angle();
    // int m = servo13.READ_Servo_Angle();
    // int n = servo14.READ_Servo_Angle();
    // int o = servo15.READ_Servo_Angle();
    // int p = servo16.READ_Servo_Angle();
    // int q = servo17.READ_Servo_Angle();
    // int r = servo18.READ_Servo_Angle();

    // std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j << " " << k << " " << l << " " << m << " " << n << " " << o << " " << p << " " << q << " " << r << std::endl;
    // }

    // POS ADJUST TIBIA

    // servo1.WRITE_Servo_Angle(120,0);
    // servo2.WRITE_Servo_Angle(30,0);
    // servo3.WRITE_Servo_Angle(90,0);
    // servo4.WRITE_Servo_Angle(120,0);
    // servo5.WRITE_Servo_Angle(30,0);
    // servo6.WRITE_Servo_Angle(90,0);
    // servo7.WRITE_Servo_Angle(120,0);
    // servo8.WRITE_Servo_Angle(30,0);
    // servo9.WRITE_Servo_Angle(90,0);
    // servo10.WRITE_Servo_Angle(120,0);
    // servo11.WRITE_Servo_Angle(30,0);
    // servo12.WRITE_Servo_Angle(90,0);
    // servo13.WRITE_Servo_Angle(120,0);
    // servo14.WRITE_Servo_Angle(30,0);
    // servo15.WRITE_Servo_Angle(90,0);
    // servo16.WRITE_Servo_Angle(120,0);
    // servo17.WRITE_Servo_Angle(30,0);
    // servo18.WRITE_Servo_Angle(90,0);

    // POS ADJUST FEMUR

    // servo1.WRITE_Servo_Angle(120,0);
    // servo2.WRITE_Servo_Angle(120,0);
    // servo3.WRITE_Servo_Angle(90,0);
    // servo4.WRITE_Servo_Angle(120,0);
    // servo5.WRITE_Servo_Angle(120,0);
    // servo6.WRITE_Servo_Angle(90,0);
    // servo7.WRITE_Servo_Angle(120,0);
    // servo8.WRITE_Servo_Angle(120,0);
    // servo9.WRITE_Servo_Angle(90,0);
    // servo10.WRITE_Servo_Angle(120,0);
    // servo11.WRITE_Servo_Angle(120,0);
    // servo12.WRITE_Servo_Angle(90,0);
    // servo13.WRITE_Servo_Angle(120,0);
    // servo14.WRITE_Servo_Angle(120,0);
    // servo15.WRITE_Servo_Angle(90,0);
    // servo16.WRITE_Servo_Angle(120,0);
    // servo17.WRITE_Servo_Angle(120,0);
    // servo18.WRITE_Servo_Angle(90,0);

    

    return 0;
}

// uint8_t cmdPacketStart[6] = {0x55,0x55,0x01,0x03,0x0B,0x0F};
