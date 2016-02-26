import pycuber as pc
import time

# Create a Cube object
mycube = pc.Cube()

# Do something at the cube.
cube2 = pc.Cube()

print(mycube)
x=1
while True:
	mycube("R U")
	print(x)
	print(mycube)
	x += 1
	if mycube == cube2:
		break

#R U L' F U L L R U F D D U R' D
