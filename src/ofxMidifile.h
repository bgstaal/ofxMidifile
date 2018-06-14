#pragma once
#include "MidiFile.h"
#include "ofConstants.h"

class ofxMidifile
{
protected:
	
	smf::MidiFile _midifile;
	bool _isRead;
	
public:
	
	virtual bool load(std::filesystem::path path);
	smf::MidiFile &get();
	
};
