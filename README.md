# Digital-incubator-using-Arduino

## 1. introduction

An incubator is a device which is used to breed and preserve the bacteriological cultures or cell cultures. It supports the prime temperature, light intensity, humidity and other conditions inside the atmosphere.
Incubators are very important for many experimental works in the field of cell biology, microbiology as well as molecular biology
and cultures are used for the bacteria and other Eukaryota cells. They are also used as a substitute for the poultry chickens which often leads to a high rate of explosion
because of the ability to control the major factor. i.e. Temperature.
The incubator which we have designed basically is an egg incubator that monitors and control the temperature as well as lightness in the desired or optimum range
required for the proper hatching of eggs as a primary task because of its importance as a guiding factor / parameter.

## 2. Project description 

We have used a temperature sensor (LM35) and light sensor (LDR) which sense the temperature and light intensity inside the incubator, the output of which is provided
to the Arduino microcontroller which takes the decision based on the comparison between the desired set point values and the input values obtained from the sensor. The
current temperature is displayed on the LCD. The decision taken by the microcontroller is either to turn on the Bulb (when temperature is low) or turn the Fan on (when
temperature is high). <br>
Basically the incubation system start by reading the current values of temperature and light intensity. This system is designed depending upon the sunshine. If there is a
sunshine, it means that this is the day time. So, the fan in this condition runs at the full speed. On the other hand if there is no sunshine, then it means that the time is the
night time. So, in this condition, the fan runs using the Pulse Width Modulation Technique through which the speed of the fan can be varied.<br> In fact, this is done because
therefore temperature outside is the low in the night time as compared to the daytime when the sun is shining So, it will be work efficiently.
