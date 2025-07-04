import os
import sys

if len(sys.argv) != 2:
    print(
        '''Usage :
        python master.py build 
        python master.py run
        python master.py brun
        python master.py binlist'''
    )
    exit(1)

def build():
    os.system('cmake -S . -B build -G "Unix Makefiles"')
    os.system('cd build && make')

def run():
    if sys.platform == 'linux':
        os.system('cd build/bin && ./cpp-win-template')
    else:
        os.system('cd build/bin && .\\cpp-win-template')

def binlist():
    print('\n'.join([f'- {item}' for item in os.listdir('build/bin')])) 

action = sys.argv[1]

if action == 'build':
    build()
    exit(0)
if action == 'run':
    run()
    exit(0)
if action == 'brun':
    build()
    run()
    exit(0)
if action == 'binlist':
    binlist()

