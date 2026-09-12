#include "arm_config.h"

/* 左臂姿态角：原 LEFTNOW· BlockArm.c 实测值 */
const ArmPose_t ARM_POSES_LEFT[7] = {
    { -12.0f, 118.0f },   /* LOW_PICK      */
    { -21.0f, 101.0f },   /* HIGH_PICK     */
    {  20.0f,  45.0f },   /* SECOND_PICK   */
    { -20.0f,  90.0f },   /* PLACE_BOTTOM  */
    {  45.0f,  50.0f },   /* PLACE_LEVEL1  */
    {  85.0f,  44.0f },   /* PLACE_LEVEL2  */
    {  20.0f,  40.0f },   /* SAFE          */
};

/* 右臂姿态角：原 RIGHTNOW BlockArm.c 实测值 */
const ArmPose_t ARM_POSES_RIGHT[7] = {
    {  12.0f, 116.0f },   /* LOW_PICK      */
    {  28.0f, 105.0f },   /* HIGH_PICK     */
    { -20.0f,  45.0f },   /* SECOND_PICK   */
    {  20.0f,  95.0f },   /* PLACE_BOTTOM  */
    { -40.0f,  50.0f },   /* PLACE_LEVEL1  */
    { -84.0f,  44.0f },   /* PLACE_LEVEL2  */
    { -25.0f,  40.0f },   /* SAFE          */
};