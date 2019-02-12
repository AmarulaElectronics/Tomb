/*
  ==============================================================================

    ControlBarComponent.h
    Created: 12 Feb 2019 10:53:55am
    Author:  nigel

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ControlBarComponent    : public Component
{
public:
    ControlBarComponent();
    ~ControlBarComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlBarComponent)
};
