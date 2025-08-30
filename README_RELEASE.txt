# macOS Cloud Builder with GitHub Release

Run from GitHub → Actions → "macOS VST3 + AU Build & Release".
Enter a tag (e.g. v1.1.0) and start the workflow.

It builds the plugin, bundles:
- LiveCutR.vst3
- LiveCutR.component
- Presets/

Then zips them as LiveCutR-<tag>.zip and **publishes a GitHub Release**
with that zip attached.

You can also download the zip from the run's Artifacts.
