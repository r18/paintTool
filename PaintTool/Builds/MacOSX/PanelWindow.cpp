//
//  PanelWindow.cpp
//  PaintTool
//
//  Created by Kentaro Teramoto on 2014/07/23.
//
//

#include "PanelWindow.h"
ToolWindow::ToolWindow() :
    DocumentWindow("Tools",*new juce::Colour(0,0,0),true)
{
    setSize(100, 300);
}
ToolWindow::~ToolWindow(){
}
void ToolWindow::showToolWindow(){
    
}

ColorSelectorWindow::ColorSelectorWindow() :
    DocumentWindow("Color",*new juce::Colour(0,0,0),true)
{
    setSize(100, 200);
}

ColorSelectorWindow::~ColorSelectorWindow(){
}

void ColorSelectorWindow::showColorSelectorWindow(){
    
    
}