/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}

//call Example::main() in main()




struct Knife
{
    float pointiness, sharpness, thickness, price;
    unsigned int length;
    struct Incision
    {
        float depth, length;
        
        Incision();

        float getHurtLevel();
    };

    Knife();

    void cut(Incision prettyNastyCut);
  
    void stab();
    
    void unscrew();
};

Knife::Incision::Incision()
{
    depth = 10;
    length = 50;
}

float Knife::Incision::getHurtLevel()
{
    return depth + length;
}

Knife::Knife() :
pointiness {0.85f},
sharpness {0.3f},
thickness {1.5f},
price {75},
length {150}
{}

void Knife::cut(Incision prettyNastyCut)
{
    prettyNastyCut.getHurtLevel();
    std::cout << "cut pain level: " << prettyNastyCut.getHurtLevel() << "\n";
}

void Knife::stab()
{
    Incision newIncision;
    newIncision.getHurtLevel();
    std::cout << "pointiness and sharpness respectively: " << pointiness << ", " << sharpness << "\n"; 
}

void Knife::unscrew()
{
    std::cout << "pointiness: " << pointiness << "\n";
}

struct Light
{
    int temperature = 2500;
    int luminosity {1000};
    int electricalConsumption {500};
    float size, price;

    Light();

    bool turnOn();
   
    void setTheMood();

    float addedQuality();
};

Light::Light()
{
    size = 25.3f;
    price = 1000;
}
bool Light::turnOn()
{
    return true;
}

void Light::setTheMood()
{
    luminosity /= 3;
    temperature = 1000;
    electricalConsumption /= 2;
}

float Light::addedQuality()
{
    return 50.5f;
}

struct SwissArmyKnife
{
   
    float weight, size, price;
    int numberOfCuttingTools, numberOfGrabbingTools;

    SwissArmyKnife();

    void cut(Knife::Incision aNewCut);

    void open();
   
    void unscrew();
};

SwissArmyKnife::SwissArmyKnife() : 
weight (351.3f),
size (100),
price (59.99f),
numberOfCuttingTools (3),
numberOfGrabbingTools (2)
{}

void SwissArmyKnife::cut(Knife::Incision aNewCut)
{
    aNewCut.getHurtLevel();
    std::cout << "cut pain level: " << aNewCut.getHurtLevel() << "\n";
}

void SwissArmyKnife::open()
{
    std::cout << "#/cutting tools: " << numberOfCuttingTools << "\n";
    std::cout << "size: " << size << "\n";
}

void SwissArmyKnife::unscrew()
{
    std::cout << "#/grabbing tools: " << numberOfGrabbingTools << "\n";
    std::cout << "size: " << size << "\n";
}

struct VideoMixer
{
    float tBarPosition = 53.2f;
    int numberOfFaders, numberOfOnputs, numberOfEffects, numberOfOutputs;
    
    VideoMixer();

    void mix(int input1, int input2);
    
    void fadeToBlack(float duration = 50);
   
    void modify();
};

VideoMixer::VideoMixer()
{
    tBarPosition = 53.2f;
    numberOfFaders = 4;
    numberOfOnputs = 4;
    numberOfEffects = 2;
    numberOfOutputs = 2;
}

void VideoMixer::mix(int input1, int input2)
{
    input1 /= 2;
    input2 /= 2;
}

void VideoMixer::fadeToBlack(float duration)
{
    duration = 0.8f;
}

void VideoMixer::modify()
{
    std::cout << "modification: " << tBarPosition << "\n";
}

struct Oscillators
{
    char waveform;
    float pitch, phase, timbre, amplitude;

    Oscillators();

    float generateAudio(int oscNumber);
    
    bool resetPhase();
    
    float generateModulation(int oscNumber);
};

Oscillators::Oscillators()
{
   pitch = 440;
   waveform = '~';
   phase = 0;
   timbre = 0;
   amplitude = 1; 
}

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
    float threshold, amount, offset, feedback, controlInput;

    WaveShapers();
    
    void twist();
    
    void reshape();
    
    void distort();
};

WaveShapers::WaveShapers()
{
    threshold = 1;
    amount = 100.0f;
    offset = 0;
    feedback = 0;
    controlInput = 0;
}

void WaveShapers::twist()
{
    threshold = 0.5f;
    offset = 0.5f;
}

void WaveShapers::reshape()
{
    feedback = 1;
}

void WaveShapers::distort()
{
    offset = 0.99f;
}

struct Filters
{
    float frequency, resonance, drive;
    char type;
    int caracter;

    Filters();
    
    float removeFrequencies();
   
    float ping(int inputNumber);

    float selfOscillate(float level = 1);
};

Filters::Filters()
{
    frequency = 15000;
    resonance = 0.7f;
    type = 'L';
    caracter = 1;
    drive = 1;
}
float Filters::removeFrequencies()
{
    std::cout << "frequencies are being removed" << "\n";
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
    float rate, depth, phase;
    char waveform;
    bool unipolar;

    Modulators();

    float generateModulation();
    
    void makeSoundsInteresting();

    float addGroove (int grooveTime, int grooveDepth);
};

Modulators::Modulators()
{
    rate = 0.01f;
    depth = 1;
    waveform = '^';
    phase = 0;
    unipolar = 0;
}

float Modulators::generateModulation()
{
    std::cout << "modulation is happening" << "\n";
    return 0.89f;
}

void Modulators::makeSoundsInteresting()
{
    depth = 0.05f;
    waveform = '*';
    rate = 0.0001f;
    unipolar = 0;
}

float Modulators::addGroove(int grooveTime, int grooveDepth)
{
    grooveTime = 2;
    grooveDepth = 100;
    return 0.89f;
}

struct Amplifiers
{
    float gain, thd;
    char linearity, classType;
    int caracter = 0;
    
    struct ColorType
    {
        int age;
        float depth;

        ColorType();

        void createHarmonics(int harmonicType);
    };

    Amplifiers();

    float amplify(float incomingSignal);
  
    float distort(float toneFrequency);
   
    float color(ColorType japaneseVintage);
};

Amplifiers::ColorType::ColorType()
{
    age = 40;
    depth = 0;
}

Amplifiers::Amplifiers()
{
   gain = 100;
   linearity = ')';
   thd = 0.002f;
   classType = 'A';
   caracter = 0;
}

void Amplifiers::ColorType::createHarmonics(int harmonicType)
    {
        harmonicType = 3;
    }

float Amplifiers::amplify(float incomingSignal)
{
    return incomingSignal * gain;
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


int main()
{
    Example::main();

    Knife machete;
    Knife::Incision prettyNastyCut;
    
    std::cout << "machete ";
    
    machete.cut(prettyNastyCut);

    machete.stab();
    
    Light LEDpanel;

    std::cout << "Price of LEDpanel: " << LEDpanel.price << "\n";

    SwissArmyKnife vic;
    Knife::Incision aNewCut;

    std::cout << "vic ";
    vic.cut(aNewCut);
    
    VideoMixer forA;
    
    std::cout << "ForA video ";
    forA.modify();
    
    Oscillators vco;

    std::cout << "vco waveform: " << vco.waveform << "\n";

    WaveShapers ws;

    std::cout << "ws threshold: " << ws.threshold << "\n";

    Filters vcf;
    
    std::cout << "vcf self oscillation level: " << vcf.selfOscillate() << "\n";

    vcf.removeFrequencies();

    Modulators env;
    float addedGroove;

    addedGroove = env.addGroove(2, 7);

    std::cout << "groove added to env: " << addedGroove << "\n";

    env.generateModulation();

    Amplifiers vca;
    Synthesizer serge;
    std::cout << "Drums level: " << serge.makeDrums() << "\n";

    std::cout << "good to go!" << std::endl;
}
