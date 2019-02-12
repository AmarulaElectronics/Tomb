/*
  ==============================================================================

    TrackInspectorComponent.h
    Created: 12 Feb 2019 10:01:12am
    Author:  nigel

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TrackInspectorComponent    : public Component
{
public:
    TrackInspectorComponent();
    ~TrackInspectorComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    //GroupComponent trackInspector;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TrackInspectorComponent)
};
