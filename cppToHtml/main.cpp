
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

void add_plus_plus(ifstream& in_stream, ofstream& out_stream);
string slideNames[] = {
    "class: 1,  slide: 15 → System Bus Model",
    "class: 2,  slide: 10-12 → Converting Base 10 to Base 2",
    "class: 3,  slide: 11 → Two's Compliment Overflow",
    "class: 4,  slide: 16 → DeMorgan's Theorm",
    "class: 5,  slide: 27 → Fundamental SECDED definitions",
    "class: 6,  slide: 14,17-20 → Draw and explain operation of Gates",
    "class: 7,  slide: 18-20 → Canonical SOP or POS from Truth Tables",
    "class: 8,  slide: 15 → Construct a circuit from a Truth Table",
    "class: 9,  slide: 13-14 → Bubles Matching & Gate Conversion",
    "class: 10,  slide: 19-23 → K Mapping with Don't Cares",
    "class: 11,  slide: 9-11 → Minterms Covered by a Product",
    "class: 11,  slide: 13-18 → K Mapping with Don't Cares",
    "class: 12,  slide: 13 → Speed and Performance",
    "class: 12,  slide: 15 → Measuring Propagation Delay",
    "class: 12,  slide: 16-17 → Static Hazards and fixing them",
    "class: 13,  slide: 5-13 → Quine McClusky - reduced",
    "class: 14,  slide: 5-10 → Decoder, Building Large Decoders, Doing a function with one",
    "class: 14,  slide: 11-13 → Encoder, Priority Encoder",
    "class: 14,  slide: 14-18 → Mulitplexer, Building Large Mulitiplexer, Doing a function with one",
    "class: 14,  slide: 20 → Demultiplexer",
    "class: 14,  slide: 22-23 → Full Adder",
    "class: 14,  slide: 25 → 4 bit ripple carry - adding two numbers",
    "class: 14,  slide: 29 → 4 bit combined Adder/Subtractor",
    "class: 15,  slide: 4 → Comparators",
    "class: 15,  slide: 22-23 → ROM - given a table bill in the connections",
    "class: 15,  slide: 30 → CPLD",
    "class: 15,  slide: 32 → FPGA",
    "class: 20,  slide: 4-6 → D-Type state machine logic design",
    "class: 20,  slide: 10-11 → SR Type state machine logic design (2 state)",
    "class: 21,  slide: 4 → State Reduction Principals",
    "class: 21,  slide: 6 → State Reduction by Inspection",
    "class: 21,  slide: 8-11 → Sequence Detector example (thru Circuit Des)",
    "class: 21,  slide: 21 → Optimal State Design Characteristics",
    "class: 22,  slide: 21 → State Machine Example: Mod 4",
    "class: 22,  slide: 5 → State Machine Example: Serial Adder (JK & D)",
    "class: 23,  slide: 3 → Transmission Gates",
    "class: 23,  slide: 4-6 → Transmission Gates used in Basic Logic",
    "class: 23,  slide: 8-11 → FPGA Basics, Expanded",
    "class: 23,  slide: 12 → Mealey and Moore, yet again...",
};

string slideNumbers[] = {
    "1_15",
    "2_10",
    "2_11",
    "2_12",
    "3_11",
    "4_16",
    "5_27",
    "6_14",
    "6_17",
    "6_18",
    "6_19",
    "6_20",
    "7_18",
    "7_19",
    "7_20",
    "8_15",
    "9_13",
    "9_14",
    "10_19",
    "10_20",
    "10_21",
    "10_22",
    "10_23",
    "11_9",
    "11_10",
    "11_11",
    "11_13",
    "11_14",
    "11_15",
    "11_16",
    "11_17",
    "11_18",
    "12_13",
    "12_15",
    "12_16",
    "12_17",
    "13_5",
    "13_6",
    "13_7",
    "13_8",
    "13_9",
    "13_10",
    "13_11",
    "13_12",
    "13_13",
    "14_5",
    "14_6",
    "14_7",
    "14_8",
    "14_9",
    "14_10",
    "14_11",
    "14_12",
    "14_13",
    "14_14",
    "14_15",
    "14_16",
    "14_17",
    "14_18",
    "14_20",
    "14_22",
    "14_23",
    "14_25",
    "14_29",
    "15_4",
    "15_22",
    "15_23",
    "15_30",
    "15_32",
    "14_22",
    "20_4",
    "20_5",
    "20_6",
    "20_10",
    "20_11",
    "21_4",
    "21_6",
    "21_8",
    "21_9",
    "21_10",
    "21_11",
    "21_21",
    "22_21",
    "22_5",
    "23_3",
    "23_4",
    "23_5",
    "23_6",
    "23_8",
    "23_9",
    "23_10",
    "23_11",
    "23_12",
};

int main()
{
    ofstream myfile;
    myfile.open ("report.html");
    myfile << "<!-- //START -->\n"; //starting html

    //add some html content
    //as an example: if you have array of objects featuring the properties name & value, you can print out a new line for each property pairs like this:
    for (int i=0; i < 93; i++){
		string s = string(slideNumbers[i]);
        	myfile << "<a href=\"images/" << s << ".png\" target=\"_blank\"><img src=\"images/" << slideNumbers[i] << ".png\" alt=\"" << slideNumbers[i] << "\"></a>" << endl;
	}

    myfile << "\n<!-- //END -->";
    myfile.close();

    myfile.open ("report2.html");
    myfile << "<!-- //START -->\n"; //starting html

    for (int i = 0; i < 39; i++){
		myfile << "<br \\>" << slideNames[i] << "<br \\>" << endl;
	}

    myfile << "\n<!-- //END -->";
    myfile.close();
    //ending html

}
