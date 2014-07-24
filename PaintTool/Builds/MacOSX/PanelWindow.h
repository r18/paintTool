//
//  PanelWindow.h
//  PaintTool
//
//  Created by Kentaro Teramoto on 2014/07/23.
//
//

#ifndef __PaintTool__PanelWindow__
#define __PaintTool__PanelWindow__

#include <iostream>

#endif /* defined(__PaintTool__PanelWindow__) */

#include "../JuceLibraryCode/JuceHeader.h"

class ToolWindow : public DocumentWindow {
public:
    ToolWindow();
    ~ToolWindow();
    void showToolWindow();
private:
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ToolWindow)

};

class ColorSelectorWindow: public DocumentWindow {
public:
    ColorSelectorWindow();
    ~ColorSelectorWindow();
    void showColorSelectorWindow();
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ColorSelectorWindow)

    
};