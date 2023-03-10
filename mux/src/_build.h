/*! \file _build.h
 * \brief Build identification and version info.
 *
 */

#ifndef _BUILD_H
#define _BUILD_H

extern char szBuildNum[];
#define MUX_BUILD_NUM szBuildNum

extern char szBuildDate[];
#define MUX_BUILD_DATE szBuildDate

#define MUX_VERSION       "2.13.0.4"         // Version number
#define MUX_RELEASE_DATE  "2022-MAR-18"      // Source release date

// Define if this release is qualified as ALPHA or BETA.
//
#define ALPHA
//#define BETA

#endif //!_BUILD_H
