/*
  ==============================================================================

    ControlBarComponent.cpp
    Created: 12 Feb 2019 10:53:55am
    Author:  nigel

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControlBarComponent.h"

//==============================================================================
ControlBarComponent::ControlBarComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

ControlBarComponent::~ControlBarComponent()
{
}

void ControlBarComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
    auto area = getLocalBounds();

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRoundedRectangle (0.0,0.0,area.getWidth(),area.getHeight(), 20, 5);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("ControlBarComponent", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void ControlBarComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
