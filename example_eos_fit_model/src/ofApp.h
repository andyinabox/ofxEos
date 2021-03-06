//
// Copyright (c) 2018 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#pragma once


#include "ofMain.h"
#include "ofxCv.h"
#include "ofxEOS.h"
#include "ofxAssimpModelLoader.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw() override;
    
    
    ofEasyCam cam;
    ofTexture imageWithMesh;
    ofTexture image;
    ofxAssimpModelLoader generatedModel;
    
};
