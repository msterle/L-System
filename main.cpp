#include <iostream>
#include <unordered_map>

using namespace std;


// generic

typedef void (Action) ();

struct Rule {
	string replace;
	void (*action)();
};

typedef unordered_map<char, Rule> Grammar;

class LSystem {
protected:
	Grammar grammar;
	string axiom;
	string value;
public:
	LSystem(string axiom, Grammar grammar) : grammar(grammar), axiom(axiom), value(axiom) { }
	void iterate() {
		string newValue;
		for(string::iterator it = value.begin(); it != value.end(); ++it)
			newValue += grammar[*it].replace;
		value = newValue;
	}
	void iterate(int n) {
		for(int i = 0; i < n; ++i)
			iterate();
	}
	string getValue() { return value; }	
};



// wikitree

float angle = 25;

void Xforward() {

}

void Xleft() {

}

void Xright() {

}

void Xpush() {

}

void Xpop() {

}

void Xnoop() {

}



int main() {
	
	LSystem wikitree(
		"X",
		Grammar {
			// variables
			{
				'X',
				Rule {
					.replace = "F−[[X]+X]+F[+FX]−X",
					.action = Xforward
				}
			},
			{
				'F',
				Rule {
					.replace = "FF",
					.action = Xnoop
				}
			},
			// constants
			{
				'+',
				Rule {
					.replace = "+",
					.action = Xleft
				}
			},
			{
				'-',
				Rule {
					.replace = "-",
					.action = Xright
				}
			},
			{
				'[',
				Rule {
					.replace = "[",
					.action = Xpush
				}
			},
			{
				']',
				Rule {
					.replace = "]",
					.action = Xpop
				}
			}
		});
	
	cout << "Seed" << endl << "----" << endl << wikitree.getValue() << endl << endl;

	for(int i = 1; i < 5; i++) {
		wikitree.iterate();
		cout << "n = " << i << endl << "----" << endl << wikitree.getValue() << endl << endl;
	}

}