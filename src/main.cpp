#include "gdx/Host.h"
#include "gdx/EngineName.h"
#include <iostream>

int main(int argc, char** argv) {
    gdx::HostConfig cfg;
    for (int i = 1; i < argc; ++i) {
        std::string a = argv[i];
        if (a == "-pak" && i + 1 < argc) cfg.archive = argv[++i];
        else if (a == "-map" && i + 1 < argc) cfg.levelDat = argv[++i];
        else if (a == "-model" && i + 1 < argc) cfg.meshX = argv[++i];
        else if (a == "-o" && i + 1 < argc) cfg.ppmOut = argv[++i];
        else if (a == "-version" || a == "-v") {
            std::cout << gdx::kEngineTag << "\n";
            return 0;
        }
    }
    if (cfg.meshX.empty()) cfg.meshX = "samples/cube.x";
    gdx::Host host;
    if (!host.boot(cfg)) {
        std::cerr << host.log;
        return 2;
    }
    if (!host.frame()) {
        std::cerr << host.log;
        return 3;
    }
    host.ref.savePPM(cfg.ppmOut);
    std::cout << host.log;
    std::cout << "TroubleEngine frame lit=" << host.ref.litPixels() << "\n";
    return 0;
}
