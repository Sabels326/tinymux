/*! \file _build.h
 * \brief Build identification and version info.
 *
 * $Id$
 *
 */

#ifndef MUX_BUILD_NUM
extern char szBuildNum[];
#define MUX_BUILD_NUM szBuildNum
#endif // MUX_BUILD_NUM

#ifndef MUX_BUILD_DATE
extern char szBuildDate[];
#define MUX_BUILD_DATE szBuildDate
#endif // MUX_BUILD_DATE

#define MUX_VERSION       "2.7.0.4"          // Version number
#define MUX_RELEASE_DATE  "2007-MAR-18"      // Source release date

// Define if this release is qualified as ALPHA or BETA.
//
#define ALPHA
//#define BETA
