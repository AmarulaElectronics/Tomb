/*
  ==============================================================================

    MixerComponent.cpp
    Created: 12 Feb 2019 10:01:12am
    Author:  nigel

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MixerComponent.h"

//==============================================================================
MixerComponent::MixerComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

MixerComponent::~MixerComponent()
{
}

void MixerComponent::paint (Graphics& g)
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

    g.setColour (Colours::blue);
    g.setFont (24.0f);
    g.drawText ("MixerComponent", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void MixerComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
