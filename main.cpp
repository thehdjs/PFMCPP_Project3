 /*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

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
    
    struct Acut
    {
    float cutDepth = 10;
    float cutLength = 50;

    void hurt(int pain);
    };

    //cut
    void cut(Acut prettyNastyCut);
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
    void cut(Knife::Acut aNewCut); //error message suggested this after I typed it in without Knife:: I guess it lets me borrow types declared in another scope. Will delete if you thik its better tool
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
