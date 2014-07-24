/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (800, 800);
    
    ColorSelectorWindow* csw = new ColorSelectorWindow();
    windows.add(csw);
    csw->setResizable (true, true);
    csw->setUsingNativeTitleBar (true);
    
    ToolWindow* tw = new ToolWindow();
    windows.add(tw);
    tw->setResizable(true, true);
    tw->setUsingNativeTitleBar(true);
    
    tw->setVisible(true);
    csw->setVisible (true);
    
    locus = *new std::vector<Point<int>>();
    
    
    
    brushRadius = 1;
    drawingLine = false;
}

MainContentComponent::~MainContentComponent()
{
    
    std::cout << windows.size() << std::endl;
    for (int i = 0; i < windows.size(); ++i)
        windows.getReference(i).deleteAndZero();
    windows.clear();
    
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xffffffff));
    
    int l = locus.size();
    g.setColour (Colours::red);
    
    for(int i=0; i< l; ++i ){
        g.fillEllipse(locus[i].x,locus[i].y,brushRadius,brushRadius);
    }
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::mouseUp (const MouseEvent& event){
    
}
void MainContentComponent::mouseDown (const MouseEvent& event){
    
}
void MainContentComponent::mouseMove (const MouseEvent& event){
    std::cout << "Move" << event.getScreenX() << std::endl;
    drawingLine = false;
}

void MainContentComponent::mouseDoubleClick (const MouseEvent& event){
    locus.clear();
    repaint();
}


void MainContentComponent::mouseDrag (const MouseEvent& event){
    
    Point<int> p = event.getPosition();
    Point<int> l = *new Point<int>();
    if(!drawingLine || locus.size() == 0){
        l = p;
    } else {
        l = locus.back();
    }
    float dist = p.getDistanceFrom(l) / brushRadius;
    if(dist > 0.5){
        Point<float> unit;
        unit.x = p.x - l.x;
        unit.y = p.y - l.y;
        unit /= dist;
        dist++;
        for(float i=0.0;i < dist;i+=0.5){
            locus.push_back(p - *new Point<int>(unit.x*i,unit.y*i));
        }
    }
    locus.push_back(p);
    repaint();
    drawingLine = true;
}