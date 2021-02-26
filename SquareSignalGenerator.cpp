#include <stdio.h>

class SquareSignalGenerator
{
private:
    std::thread thread_object(BackWork);
    double _frontLength;
    double _backLength;
    bool output;
public:
    SquareSignalGenerator::SquareSignalGenerator(double frontLength, double backLenght)
    {
        _frontLength = frontLength;
        _backLength = backLenght;
        output = false;
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

    void BackWork()
    {

        delay(_backLength);
        while (true)
        {
            output = true;
            delay(_frontLength);
            output = false;
            delay(_backLength);
        }
        
    }
};



