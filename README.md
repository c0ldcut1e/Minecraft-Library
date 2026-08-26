# Minecraft-Library

A header-only C++17 library that describes the internals of **Minecraft: Wii U Edition**, reconstructed from the `Minecraft.Client.rpx` and its symbol map.

It is a set of headers that let your own code communicate with the game already running in memory: recovered class layouts with their member offsets, and static wrappers that call the game's own functions at their known addresses.

## Usage

The library is header-only. Add the repository root and the `minecraft/` directory to your include path,
then include the umbrella header:

```cpp
#include <minecraft/Minecraft.hpp>

void onTick()
{
    mc::Minecraft *game = mc::Minecraft::GetInstance();
    if (game == nullptr)
        return;

    // ...
}
```

Individual headers can also be included directly if you would rather not pull in the whole tree.

## Requirements

- C++17, compiled 32-bit big-endian PowerPC for the Wii U (`-m32 -fshort-wchar`).
- Wii U SDK headers (e.g. [wut](https://github.com/devkitPro/wut)) are optional. `PlatformTypes.hpp` uses `__has_include` and falls back to its own definitions when they are absent.

## Other

All pointers used in this library (for example addresses that point at instances of classes) are based on what they are in the `Minecraft.Client.rpx`. These pointers require an offset when this library is used on an actual Wii U console, not an emulator like Cemu. This offset is automatically applied by default, so if you are planning to use this library on Cemu, it is recommended to have the `PLATFORM_CEMU` macro set in `mlink/MLink.hpp`.

## License

MIT. See [LICENSE](LICENSE).

Not affiliated with or endorsed by Mojang, Microsoft, 4J Studios, or Nintendo.
