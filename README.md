# TroubleEngine

**TroubleEngine** is a small native engine for Joymania *In Trouble* games:
Santa Claus in Trouble (2002), …again! (2004), Rosso Rabbit in Trouble (2003).

Not Xash3D. Not GoldSrc. Not AetherEngine. Not a decompile of the Windows EXE.

Code library: [Graphic-DirectX-](https://github.com/MuntazirFX/Graphic-DirectX-)

| Module | Role |
|---|---|
| FS | XPK (`xmas.xpk`, `bb.xpk`) |
| Model | DirectX `.x` |
| World | custom `.dat` + `elements.txt` |
| Ref | software D3D8-style raster |
| Game | presents / timer / score |

```bash
cmake -S . -B build && cmake --build build
./build/trouble -version
./build/trouble -model samples/cube.x -o cube.ppm
```

Original 2002 credits: Petr Vlček, Peter Ohlmann, Adam Sprys — Joymania / CDV.
