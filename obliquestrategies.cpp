#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DRAW arg=="d"
#define QUIT arg=="q"

using namespace std;

void prompt() {

srand (time(NULL));
int random = rand() % 114;
string arg;
	
string strategy[115];

strategy[0]= "Abandon normal instruments";
strategy[1]= "Accept advice";
strategy[2]= "Accretion";
strategy[3]= "A line has two sides";
strategy[4]= "Allow an easement (an easement is the abandonment of a stricture)";
strategy[5]= "Are there sections? Consider transitions";
strategy[6]= "Ask people to work against their better judgement";
strategy[7]= "Ask your body";
strategy[8]= "Assemble some of the instruments in a group and treat the group";
strategy[9]= "Balance the consistency principle with the inconsistency principle";
strategy[10]= "Be dirty";
strategy[11]= "Breathe more deeply";
strategy[12]= "Bridges -build -burn";
strategy[13]= "Cascades";
strategy[14]= "Change instrument roles";
strategy[15]= "Change nothing and continue with immaculate consistency";
strategy[16]= "Children's voices -speaking -singing";
strategy[17]= "Cluster analysis";
strategy[18]= "Consider different fading systems";
strategy[19]= "Consult other sources -promising -unpromising";
strategy[20]= "Convert a melodic element into a rhythmic element";
strategy[21]= "Courage!";
strategy[22]= "Cut a vital connection";
strategy[23]= "Decorate, decorate";
strategy[24]= "Define an area as `safe' and use it as an anchor";
strategy[25]= "Destroy -nothing -the most important thing";
strategy[26]= "Discard an axiom";
strategy[27]= "Disconnect from desire";
strategy[28]= "Discover the recipes you are using and abandon them";
strategy[29]= "Distorting time";
strategy[30]= "Do nothing for as long as possible";
strategy[31]= "Don't be afraid of things because they're easy to do";
strategy[32]= "Don't be frightened of cliches";
strategy[33]= "Don't be frightened to display your talents";
strategy[34]= "Don't break the silence";
strategy[35]= "Don't stress one thing more than another";
strategy[36]= "Do something boring";
strategy[37]= "Do the washing up";
strategy[38]= "Do the words need changing?";
strategy[39]= "Do we need holes?";
strategy[40]= "Emphasize differences";
strategy[41]= "Emphasize repetitions";
strategy[42]= "Emphasize the flaws";
strategy[43]= "Faced with a choice, do both (given by Dieter Rot)";
strategy[44]= "Feedback recordings into an acoustic situation";
strategy[45]= "Fill every beat with something";
strategy[46]= "Get your neck massaged";
strategy[47]= "Ghost echoes";
strategy[48]= "Give the game away";
strategy[49]= "Give way to your worst impulse";
strategy[50]= "Go slowly all the way round the outside";
strategy[51]= "Honor thy error as a hidden intention";
strategy[52]= "How would you have done it?";
strategy[53]= "Humanize something free of error";
strategy[54]= "Imagine the music as a moving chain or caterpillar";
strategy[55]= "Imagine the music as a set of disconnected events";
strategy[56]= "Infinitesimal gradations";
strategy[57]= "Intentions -credibility of -nobility of -humility of";
strategy[58]= "Into the impossible";
strategy[59]= "Is it finished?";
strategy[60]= "Is there something missing?";
strategy[61]= "Is the tuning appropriate?";
strategy[62]= "Just carry on";
strategy[63]= "Left channel, right channel, centre channel";
strategy[64]= "Listen in total darkness, or in a very large room, very quietly";
strategy[65]= "Listen to the quiet voice";
strategy[66]= "Look at a very small object, look at its centre";
strategy[67]= "Look at the order in which you do things";
strategy[68]= "Look closely at the most embarrassing details and amplify them";
strategy[69]= "Lowest common denominator check -single beat -single note -single riff";
strategy[70]= "Make a blank valuable by putting it in an exquisite frame";
strategy[71]= "Make an exhaustive list of everything you might do and do the last thing on the list";
strategy[72]= "Make a sudden, destructive unpredictable action; incorporate";
strategy[73]= "Mechanicalize something idiosyncratic";
strategy[74]= "Mute and continue";
strategy[75]= "Only one element of each kind";
strategy[76]= "(Organic) machinery";
strategy[77]= "Overtly resist change";
strategy[78]= "Put in earplugs";
strategy[79]= "Remember those quiet evenings";
strategy[80]= "Remove ambiguities and convert to specifics";
strategy[81]= "Remove specifics and convert to ambiguities";
strategy[82]= "Repetition is a form of change";
strategy[83]= "Reverse";
strategy[84]= "Short circuit (example: a man eating peas with the idea that they will";
strategy[85]= "improve his virility shovels them straight into his lap)";
strategy[86]= "Shut the door and listen from outside";
strategy[87]= "Simple subtraction";
strategy[88]= "Spectrum analysis";
strategy[89]= "Take a break";
strategy[90]= "Take away the elements in order of apparent non-importance";
strategy[91]= "Tape your mouth (given by Ritva Saarikko)";
strategy[92]= "The inconsistency principle";
strategy[93]= "The tape is now the music";
strategy[94]= "Think of the radio";
strategy[95]= "Tidy up";
strategy[96]= "Trust in the you of now";
strategy[97]= "Turn it upside down";
strategy[98]= "Twist the spine";
strategy[99]= "Use an old idea";
strategy[100]= "Use an unacceptable color";
strategy[101]= "Use fewer notes";
strategy[102]= "Use filters";
strategy[103]= "Use \"unqualified\" people";
strategy[104]= "Water";
strategy[105]= "What are you really thinking about just now? Incorporate";
strategy[106]= "What is the reality of the situation?";
strategy[107]= "What mistakes did you make last time?";
strategy[108]= "What would your closest friend do?";
strategy[109]= "What wouldn't you do?";
strategy[110]= "Work at a different speed";
strategy[111]= "You are an engineer";
strategy[112]= "You can only make one dot at a time";
strategy[113]= "You don't have to be ashamed of using your own ideas";
strategy[114]= "[blank white card]";
	
	cout << ">>>";
	cin >> arg;
	
	if(DRAW) {
		cout << "\nOblique Strategy #" << random+1 << ":\n";
		cout << "\"" << strategy[random] << "\"\n\n";
		prompt();
	}
	else if (QUIT) {
	    return;	
	}
	else {
	    cout << "\n\n***Invalid Argument.***\n";
	    cout << "d: draw a card\n";
	    cout << "q: quit\n\n\n";
		prompt();
	}
	
}

int main() {
		cout << "\n\n==========================\n";
		cout << "=== Oblique Strategies ===\n";
	    cout << "==========================\n";
	    cout << "d: draw a card\n";
	    cout << "q: quit\n\n\n";
	    
	    prompt();

return 0;
	
}

