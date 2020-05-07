| Traceback (most recent call last):
|   File "/data/work/build-switch/tmp-glibc/work/corei7-64-wrs-linux/vpp-core/20.05-r0/git/src/tools/vppapigen/vppapigen", line 3, in <module>
|     import ply.lex as lex
| ModuleNotFoundError: No module named 'ply'

to run vppapigen, we need python module ply, if there is no ply ,it result fail. we need to add 
/usr/lib/python3.7/site-packages/ply*
to our run enviriment 
