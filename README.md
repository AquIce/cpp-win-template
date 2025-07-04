# Building

To build, use this command from the root of the project :
```sh
cmake -S . -B build -G "Unix Makefiles"
```

Then, Make it using this command :
```sh
cd build && make && cd ..
```

And run it using :
```sh
./build/bin/nrlauncher
```
