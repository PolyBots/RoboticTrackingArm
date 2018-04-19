import serial
import time

#python 2.7

ser = serial.Serial('/dev/ttyACM1', 9600)
time.sleep(2)
ser.write('3')
