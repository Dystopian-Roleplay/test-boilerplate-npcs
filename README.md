# test-boilerplate-npcs

[![sampctl](https://shields.southcla.ws/badge/sampctl-test--boilerplate--npcs-2f2f2f.svg?style=for-the-badge)](https://github.com/ScavengeSurvive/test-boilerplate-npcs)

A quick testing/development library that provides 6 NPCs to test gameplay
mechanics such as items, weapons and interactions with.

This library also includes
[ScavengeSurvive/test-boilerplate](https://github.com/ScavengeSurvive/test-boilerplate)
so check out the readme for that package for information on the pre-set spawn
location and coordinates etc.

[![Imgur](https://i.imgur.com/tefGoeE.gif)](https://i.imgur.com/tefGoeE.gif)

## Installation

Simply install to your project as a development dependency:

```bash
sampctl package install --dev ScavengeSurvive/test-boilerplate-npcs
```

Include in your code and begin using the library:

```pawn
#include <test-boilerplate-npcs>
```

## Usage

Once the library is installed as a `--dev` dependency, include it in your
demo-test script then simply `sampctl package run` your package to be spawned at
Area-69 with 6 NPCs ready to be tested with.
