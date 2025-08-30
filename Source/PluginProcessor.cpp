#include "PluginProcessor.h"
#include "PluginEditor.h"
LiveCutRAudioProcessor::LiveCutRAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
: AudioProcessor (BusesProperties().withInput ("Input", juce::AudioChannelSet::stereo(), true)
                                  .withOutput("Output", juce::AudioChannelSet::stereo(), true))
#endif
{}
void LiveCutRAudioProcessor::prepareToPlay(double sampleRate,int){ sr=sampleRate; }
bool LiveCutRAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const{
    return layouts.getMainInputChannelSet()==juce::AudioChannelSet::stereo()
        && layouts.getMainOutputChannelSet()==juce::AudioChannelSet::stereo();
}
void LiveCutRAudioProcessor::processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&){}
juce::AudioProcessorEditor* LiveCutRAudioProcessor::createEditor(){ return new LiveCutRAudioProcessorEditor(*this); }
