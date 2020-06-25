/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.

  OPEN THE SERIAL MONITOR TO VIEW THE OUTPUT >> 
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);//串口初始化
}

// the loop routine runs over and over again forever:
void loop() {//循环检测输出
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);//用sensorValue变量保存arduino内部从A0引脚读取的模拟电压值，数值是0-1023之间的整数
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);//将次模拟电压值转为实际电压值，即模拟电压值占1023的比例乘以总电压5V
  // print out the value you read:
  Serial.println(voltage);//通过串口输出电压值
}