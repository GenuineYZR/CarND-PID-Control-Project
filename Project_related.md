# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## The effect of the P, I, D component

* The P error stands for the distance the car is deviated from the expected track and in this particular project it is the cte. If the cte is large then the steering angle need to be large enough to pull the car back to the track.
* The I error stands for the total error so far along the track which is the sum of all the cross track error. This component can be helpful if the system itself has biases.
* The D error stands for the difference between the current cte and the previous cte. As the system has provided the cte under certain interval, we don't have to worry about the delta t this time. Basically the d error represent how fast the cte is changing, if it is changing too fast which means the steering angle is too large, the car can overshoot and be off the track as well. 


## Discussion about tuning the final hyperparameters (P, I, D coefficients)

I tuned the parameters manually and step by step by first considering the P coefficient only. To achieve that I set the other two coefficients to 0 and kept tuning until the car could seemingly run without too large oscillation. Then I left the P coefficient as it was and went on to tune the second coefficient and then the third. I think it is a bit of like the twiddle algorithm except I did it manually. Finally my coefficients vector turned out be (0.1, 0.0004, 3) and it just worked fine for me.
