#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {

	is_initialized_ = false;

}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;
}

void PID::UpdateError(double cte) {
	
	if (!is_initialized_)
	{
		p_error = cte;
		d_error = 0;

		is_initialized_ = true;
	}
	else
	{
		d_error = cte - p_error;
		p_error = cte;
	}
	
	i_error += cte;
	
}

double PID::TotalError() {

	double total_error = -Kp * p_error - Kd * d_error - Ki * i_error;

	return total_error;

}

