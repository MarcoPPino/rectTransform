#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup(int, int);
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
    
    ofRectangle rec;
    ofRectangle corner1, corner2, corner3, corner4;
    ofRectangle side1, side2, side3, side4;
    
    int initSize, cornerSize, sideSize, borderSize;
    int ofsetX, ofsetY;
    int startWidth, startHeight;
    
    bool insideCorner1 = false;
    bool insideCorner2 = false;
    bool insideCorner3 = false;
    bool insideCorner4 = false;
    
    bool insideSide1 = false;
    bool insideSide2 = false;
    bool insideSide3 = false;
    bool insideSide4 = false;
    
    bool insideHandle = false;
    bool insideGlobal = false;
    bool shiftPressed = false;
    
		
};
