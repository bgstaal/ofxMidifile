#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	_midifile.load("test.mid");
	
	ofLog() << "duration in ticks: " << _midifile.get().getFileDurationInTicks() << " ticks pr quarter: " << _midifile.get().getTicksPerQuarterNote();
	
	
	for (int i = 0; i < _midifile.get().getNumTracks(); i++)
	{
		int n = _midifile.get().getNumEvents(i);
		ofLog() << "-------------------------- track " << i;
		
		for (int j = 0; j < n; j++)
		{
			smf::MidiEvent e = _midifile.get().getEvent(i, j);
			
			ofLog() << "tick:" << e.tick  << " note: " << e.getKeyNumber() << " vel: " << e.getVelocity();
		}
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
