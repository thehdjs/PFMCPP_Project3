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





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
1)knife
5 properties:
    1)pointiness
    2)sharpness
    3)thickness
    4)length
    5)price
3 things it can do:
    1)cut
    2)stab
    3)unscrew
 */

struct Knife 
{
    // angle of knife point in degrees
    float pointiness = 0.85f; 
    // smallest thickness in mm
    float sharpness = 0.3f;
    // biggest thickness
    float thickness = 1.5f;
    //length in mm
    unsigned int length = 150;
    //
    float price = 75;
    
    struct Incision
    {
        float incisionDepth = 10;
        float incisionLength = 50;

        void hurt(int pain);
    };

    //cut
    void cut(Incision prettyNastyCut);
    //stab
    void stab();
    //unscrew
    void unscrew();
};

/*
2)light
5 properties:
    1)temperature
    2)luminosity
    3)electrical consumption
    4)size
    5)price
3 things it can do:
    1)turn on
    2)set the mood
    3)elevate the production's quality
 */

struct Light
{
    //color temperature in Kelvin
    int temperature = 2500;
    //luminosity in Lumen
    int luminosity = 1000;
    //electrical consumption in Watts
    int electricalConsumption = 500;
    //size in mm²
    float size = 25.3f;
    //price
    float price = 1000;

    //turn on
    bool turnOn();
    //set the mood
    void setTheMood();
    //elevate the production's quality in %
    float addedQuality();
};

/*
3)swiss army knife
5 properties:
    1)weight
    2)size
    3)price
    4)number of cutting tools
    5)number of grabbing tools
3 things it can do:
    1)cut
    2)open
    3)unscrew
 */

struct SwissArmyKnife
{
    //weight in g
    float weight = 351.3f;
    //size in mm
    float size = 100;
    //price
    float price = 59.99f;
    //number of cutting tools
    int numberOfCuttingTools = 3;
    //number of grabbing tools
    int numberOfGrabbingTools = 2;

    //cut
    void cut(Knife::Incision aNewCut); //error message suggested this after I typed it in without Knife:: I guess it lets me borrow types declared in another scope. Will delete if you thik its better too
    //open
    void open();
    //unscrew
    void unscrew();
};

/*
4)video mixer
5 properties:
    1)t bar position
    2)faders
    3)inputs
    4)effects
    5)outputs
3 things it can do:
    1)mix
    2)fade to black
    3)modify
 */

struct VideoMixer
{
    //t bar position in %
    float tBaPosition = 53.2f;
    //faders
    int numberOfFaders = 4;
    //inputs
    int numberOfOnputs = 4;
    //effects
    int numberOfEffects = 2;
    //outputs
    int numberOfOutputs = 2;

    //mix
    void mix(int input1, int input2);
    //fade to black
    void fadeToBlack(float duration = 50);
    //modify
    void modify();
};

/*
5)oscillators
5 properties:
    1)pitch
    2)wave form
    3)phase
    4)timbre
    5)amplitude
3 things it can do:
    1)generate audio
    2)reset phase
    3)generate modulation
 */

struct Oscillators
{
    //pitch
    float pitch = 440;
    //waveform
    char waveform = '~';
    //phase
    float phase = 0;
    //timbre
    float timbre = 0;
    //amplitude
    float amplitude = 1;

    //generate audio
    float generateAudio(int oscNumber);
    //reset phase
    bool resetPhase();
    //generate modulation
    float generateModulation(int oscNumber);
};

/*
6)wave shapers
5 properties:
    1)threshold
    2)amount
    3)offset
    4)feedback
    5)control input
3 things it can do:
    1)twist
    2)reshape
    3)distort
 */

struct WaveShapers
{
    //threshold
    float threshold = 1;
    //amount
    float amount = 100.0f;
    //offset
    float offset = 0;
    //feedback
    float feedback = 0;
    //control input
    float controlInput = 0;

    //twist
    void twist();
    //reshape
    void reshape();
    //distort
    void distort();
};

/*
7)filters
5 properties:
    1)frequency
    2)resonance
    3)type
    4)caracter
    5)drive
3 things it can do:
    1)remove frequencies
    2)ping
    3)self oscillate
 */

struct Filters
{
    //frequency
    float frequency = 15000;
    //resonance
    float resonance = 0.7f;
    //type
    char type = 'L';
    //caracter
    int caracter = 1;
    //drive
    float drive = 1;

    //remove frequencies
    float removeFrequencies();
    //ping
    float ping(int inputNumber);
    //self oscillate
    float selfOscillate(float level = 1);
};

/*
8)modulators
5 properties:
    1)rate
    2)depth
    3)wave form
    4)phase
    5)unipolar
3 things it can do:
    1)generate modulation
    2)make sounds interesting
    3)add groove
 */

struct Modulators
{
    //rate
    float rate = 0.01f;
    //depth
    float depth = 1;
    //waveform
    char waveform = '^';
    //phase
    float phase = 0;
    //unipolar
    bool unipolar = 0;

    //generate modulation
    float generateModulation();
    //make sounds interesting
    void makeSoundsInteresting();
    //add groove
    float addGroove (int time, int depth);
};

/*
9)amplifiers
5 properties:
    1)gain
    2)linearity
    3)thd
    4)class type
    5)caracter
3 things it can do:
    1)amplify
    2)distort
    3)color
 */

struct Amplifiers
{
    //gain
    float gain = 100;
    //linearity
    char linearity = ')';
    //thd
    float thd = 0.002f;
    //class type
    char classType = 'A';
    //caracter
    int caracter = 0;
    
    struct ColorType
    {
        int age;
        float depth;

        void createHarmonics(int harmonicType);
    };

    //amplify
    float amplify(float incomingSignal);
    //distort
    float distort(float toneFrequency);
    //color
    float color(ColorType japaneseVintage);
};

/*
10)synthesizer
5 properties:
    1)oscillators
    2)wave shapers
    3)filters
    4)modulators
    5)amplifiers
3 things it can do:
    1)basic sounds
    2)pads
    3)drums
 */
 
struct Synthesizer
{
    //oscillators
    Oscillators osc1;
    //WaveShapers
    WaveShapers waveshaper1;
    // filters
    Filters filter1;
    //modulators
    Modulators lfo1;
    //amplifiers
    Amplifiers vca1;
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
