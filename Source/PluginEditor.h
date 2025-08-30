#pragma once
#include <JuceHeader.h>
class LiveCutRAudioProcessor;
class LiveCutRAudioProcessorEditor : public juce::AudioProcessorEditor{
public:
    LiveCutRAudioProcessorEditor (LiveCutRAudioProcessor&);
    ~LiveCutRAudioProcessorEditor() override = default;
    void paint (juce::Graphics&) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LiveCutRAudioProcessorEditor)
};
