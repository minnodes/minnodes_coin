
Debian
====================
This directory contains files used to package minnodesd/minnodes-qt
for Debian-based Linux systems. If you compile minnodesd/minnodes-qt yourself, there are some useful files here.

## minnodes: URI support ##


minnodes-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install minnodes-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your minnodesqt binary to `/usr/bin`
and the `../../share/pixmaps/minnodes128.png` to `/usr/share/pixmaps`

minnodes-qt.protocol (KDE)

