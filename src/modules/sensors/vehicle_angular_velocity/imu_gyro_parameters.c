/****************************************************************************
 *
 *   Copyright (c) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
* Driver level notch frequency for gyro
*
* The center frequency for the 2nd order notch filter on the gyro driver.
* This filter can be enabled to avoid feedback amplification of structural resonances at a specific frequency.
* This only affects the signal sent to the controllers, not the estimators. 0 disables the filter.
* See "IMU_GYRO_NF_BW" to set the bandwidth of the filter.
*
* @min 0
* @max 1000
* @unit Hz
* @reboot_required true
* @group Sensors
*/
PARAM_DEFINE_FLOAT(IMU_GYRO_NF_FREQ, 0.0f);

/**
* Driver level notch bandwidth for gyro
*
* The frequency width of the stop band for the 2nd order notch filter on the gyro driver.
* See "IMU_GYRO_NF_FREQ" to activate the filter and to set the notch frequency.
*
* @min 0
* @max 100
* @unit Hz
* @reboot_required true
* @group Sensors
*/
PARAM_DEFINE_FLOAT(IMU_GYRO_NF_BW, 20.0f);

/**
* Driver level cutoff frequency for gyro
*
* The cutoff frequency for the 2nd order butterworth filter on the gyro driver.
* This only affects the signal sent to the controllers, not the estimators. 0 disables the filter.
*
* @min 0
* @max 1000
* @unit Hz
* @reboot_required true
* @group Sensors
*/
PARAM_DEFINE_FLOAT(IMU_GYRO_CUTOFF, 30.0f);

/**
* Gyro control data maximum publication rate
*
* This is the maximum rate the gyro control data (sensor_gyro) will be allowed to publish at.
* Set to 0 to disable and publish at the native sensor sample rate.
*
* @min 0
* @max 2000
* @value 0 0 (no limit)
* @value 50 50 Hz
* @value 250 250 Hz
* @value 400 400 Hz
* @value 1000 1000 Hz
* @value 2000 2000 Hz
* @unit Hz
* @reboot_required true
* @group Sensors
*/
PARAM_DEFINE_INT32(IMU_GYRO_RATEMAX, 0);

/**
* Cutoff frequency for angular acceleration
*
* The cutoff frequency for the 2nd order butterworth filter used on
* the time derivative of the measured angular velocity.
* Set to 0 to disable the filter.
*
* @min 0
* @max 1000
* @unit Hz
* @reboot_required true
* @group Sensors
*/
PARAM_DEFINE_FLOAT(IMU_DGYRO_CUTOFF, 10.0f);
