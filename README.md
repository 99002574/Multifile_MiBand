# Fitness parameters from MiBand Heart Data
## Generate PNG diagram of Heart rate waveform
Can generate the heart rate of 25 consecutive readings from the database for a given beginning time. This is generated as a PNG image using free library called pbPlots.

Source: https://github.com/InductiveComputerScience/pbPlots

## Maximum heart rate permissible for an age
Using the equation max= (200-age) x 0.8, we will get the number of times the heart rate went into anerobic or intense levels inside the data provided.

## High heart rate above a given level
This will return the count of times the heart rate went above the input level, that the user considers permissible.

## To check the no of heart rate readings between 2 timings
This will return the total no. of available readings to the user between a particular time slot. Further the user can decide whether the length of the data between this slot is sufficient to generate the heart-rate image file.

