 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

    struct Foot
    {
        void stepForward();
        int stepSize();
    };

    void Foot::stepForward()
    {
        // I have no clue what to put in here
    }

    int Foot::stepSize()
    {
        // I have no clue what to put in here
        return 4;
    }

    struct Person
    {
        int age;
        int height;
        float hairLength;
        float GPA;
        unsigned int SATScore;
        int distanceTraveled;
        
        Foot leftFoot;
        Foot rightFoot;

        void run(int howFast, bool startWithLeftFoot);

    };

    void Person::run(int howFast, bool startWithLeftFoot)
    {
        if (startWithLeftFoot == true)
        {
           leftFoot.stepForward();
           rightFoot.stepForward();
        }
        else
        {
            rightFoot.stepForward();
            leftFoot.stepForward();
        }
    
        distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();

        howFast = 1;

    }

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


struct Knife 
{
    
    float pointiness = 0.85f; 
 
    float sharpness = 0.3f;

    float thickness = 1.5f;

    unsigned int length = 150;
    
    float price = 75;
    
    struct Incision
    {
        float incisionDepth = 10;
        float incisionLength = 50;

        void hurt(float pain);
    };

    void cut(Incision prettyNastyCut);
  
    void stab();
    
    void unscrew();
};

void Knife::Incision::hurt(float pain)
{
    pain = incisionDepth + incisionLength;
}

void Knife::cut(Incision prettyNastyCut)
{
    prettyNastyCut.hurt(1);
}

void Knife::stab()
{

}

void Knife::unscrew()
{

}

struct Light
{
    int temperature = 2500;
   
    int luminosity = 1000;
   
    int electricalConsumption = 500;
   
    float size = 25.3f;

    float price = 1000;

    bool turnOn();
   
    void setTheMood();

    float addedQuality();
};

bool Light::turnOn()
{
    return true;
}

void Light::setTheMood()
{

}

float Light::addedQuality()
{
    return 50.5f;
}

struct SwissArmyKnife
{
   
    float weight = 351.3f;
   
    float size = 100;
    
    float price = 59.99f;
   
    int numberOfCuttingTools = 3;
   
    int numberOfGrabbingTools = 2;

   
    void cut(Knife::Incision aNewCut); 

    void open();
   
    void unscrew();
};

void SwissArmyKnife::cut(Knife::Incision aNewCut)
{
    aNewCut.hurt(1);
}

void SwissArmyKnife::open()
{

}

void SwissArmyKnife::unscrew()
{

}

struct VideoMixer
{
    
    float tBaPosition = 53.2f;
   
    int numberOfFaders = 4;
    
    int numberOfOnputs = 4;
   
    int numberOfEffects = 2;
   
    int numberOfOutputs = 2;

    
    void mix(int input1, int input2);
    
    void fadeToBlack(float duration = 50);
   
    void modify();
};

void VideoMixer::mix(int input1, int input2)
{
    input1 = 0;
    input2 = 0;
}

void VideoMixer::fadeToBlack(float duration)
{
    duration = 0.8f;
}

void VideoMixer::modify()
{

}

struct Oscillators
{
    
    float pitch = 440;
    
    char waveform = '~';
    
    float phase = 0;
    
    float timbre = 0;
    
    float amplitude = 1;

   
    float generateAudio(int oscNumber);
    
    bool resetPhase();
    
    float generateModulation(int oscNumber);
};

float Oscillators::generateAudio(int oscNumber)
{
    oscNumber = 1;
    return 0.89f;
}

bool Oscillators::resetPhase()
{
    phase = 0;
    return 0;
}

float Oscillators::generateModulation(int oscNumber)
{
    oscNumber = 1;
    return 0.89f;
}

struct WaveShapers
{
    
    float threshold = 1;
   
    float amount = 100.0f;
    
    float offset = 0;
    
    float feedback = 0;
    
    float controlInput = 0;

    
    void twist();
    
    void reshape();
    
    void distort();
};

void WaveShapers::twist()
{

}

void WaveShapers::reshape()
{

}

void WaveShapers::distort()
{

}

struct Filters
{
    
    float frequency = 15000;
    
    float resonance = 0.7f;
    
    char type = 'L';
    
    int caracter = 1;
    
    float drive = 1;

    
    float removeFrequencies();
   
    float ping(int inputNumber);


    float selfOscillate(float level = 1);
};

float Filters::removeFrequencies()
{
    return 0.89f;
}

float Filters::ping(int inputNumber)
{
    inputNumber = 1;
    return 0.89f;
}

float Filters::selfOscillate(float level)
{
    level = 0.89f;
    return level;
}

struct Modulators
{
   
    float rate = 0.01f;
   
    float depth = 1;
   
    char waveform = '^';
   
    float phase = 0;
    
    bool unipolar = 0;


    float generateModulation();
    
    void makeSoundsInteresting();

    float addGroove (int grooveTime, int grooveDepth);
};

float Modulators::generateModulation()
{
    return 0.89f;
}

void Modulators::makeSoundsInteresting()
{

}

float Modulators::addGroove(int grooveTime, int grooveDepth)
{
    grooveTime = 2;
    grooveDepth = 100;
    return 0.89f;
}

struct Amplifiers
{
    
    float gain = 100;
    
    char linearity = ')';
   
    float thd = 0.002f;
   
    char classType = 'A';
    
    int caracter = 0;
    
    struct ColorType
    {
        int age;
        float depth;

        void createHarmonics(int harmonicType);
    };

   
    
    float amplify(float incomingSignal);
  
    float distort(float toneFrequency);
   
    float color(ColorType japaneseVintage);
};

void Amplifiers::ColorType::createHarmonics(int harmonicType)
    {
        harmonicType = 3;
    }

float Amplifiers::amplify(float incomingSignal)
{
    return incomingSignal*gain;
    
}

float Amplifiers::distort(float toneFrequency)
{
    toneFrequency = 200.9f;
    return 0.89f;
}

float Amplifiers::color(Amplifiers::ColorType japaneseVintage)
{
    japaneseVintage.createHarmonics(5);
    return 0.89f;
}

struct Synthesizer
{
    
    Oscillators osc1;
   
    WaveShapers waveshaper1;
   
    Filters filter1;
    
    Modulators lfo1;
   
    Amplifiers vca1;

    float basicSounds();

    float makePads();

    float makeDrums();
};

float Synthesizer::basicSounds()
{
    return 0.89f;
}

float Synthesizer::makePads()
{
    return 0.89f;
}

float Synthesizer::makeDrums()
{
    return 0.89f;
}

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
