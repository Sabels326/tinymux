/*! \file match.h
 * \brief Routines for parsing arguments that may refer to objects.
 *
 */

#include "copyright.h"

#ifndef MATCH_H
#define MATCH_H

typedef struct match_state MSTATE;
struct match_state
{
    int     confidence;     /* How confident are we?  CON_xx */
    int     count;          /* # of matches at this confidence */
    int     pref_type;      /* The preferred object type */
    bool    check_keys;     /* Should we test locks? */
    dbref   absolute_form;  /* If #num, then the number */
    dbref   match;          /* What I've found so far */
    dbref   player;         /* Who is performing match */
    UTF8    *string;        /* The string to search for */
};

/* Match functions
 * Usage:
 *  init_match(player, name, type);
 *  match_this();
 *  match_that();
 *  ...
 *  thing = match_result()
 */

extern void init_match(dbref, const UTF8 *, int);
extern void init_match(dbref, const UTF8 *, size_t, int);
extern void init_match_check_keys(dbref, const UTF8 *, int);
extern void init_match_check_keys(dbref, const UTF8 *, size_t, int);
extern void match_player(void);
extern void match_absolute(void);
extern void match_me(void);
extern void match_here(void);
extern void match_possession(void);
extern void match_neighbor(void);
extern void match_exit(void);
extern void match_exit_with_parents(void);
extern void match_carried_exit(void);
extern void match_carried_exit_with_parents(void);
extern void match_master_exit(void);
extern void match_everything(int);
extern dbref match_result(void);
extern dbref last_match_result(void);
extern dbref match_status(dbref, dbref);
extern dbref noisy_match_result(void);
extern void save_match_state(MSTATE *);
extern void restore_match_state(MSTATE *);
extern void match_zone_exit(void);
extern dbref match_thing(dbref player, const UTF8 *name);
extern dbref match_thing_quiet(dbref player, const UTF8 *name);
extern dbref match_thing_quiet(dbref player, const UTF8 *name, size_t n);
extern void safe_match_result(dbref it, UTF8 *buff, UTF8 **bufc);

#define MAT_NO_EXITS        1   /* Don't check for exits */
#define MAT_EXIT_PARENTS    2   /* Check for exits in parents */
#define MAT_NUMERIC         4   /* Check for un-#ified dbrefs */
#define MAT_HOME            8   /* Check for 'home' */

#endif // !MATCH_H
