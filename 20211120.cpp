#include <iostream>

class Object

{
private:
	float x;
	float y;
	float z;


public:

	Object()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	float getX() { return x; }
	float getY() { return y; }
	float getZ() { return z; }
};

class Vehicle : public Object
{
private:
	float speed;
	float accel;

public:
	void setSpeed(float speed, float accel);

	float getSpeed()
	{
		return speed;
	}
};

class Car : public Vehicle
{
private:
	float speed;

public:
	Vehicle vehicle;
	void SetSpeed(float speed);
	float GetSpeed() { return speed; }
	void Update();
};

int main()
{
	Car car;
	
	car.SetSpeed(0.1f);

	for (int i = 0;i < 100;i++)
	{
		car.Update();
	}
}

void Car::SetSpeed(float speed)
{

}

void Car::Update()
{
	float stopNum = 36;
	float speed;

	speed = vehicle.getSpeed();

	if (stopNum > speed)
	{
		speed++;
	}
	else
		return;
}

void Vehicle::setSpeed(float speed, float accel)
{
	this->speed = speed;
	this->accel = accel;
}
