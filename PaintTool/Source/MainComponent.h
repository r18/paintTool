/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PanelWindow.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component
{
public:
    //==============================================================================
    MainContentComponent();
    ~MainContentComponent();

    void paint (Graphics&);
    void resized();
    void mouseUp (const MouseEvent& event);
    void mouseDown (const MouseEvent& event);
    void mouseMove (const MouseEvent& event);
    void mouseDrag (const MouseEvent& event);
    void mouseDoubleClick (const MouseEvent& event);

    Array<Component::SafePointer<Component>> windows;
    std::vector<Point<int>> locus;
    std::vector<Point<int>>::iterator locusIndex,locusEnd;
    
    int brushRadius;
    Boolean drawingLine;
private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
