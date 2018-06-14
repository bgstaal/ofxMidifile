#include "ofxMidifile.h"
#include "ofUtils.h"
#include "ofLog.h"


bool ofxMidifile::load(std::filesystem::path path)
{
	_isRead = _midifile.read(ofToDataPath(path));
	
	if (!_isRead)
	{
		ofLogError() << "error reading midifile with path: " << path;
		return false;
	}
	
	return true;
}

smf::MidiFile &ofxMidifile::get()
{
	return _midifile;
}
