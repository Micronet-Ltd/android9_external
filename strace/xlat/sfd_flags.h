/* Generated by ./xlat/gen.sh from ./xlat/sfd_flags.in; do not edit. */
#if defined SFD_CLOEXEC || defined O_CLOEXEC
#if !(defined(SFD_CLOEXEC) || (defined(HAVE_DECL_SFD_CLOEXEC) && HAVE_DECL_SFD_CLOEXEC))
# define SFD_CLOEXEC O_CLOEXEC
#endif
#endif
#if !(defined(SFD_NONBLOCK) || (defined(HAVE_DECL_SFD_NONBLOCK) && HAVE_DECL_SFD_NONBLOCK))
# define SFD_NONBLOCK O_NONBLOCK
#endif

#ifdef IN_MPERS

# error static const struct xlat sfd_flags in mpers mode

#else

static
const struct xlat sfd_flags[] = {
#if defined SFD_CLOEXEC || defined O_CLOEXEC
 XLAT(SFD_CLOEXEC),
#endif
 XLAT(SFD_NONBLOCK),
 XLAT_END
};

#endif /* !IN_MPERS */