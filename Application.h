#pragma once
//
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Include/MainFrame.h"
//
class PracticeApplication : public JUCEApplication
{
public:
   PracticeApplication(void) {}
   ~PracticeApplication(void) override {}
   //
   const String getApplicationName(void) override { return ProjectInfo::projectName; }
   const String getApplicationVersion(void) override { return ProjectInfo::versionString; }
   bool moreThanOneInstanceAllowed(void) override { return true; }
   //
   void initialise(const String&) override
   {
      mainFrame.reset(new MainFrame(getApplicationName()));
   }
   //
   void shutdown(void) override { mainFrame = nullptr; }
   //
   void systemRequestedQuit(void) override { quit(); }
   void anotherInstanceStarted(const String&) override {}
   //
private:
   std::unique_ptr<MainFrame> mainFrame;
};
//
START_JUCE_APPLICATION(PracticeApplication)
