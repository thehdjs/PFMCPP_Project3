/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.





struct Knife
{
    
    float pointiness = 0.85f;
 
    float sharpness = 0.3f;

    float thickness = 1.5f;

    unsigned int length = 150;
    
    float price = 75;
    
    struct Incision
    {
        float depth = 10;
        float length = 50;

        float getHurtLevel();
    };

    void cut(Incision prettyNastyCut);
  
    void stab();
    
    void unscrew();
};

float Knife::Incision::getHurtLevel()
{
    return depth + length;
}

void Knife::cut(Incision prettyNastyCut)
{
    prettyNastyCut.getHurtLevel();
    std::cout << "cut pain level: " << prettyNastyCut.getHurtLevel() << "\n";
}

void Knife::stab()
{
    Incision newIncision;
    newIncision.getHurtLevel();
}

void Knife::unscrew()
{
    std::cout << "pointiness: " << pointiness << "\n";
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
    std::cout << "good to go!" << std::endl;
}
