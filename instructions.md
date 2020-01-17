Programming for Engineers Portfolio : Quarter 3
===============================================

This repository both describes the Q3 portfolio exercises, and
is the place in which you do them.

If you are reading this on:

http://github.com/ELEC40004/elec40004-2019-q3-portfolio-ytc19-master

then you are looking at the "master" copy, which only you can see, but
you can't change it either. The 2nd and 3rd sets will show up in the
same repo too as commits alongside the first set.

- [Set1](s1 : First set)

If there are any other updates then they will also appear in your master
directory - no-one will push changes direct into `master` on your
private repo.

Your private repository is at:

http://github.com/ELEC40004/elec40004-2019-q3-portfolio-ytc19-private

To start with this will be empty, but you have read and write access
to it.

Submission
----------

Submission of this portfolio will be primarily via github. You will nominate
a specific _commit_ of your repo via a hash (a short hexadecimal code), which
will then identify the unique point in your repo's history you want to commit.

There will also be a backup route for submission of a zipped repo via blackboard,
but this is only for disaster recovery.

Your repo in github is pretty well protected:

- No-one else can access it.
- It is backed up to multiple locations by github.
- As far as I'm aware (?) github has never lost any data, though they have occasionally
  ban-deleted repos for spam. If they ban-delete all of ELEC40004 it will be interesting,
  though there are mitigations in place.

The only thing that can really threaten your repo is user error, particularly
"unsafe" commands like "git push --force". So if you ever worry about
a git command doing something bad, then it is a good idea to take a
copy/snapshot of the entire git repository, including the hidden `.git` directory.

Note that every single repo can be it's own perfect backup, including
all history. You just need to `pull` to get the latest changes. You
may find this useful for transferring work in and out of virtual machines.
