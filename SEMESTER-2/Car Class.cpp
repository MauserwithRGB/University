#include <iostream>

using namespace std;

class vehicle
{
	private:
		int speed;
		int maxSpeed = 250;  // KMH
		bool engineON = false;
	
	public:
		void start()
		{
			engineON = true;
			speed = 0;
			
			cout << "Vehicle started.\n";
		}
		
		void accelerate (int AddSpeed)
		{
			if (engineON && speed >= 0 && speed <= 250 - speed)
			{	
				speed += AddSpeed;
				cout << "Speed increased by " << AddSpeed << ".\nCurrent speed is " << speed << endl;
			}
			
			else
				cout << "Engine not started!" << endl;
		}
		
		void brake()
		{
			if (speed > 0)
				speed -= 10;
			
			cout << "Brakes applied.\nCurrent Speed is " << speed << endl;
		}
};

int main()
{
	
	vehicle car;
	
	car.start();
	car.accelerate(20);
}