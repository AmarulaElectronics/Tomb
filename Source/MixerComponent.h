/*
  ==============================================================================

    MixerComponent.h
    Created: 12 Feb 2019 10:01:12am
    Author:  nigel

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class MixerComponent    : public Component
{
public:
    MixerComponent();
    ~MixerComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MixerComponent)
};
