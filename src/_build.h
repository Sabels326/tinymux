// _build.h
//
// $Id: _build.h,v 1.36 2001-03-31 04:51:18 sdennis Exp $
//
// MUX 2.0
// Copyright (C) 1998 through 2000 Solid Vertical Domains, Ltd. All
// rights not explicitly given are reserved. Permission is given to
// use this code for building and hosting text-based game servers.
// Permission is given to use this code for other non-commercial
// purposes. To use this code for commercial purposes other than
// building/hosting text-based game servers, contact the author at
// Stephen Dennis <sdennis@svdltd.com> for another license.
//
#ifndef MUX_BUILD_NUM
extern char szBuildNum[];
#define MUX_BUILD_NUM szBuildNum
#endif // MUX_BUILD_NUM

#ifndef MUX_BUILD_DATE
extern char szBuildDate[];
#define MUX_BUILD_DATE szBuildDate
#endif // MUX_BUILD_DATE

#define MUX_VERSION       "2.0.20.306"  // Version number
#define PATCHLEVEL         3            // Patch sequence number
#define MUX_RELEASE_DATE  "2000-MAR-30" // Source release date

//#define BETA               1          // Define if a BETA release
