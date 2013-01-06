#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderProjectApp : public AppBasic {
  public:
    void prepareSettings( Settings *settings );
	void setup();
	void mouseDown( MouseEvent event );
	void update();
	void draw();
    void keyDown( KeyEvent event );
};

void CinderProjectApp::prepareSettings( Settings *settings ){
    settings->setWindowSize( 1200, 600 );
    settings->setFrameRate( 60.0f );
}

void CinderProjectApp::setup() {

}

void CinderProjectApp::mouseDown( MouseEvent event ) {
}

void CinderProjectApp::update() {
}

void CinderProjectApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );
    gl::color(0.5f, 0.5f, 0.5f, 1.0f);
    gl::drawSphere( Vec3f(Vec2f( 600.0f, 300.0f )), 50.0f, 100 );
}

void CinderProjectApp::keyDown( KeyEvent event )
{
    switch( event.getCode() )
    {
        case KeyEvent::KEY_ESCAPE:
            quit();
            break;
    }
}

CINDER_APP_BASIC( CinderProjectApp, RendererGl )
