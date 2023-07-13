#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class MainComponent : public Component
{
public:
    MainComponent(void);
    ~MainComponent(void) override;
    //
    void paint(Graphics&) override;
    void resized(void) override;


    //
private:
    /*MainComponent& Component;

    void dial();

    juce::PreferencesPanel Panel;*/
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};