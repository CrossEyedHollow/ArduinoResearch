#include <stdio.h>
class SquareSignalGenerator
{
private:
    double _frontLength;
    double _backLength;
public:
    SquareSignalGenerator::SquareSignalGenerator(double frontLength, double backLenght)
    {
        _frontLength = frontLength;
        _backLength = backLenght;
    }

    void SquareSignalGenerator::Start()
    {
        //Start some kind of timer
        printf("Started the generator");
    }

    void SquareSignalGenerator::Stop()
    {
        //Stop the timer and claer variables
        printf("Stopped the generator");
    }
};



