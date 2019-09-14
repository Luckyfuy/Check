@echo off
:loop
    rand.exe > std.in
    my.exe < std.in > my.out
    std.exe < std.in > std.out
    fc my.out std.out /n
    if not errorlevel 1 goto loop
    pause
    goto loop