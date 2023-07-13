#pragma once
//
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Include/MainComponent.h"
//
class MainFrame : public DocumentWindow
{
public:
   //
   MainFrame(const String& name);
   //
   void closeButtonPressed(void) override { JUCEApplication::getInstance()->systemRequestedQuit(); }
   //
   MainComponent& getMainComponent(void) { return *dynamic_cast<MainComponent*> (getContentComponent()); }
   //
private:
   JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainFrame)
};