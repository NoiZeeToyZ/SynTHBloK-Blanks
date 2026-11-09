// SynTHBloK-Blanks: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelSynTHBloKBlank;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelSynTHBloKBlank);
}
