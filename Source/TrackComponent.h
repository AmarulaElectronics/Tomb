/*
  ==============================================================================

    TrackComponent.h
    Created: 12 Feb 2019 9:54:15am
    Author:  nigel

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TrackComponent    : public Component
{
public:
    TrackComponent();
    ~TrackComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TrackComponent)
};
