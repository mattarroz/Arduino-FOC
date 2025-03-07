# SimpleFOClibrary - **Simple** Field Oriented Control (FOC) **library** <br> 
### A Cross-Platform FOC implementation for BLDC and Stepper motors<br> based on the Arduino IDE and PlatformIO 

![Library Compile](https://github.com/simplefoc/Arduino-FOC/workflows/Library%20Compile/badge.svg)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![arduino-library-badge](https://www.ardu-badge.com/badge/Simple%20FOC.svg?)](https://www.ardu-badge.com/badge/Simple%20FOC.svg)
[![status](https://joss.theoj.org/papers/4382445f249e064e9f0a7f6c1bb06b1d/status.svg)](https://joss.theoj.org/papers/4382445f249e064e9f0a7f6c1bb06b1d)

We live in very exciting times 😃! BLDC motors are entering the hobby community more and more and many great projects have already emerged leveraging their far superior dynamics and power capabilities. BLDC motors have numerous advantages over regular DC motors but they have one big disadvantage, the complexity of control. Even though it has become relatively easy to design and manufacture PCBs and create our own hardware solutions for driving BLDC motors the proper low-cost solutions are yet to come. One of the reasons for this is the apparent complexity of writing the BLDC driving algorithms, Field oriented control (FOC) being an example of one of the most efficient ones.
The solutions that can be found on-line are almost exclusively very specific for certain hardware configuration and the microcontroller architecture used.
Additionally, most of the efforts at this moment are still channeled towards the high-power applications of the BLDC motors and proper low-cost and low-power FOC supporting boards are very hard to find today and even may not exist. <br>
Therefore this is an attempt to: 
- 🎯 Demystify FOC algorithm and make a robust but simple Arduino library: [Arduino *SimpleFOClibrary*](https://docs.simplefoc.com/arduino_simplefoc_library_showcase)
  - <i>Support as many <b>motor + sensor + driver + mcu</b> combinations out there</i>
- 🎯 Develop a modular FOC supporting BLDC driver boards:
   - ***NEW*** 📢: *Minimalistic* BLDC driver (<3Amps) :   [<span class="simple">Simple<b>FOC</b>Mini</span> ](https://github.com/simplefoc/SimpleFOCMini).
   - *Low-power* gimbal driver (<5Amps) :  [*Arduino Simple**FOC**Shield*](https://docs.simplefoc.com/arduino_simplefoc_shield_showcase).
   - *Medium-power* BLDC driver (<30Amps): [Arduino <span class="simple">Simple<b>FOC</b>PowerShield</span> ](https://github.com/simplefoc/Arduino-SimpleFOC-PowerShield).
   - See also [@byDagor](https://github.com/byDagor)'s *fully-integrated* ESP32 based board: [Dagor Brushless Controller](https://github.com/byDagor/Dagor-Brushless-Controller)

<h3>NEWS 📢: SimpleFOClibrary has been published in the Journal of Open Source Software</h3>
<p>
  <b>SimpleFOC</b>: A Field Oriented Control (FOC) Library for Controlling Brushless Direct Current (BLDC) and Stepper Motors.<br>
  A. Skuric, HS. Bank, R. Unger, O. Williams, D. González-Reyes<br>
Journal of Open Source Software, 7(74), 4232, https://doi.org/10.21105/joss.04232
</p>

<blockquote class="info">
   <p class="heading">NEW RELEASE 📢: <span class="simple">Simple<span class="foc">FOC</span>library</span> v2.2.2 <a href="https://github.com/simplefoc/Arduino-FOC/releases/tag/v2.2.2">see release</a></p>
   <ul>
      <li>GenericCurrentSense bugfix and testing</li>
      <li>bugfix leonardo #170</li>
      <li>bugfix - no index search after specifying natural direction</li>
      <li>Low level API restructuring
         <ul dir="auto">
            <li>Driver API</li>
            <li>Current sense API</li>
         </ul>
      </li>
      <li>New debugging interface - <a href="https://docs.simplefoc.com/debugging">see in docs</a>
         <ul dir="auto">
            <li>Static class SimpleFOCDebug</li>
         </ul>
      </li>
      <li>CurrentSense API change - added method <code class="highlighter-rouge">linkDriver()</code> - <a href="https://docs.simplefoc.com/current_sense">see in docs</a></li>
      <li>Low-side current sensing - <a href="https://docs.simplefoc.com/low_side_current_sense">see in docs</a>
         <ul dir="auto">
            <li>ESP32 generic support for multiple motors</li>
            <li>Added low-side current sensing support for stm32 - only one motor
            <ul dir="auto">
               <li>f1 family</li>
               <li>f4 family</li>
               <li>g4 family</li>
            </ul>
            </li>
         </ul>
      </li>
      <li>New appraoch for current estimation for torque control using voltage - <a href="https://docs.simplefoc.com/voltage_torque_mode">see in docs </a>
         <ul dir="auto">
            <li>Support for motor KV rating - back emf estimation</li>
            <li>Using motor phase resistance</li>
         </ul>
      </li>
      <li>KV rating and phase resistance used for open-loop current limiting as well - <a href="https://docs.simplefoc.com/open_loop_motion_control">see in docs </a> </li>
   </ul>
</blockquote>

## Arduino *SimpleFOClibrary* v2.2

<p align="">
<a href="https://youtu.be/Y5kLeqTc6Zk">
<img src="https://docs.simplefoc.com/extras/Images/youtube.png"  height="320px">
</a>
</p>

This video demonstrates the *Simple**FOC**library* basic usage, electronic connections and shows its capabilities.

### Features
- **Easy install**: 
   - Arduino IDE: Arduino Library Manager integration
   - PlatformIO
- **Open-Source**: Full code and documentation available on github
- **Goal**: 
   - Support as many [sensor](https://docs.simplefoc.com/position_sensors) + [motor](https://docs.simplefoc.com/motors) + [driver](https://docs.simplefoc.com/drivers) + [current sense](https://docs.simplefoc.com/current_sense)   combination as possible.
   - Provide the up-to-date and in-depth documentation with API references and the examples
- **Easy to setup and configure**: 
   - Easy hardware configuration 
   - Each hardware component is a C++ object (easy to understand) 
   - Easy [tuning the control loops](https://docs.simplefoc.com/motion_control)
   - [*Simple**FOC**Studio*](https://docs.simplefoc.com/studio) configuration GUI tool
   - Built-in communication and monitoring
- **Cross-platform**:
   - Seamless code transfer from one microcontroller family to another 
   - Supports multiple [MCU architectures](https://docs.simplefoc.com/microcontrollers):
      - Arduino: UNO, MEGA, DUE, Leonardo ....
      - STM32
      - ESP32
      - Teensy
      - many more ...

<p align=""> <img src="https://docs.simplefoc.com/extras/Images/uno_l6234.jpg"  height="170px">  <img src="https://docs.simplefoc.com/extras/Images/hmbgc_v22.jpg" height="170px">  <img src="https://docs.simplefoc.com/extras/Images/foc_shield_v13.jpg"  height="170px"></p>


## Documentation
Full API code documentation as well as example projects and step by step guides can be found on our [docs website](https://docs.simplefoc.com/).

![image](https://user-images.githubusercontent.com/36178713/168475410-105e4e3d-082a-4015-98ff-d380c7992dfd.png)


## Getting Started
Depending on if you want to use this library as the plug and play Arduino library or you want to get insight in the algorithm and make changes there are two ways to install this code.

- Full library installation [Docs](https://docs.simplefoc.com/library_download)
- PlatformIO [Docs](https://docs.simplefoc.com/library_platformio)

### Arduino *SimpleFOClibrary* installation to Arduino IDE
#### Arduino Library Manager 
The simplest way to get hold of the library is directly by using Arduino IDE and its integrated Library Manager. 
- Open Arduino IDE and start Arduino Library Manager by clicking: `Tools > Manage Libraries...`.
- Search for `Simple FOC` library and install the latest version.
- Reopen Arduino IDE and you should have the library examples in `File > Examples > Simple FOC`.

#### Using Github website 
- Go to the [github repository](https://github.com/simplefoc/Arduino-FOC)
- Click first on `Clone or Download > Download ZIP`. 
- Unzip it and place it in `Arduino Libraries` folder. Windows: `Documents > Arduino > libraries`.  
- Reopen Arduino IDE and you should have the library examples in `File > Examples > Simple FOC`.

#### Using terminal
- Open terminal and run
```sh  
cd #Arduino libraries folder
git clone https://github.com/simplefoc/Arduino-FOC.git
```
- Reopen Arduino IDE and you should have the library examples in `File > Examples > Simple FOC`.

## Community and contributing

For all the questions regarding the potential implementation, applications, supported hardware and similar please visit our [community forum](https://community.simplefoc.com) or our [discord server](https://discord.gg/kWBwuzY32n).

It is always helpful to hear the stories/problems/suggestions of people implementing the code and you might find a lot of answered questions there already! 

### Github Issues & Pull requests

Please do not hesitate to leave an issue if you have problems/advices/suggestions regarding the code!

Pull requests are welcome, but let's first discuss them in [community forum](https://community.simplefoc.com)!

If you'd like to contribute to this porject but you are not very familiar with github, don't worry, let us know either by posting at the community forum , by posting a github issue or at our discord server.

## Arduino code example
This is a simple Arduino code example implementing the velocity control program of a BLDC motor with encoder. 

NOTE: This program uses all the default control parameters.

```cpp
#include <SimpleFOC.h>

//  BLDCMotor( pole_pairs )
BLDCMotor motor = BLDCMotor(11);
//  BLDCDriver( pin_pwmA, pin_pwmB, pin_pwmC, enable (optional) )
BLDCDriver3PWM driver = BLDCDriver3PWM(9, 10, 11, 8);
//  Encoder(pin_A, pin_B, CPR)
Encoder encoder = Encoder(2, 3, 2048);
// channel A and B callbacks
void doA(){encoder.handleA();}
void doB(){encoder.handleB();}


void setup() {  
  // initialize encoder hardware
  encoder.init();
  // hardware interrupt enable
  encoder.enableInterrupts(doA, doB);
  // link the motor to the sensor
  motor.linkSensor(&encoder);
  
  // power supply voltage [V]
  driver.voltage_power_supply = 12;
  // initialise driver hardware
  driver.init();
  // link driver
  motor.linkDriver(&driver);

  // set control loop type to be used
  motor.controller = MotionControlType::velocity;
  // initialize motor
  motor.init();
  
  // align encoder and start FOC
  motor.initFOC();
}

void loop() {
  // FOC algorithm function
  motor.loopFOC();

  // velocity control loop function
  // setting the target velocity or 2rad/s
  motor.move(2);
}
```
You can find more details in the [SimpleFOC documentation](https://docs.simplefoc.com/).

## Example projects
Here are some of the *Simple**FOC**library* and *Simple**FOC**Shield* application examples. 
<p align="center">
<a href="https://youtu.be/Ih-izQyXJCI">
<img src="https://docs.simplefoc.com/extras/Images/youtube_pendulum.png"  height="200px" >
</a>
<a href="https://youtu.be/xTlv1rPEqv4">
<img src="https://docs.simplefoc.com/extras/Images/youtube_haptic.png"  height="200px" >
</a>
<a href="https://youtu.be/RI4nNMF608I">
<img src="https://docs.simplefoc.com/extras/Images/youtube_drv8302.png"  height="200px" >
</a>
<a href="https://youtu.be/zcb86TRxTxc">
<img src="https://docs.simplefoc.com/extras/Images/youtube_stepper.png"  height="200px" >
</a>
</p>


## Citing the *SimpleFOC* 

We are very happy that *Simple**FOC**library* has been used as a component of several research project and has made its way to several scientific papers.  We are hoping that this trend is going to continue as the project matures and becomes more robust! 
A short resume paper about *Simple**FOC*** has been published in the Journal of Open Source Software: 
<p>
  <b><i>SimpleFOC</i></b>: A Field Oriented Control (FOC) Library for Controlling Brushless Direct Current (BLDC) and Stepper Motors.<br>
  A. Skuric, HS. Bank, R. Unger, O. Williams, D. González-Reyes<br>
Journal of Open Source Software, 7(74), 4232, https://doi.org/10.21105/joss.04232
</p>

If you are interested in citing  *Simple**FOC**library* or some other component of *Simple**FOC**project* in your research, we suggest you to cite our paper:

```bib
@article{simplefoc2022,
  doi = {10.21105/joss.04232},
  url = {https://doi.org/10.21105/joss.04232},
  year = {2022},
  publisher = {The Open Journal},
  volume = {7},
  number = {74},
  pages = {4232},
  author = {Antun Skuric and Hasan Sinan Bank and Richard Unger and Owen Williams and David González-Reyes},
  title = {SimpleFOC: A Field Oriented Control (FOC) Library for Controlling Brushless Direct Current (BLDC) and Stepper Motors},
  journal = {Journal of Open Source Software}
}

```


## Arduino FOC repo structure
Branch  | Description | Status
------------ | ------------- | ------------ 
[master](https://github.com/simplefoc/Arduino-FOC) | Stable and tested library version | ![Library Compile](https://github.com/simplefoc/Arduino-FOC/workflows/Library%20Compile/badge.svg)
[dev](https://github.com/simplefoc/Arduino-FOC/tree/dev) | Development library version | ![Library Dev Compile](https://github.com/simplefoc/Arduino-FOC/workflows/Library%20Dev%20Compile/badge.svg?branch=dev)
[minimal](https://github.com/simplefoc/Arduino-FOC/tree/minimal) | Minimal Arduino example with integrated library | ![MinimalBuild](https://github.com/simplefoc/Arduino-FOC/workflows/MinimalBuild/badge.svg?branch=minimal)
