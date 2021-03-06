#pragma once

#include "ofEvents.h"
#include "ofLog.h"
#include "FboSource.h"
#include "Application.h"
#include "SurfaceType.h"
#include "Mode.h"

class ofxPiMapper {
	public:
		ofxPiMapper();

		void setup();
		void update();
		void draw();
	
		void keyPressed(int key);
		void keyReleased(int key);
	
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseDragged(int x, int y, int button);
	
		void registerFboSource(ofx::piMapper::FboSource & fboSource);
		void registerFboSource(ofx::piMapper::FboSource * fboSource);
	
		// Application
		void toggleInfo();
	
		// Modes
		void setMode(ofx::piMapper::Mode m);
		ofx::piMapper::Mode getMode();
	
		// Project
		void saveProject();
		bool loadProject(string filename);
	
		// Presets
		unsigned int getNumPresets();
		unsigned int getActivePresetIndex();
		void setPreset(unsigned int i);
		void setNextPreset();
		void cloneActivePreset();
		void eraseActivePreset();
	
		// Surfaces, active preset
		unsigned int getNumSurfaces();
		void selectSurface(int i);
		void selectNextSurface();
		void selectPrevSurface();
		void selectNextVertex();
		void selectPrevVertex();
		void togglePauseForSurface(unsigned int i);
		void moveSelection(ofVec2f by);
		void createSurface(ofx::piMapper::SurfaceType type);
		void eraseSurface(int i);

	private:
		ofx::piMapper::Application _application;
};
