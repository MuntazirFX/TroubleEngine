# TroubleEngine

Joymania *In Trouble* engine (not Xash / GoldSrc).

## Desktop
```bash
cmake -S . -B build && cmake --build build
./build/trouble -version
```

## iOS IPA
Actions → **iOS IPA** → artifact `TroubleEngine-ipa` / `TroubleEngine.ipa`.

That IPA is the **Santa-ios** Metal app (title menu + level viewer + `xmas.xpk`), packaged from this repo's workflow. Unsigned — install with Sideloadly / SideStore.

https://github.com/MuntazirFX/TroubleEngine/actions
