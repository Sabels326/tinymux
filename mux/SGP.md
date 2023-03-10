---
title: TinyMUX 2.13 SGP Minimal DB
date: July 2012
author:
 - Brazil
---

The Sandbox Globals Project(SGP) has been included as part of a minimal
DB with this distribution of TinyMUX.  The current version is 1.0, dated
August 1, 2000, and contains all patches and bugfixes as of 042501.
More information and additional global commands that work with SGP may
be found at:

http://sandbox.erisian.net/sgp/sgpindex.html

Questions about the softcode in use are generally answered at the SGP
website.  There is a web reply form for bug reports, feature requests,
and questions.

# The Basics:

 - Wizard (#1) has the default pasword of 'potrzebie'.

 - Included packages in this minimal DB are the SGP Base Globals v1.0,
   SGP RP Pack Globals, and PLACES.

 - The plushelp.txt and staffhelp.txt files for SGP have been
   installed in the mux2.5/game/text directory.

 - The netmux.conf has been modified to include needed configuration
   options for SGP.

 - The master_room is defined as #2.

 - ALL SGP objects were first installed in the master room.  The Global
   Parent Object (#4) and Places Functions Object (#10) were moved to an
   Auxilary Room (#11).

 - Storage (#3) was created with a random password.  Even though only one
   person knows the password, you should change it.  Storage owns most
   game-wide things to keep things uncluttered for staff and to keep
   things working in the face of staff changes.


# Notes:

 * AS ALWAYS, be sure to read the server documentation.

 * Be sure to read about the softcode.

 * CHANGE the passwords for #1 and #3 immediately.

 * Make frequent backups, especially during phases of active coding or
   building.

Otherwise, enjoy.
