#include "PluginEditor.h"
#include "PluginProcessor.h"
LiveCutRAudioProcessorEditor::LiveCutRAudioProcessorEditor (LiveCutRAudioProcessor& p)
: juce::AudioProcessorEditor (&p) { setSize(500,220); }
void LiveCutRAudioProcessorEditor::paint(juce::Graphics& g){
    g.fillAll(juce::Colour(0xFF0A0E14));
    g.setColour(juce::Colour(0xFFD7E3EC));
    g.setFont(20.0f);
    g.drawText("LiveCutR — Shakti Project", getLocalBounds(), juce::Justification::centred, false);
}
void LiveCutRAudioProcessorEditor::resized(){}
