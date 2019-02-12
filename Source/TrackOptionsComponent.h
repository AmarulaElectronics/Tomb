/*
  ==============================================================================

    TrackOptionsComponent.h
    Created: 12 Feb 2019 11:01:03am
    Author:  nigel

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TrackOptionsComponent    : public Component
{
public:
    TrackOptionsComponent();
    ~TrackOptionsComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TrackOptionsComponent)
};
