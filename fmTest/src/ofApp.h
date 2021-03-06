#pragma once

#include "ofMain.h"
#include "ofxMaxim.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	

		maxiClock clock;
		maxiEnv ampEnv;
		maxiEnv modEnv;
		double maxMod;
		double ampExp;
		double modExp;

		ofxMaxiOsc car;
		ofxMaxiOsc mod;
		int trigger = 0;

		int	bufferSize;
		int	sampleRate;
		void audioOut(float * output, int bufferSize, int nChannels);
		ofSoundStream soundStream;
};
