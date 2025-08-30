cmake_minimum_required(VERSION 3.22)
project(LiveCutR VERSION 1.1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(APPLE)
  set(CMAKE_OSX_DEPLOYMENT_TARGET "10.15" CACHE STRING "" FORCE)
  set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64" CACHE STRING "" FORCE)
endif()
include(FetchContent)
FetchContent_Declare(juce GIT_REPOSITORY https://github.com/juce-framework/JUCE.git GIT_TAG 8.0.5)
FetchContent_MakeAvailable(juce)
juce_add_plugin(LiveCutR
    COMPANY_NAME "Shakti Project"
    BUNDLE_ID com.shaktiproject.livecutr
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    COPY_PLUGIN_AFTER_BUILD TRUE
    PLUGIN_MANUFACTURER_CODE Shkt
    PLUGIN_CODE LcR1
    FORMATS VST3 AU
    PRODUCT_NAME "LiveCutR"
)
juce_generate_juce_header(LiveCutR)
target_sources(LiveCutR PRIVATE
    Source/PluginProcessor.h
    Source/PluginProcessor.cpp
    Source/PluginEditor.h
    Source/PluginEditor.cpp
)
target_compile_definitions(LiveCutR PRIVATE JUCE_WEB_BROWSER=0 JUCE_USE_CURL=0 JUCE_VST3_CAN_REPLACE_VST2=0)
target_link_libraries(LiveCutR PRIVATE juce::juce_audio_utils juce::juce_dsp)
