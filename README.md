# cbase ![Stars](https://img.shields.io/github/stars/realTristan/cbase?color=brightgreen) ![Watchers](https://img.shields.io/github/watchers/realTristan/cbase?label=Watchers)
![banner](https://github.com/realTristan/cbase/assets/75189508/7394bbc9-6b29-4afa-bb9b-79f75be26145)


Convert decimal to binary, hex, octal, etc. and vice versa! Numeral representation concepts learned in our CIS*1910 class.

## Todo
- [ ] Convert from base b to base c
- [ ] Add bases
- [ ] Multiply bases

## Example
```bash
Enter a number: 289423
Enter a base: 16

Decimal to base result: 46A8F
Base to decimal result: 289423
```

### How to run locally
Run the following in the terminal of the root dir. (with the Makefile)  or in the docker container.
```
$ make
```

### How to test locally
Run the following in the terminal of the root dir. (with the Makefile) or in the docker container.
```
$ make testing
```

### How to run with docker
Run the following in the terminal of the root dir. (with the Dockerfile)
```
$ docker build -t cbase .
$ docker run -it --rm --name cbase cbase
$ make
```

# License
MIT License

Copyright (c) 2023 Simpson Computer Technologies Research

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
