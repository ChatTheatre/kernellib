
# Live Archive of the DGD Kernel Library (aka `kernellib`)

## What is DGD Kernel Library?

The `kernellib` was designed to serve as a better foundation than previous third-party [LPC mudlibs](https://en.wikipedia.org/wiki/LPMud), and as such would leverage and demonstrate the powerful capabilities of [Dworkin's Game Driver](http://www.dworkin.nl/dgd/) (aka DGD). The original `kernellib` was written by Felix A. Croes (aka @dworkin) in 1993.

This `kernellib` was originally included inside the DGD distribution, but over time it moved into it's own reposistory on [GitHub](https://github.com/dworkin/kernellib).

## What is this fork?

This repository is indended as a "live archive" fork of @dworkin's `kernellib` for the DDG LPC driver, based initially on the "final commit" to that repository 2016-03-5: https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591.

There were changes in the last few years of `kernellib` to add support for @dworkin's new, but non-open source, multi-threaded driver [Hydra](http://www.dworkin.nl/hydra/) that removed features from earlier versions of the `kernellib`, that were reinstated by @shentino for compatiblity with existing mudlibs. The changes reinstated were mostly about tracking of callouts as a resource, which @dworkin removed due to performance conflicts with Hydra, but also includes a few other small changes. These changes are in PR #1 https://github.com/ChatTheatre/kernellib/pull/1 which catches this fork up to @Shentino's https://github.com/shentino/kernellib/commit/cd81684e7e018c4ec09ef47fdc629891bb941779

## Why are we keeping this repository?

DGD was originally created in the early 90s to allow for the creation of very sophisticted text Multi User Dungeons (aka MUDs) on the internet.

In the mid-90s, DGD's architecture proved so powerful that a number of companies used a commercial version of DGD to create some of the first major chat rooms on the internet, most notably iChat which was used for the first [Yahoo! Chatrooms](https://en.wikipedia.org/wiki/Yahoo!_Messenger#Group_conversations_(formerly_Yahoo!_Chat).

In February 1999 Skotos Tech Corporation aquired a license to the DGD from Acuity Corporation who had an exclusive license, and began to fork both the DGD driver library and the `kernellib` itself. Some patches were exchanged by both parties over the next decade, but increasingly these versions of DGD driver and `kernellib` diverged.

Ultimately @dworkin aquired back his rights to DGD, and released version 1.4 of DGD and the `kernellib` as open source. DGD was released under the [GNU Affero General Public License v3](http://www.fsf.org/licensing/licenses/agpl-3.0.html) and the `kernellib` was released as public domain.

Over the next decade @Dworkin's DGD driver and the Skotos fork of DGD merged and forked several times, but today both are fairly close, and there is are some efforts to no longer use the Skotos fork of the DGD driver and use @Dworkin's soley.

However, the original `kernellib` and the Skotos `kernellib` have diverged tremendously, and no attempt has been made to merge them. Thus this repository thus differs from the Skotos `kernellib` significanly.

In 2019 Skotos Tech Corporation released [SkotOS](https://github.com/ChatTheatre/SkotOS) as open source, which included its fork of the `kernellib`, along with an example of a prose-based narrative game server called [The Gables](https://www.ChatTheatre.com), as well as a new open source user account manager, an HTML5 client and other software to support modern web browsers, These were released with the goal of encouraging other parties to develop and create their own games, chat rooms, or other online services. Skotos Tech Corporation closed in 2020 and transfererd its rights to its successor, Dyvers Hands Productions LLC Series 5, dba "ChatTheatre.com", who is acting as steward of this open source community today.

This archive is being kept to help developers and archivists who want to better understand DGD, and the differences between the @dworkin's `kernellib` and the `kernellib` used in [SkotOS](https://github.com/ChatTheatre/SkotOS) and other forks of `kernellib`.

## Copyright & Status

@dworkin wrote in [2016-03-5](https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591):
> This is the final release of the Kernel Library, for Hydra and DGD.  The
> kernellib is and has always been in the public domain (even though it was
> distributed with DGD), so this repository includes the full history.
>
> The last release only modifies this file, and moves everything else into
> a src directory; it will work fine with current versions of DGD and Hydra.
> There will be no further updates, and no more pull requests will be
> accepted.

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="http://i.creativecommons.org/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="https://www.ChatTheatre.com">
    <span property="dct:title">Dyvers Hands Productions LLC Series 5</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">DGD Kernel Library (aka `kernellib`)</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="US" about="https://github.com/ChatTheatre/kernellib">
  United States</span>.
</p>

## Contributing

This repository is intended as a "live archive", which means that we don't plan to add functionality to the repository, but we will accept PRs to add documentation, comment code, address bugs or security issues, or address problems using this library with @dworkin's DGD on modern operating systems.

In paricular, we would love to have more general installation instructions, architecture documentation, code commentary, as well as articles about differences between this code and other forks of the `kernellib`.

We require that before any first PR from a contributor to this repository can be accepted, their commit must be GPG signed, and it must contain a comment that include a similar CC0 disclaimer as above, which can be obtained from [Creative Commons CC0](https://creativecommons.org/choose/zero/).

## Installation

TO BE WRITTEN
