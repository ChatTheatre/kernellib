
# Live Archive of the DGD Kernel Library (aka `kernellib`)

For more documentation on using the Kernellib, see [ChatTheatre's Kernellib documentation site](https://ChatTheatre.github.io/kernellib-doc).

## What is DGD Kernel Library?

The `kernellib` was designed to serve as a better foundation than previous third-party [LPC mudlibs](https://en.wikipedia.org/wiki/LPMud), and as such would leverage and demonstrate the powerful capabilities of [Dworkin's Game Driver](http://www.dworkin.nl/dgd/) (aka DGD). The original `kernellib` was written by Felix A. Croes (aka @dworkin) in 1993.

This `kernellib` was originally included inside the DGD distribution, but over time it moved into it's own reposistory on [GitHub](https://github.com/dworkin/kernellib).

## What is this fork?

This repository is indended as a "live archive" fork of @dworkin's `kernellib` for the DDG LPC driver, based initially on the "final commit" to that repository 2016-03-5: https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591.

There were changes in the last few years of `kernellib` to add support for @dworkin's new, but non-open source, multi-threaded driver [Hydra](http://www.dworkin.nl/hydra/) that removed features from earlier versions of the `kernellib`, that were reinstated by @shentino for compatiblity with existing mudlibs. The changes reinstated were mostly about tracking of callouts as a resource, which @dworkin removed due to performance conflicts with Hydra, but also includes a few other small changes. These changes are in PR #1 https://github.com/ChatTheatre/kernellib/pull/1 which catches this fork up to @Shentino's https://github.com/shentino/kernellib/commit/cd81684e7e018c4ec09ef47fdc629891bb941779

## Why are we keeping this repository?

DGD was originally created in the early 90s to allow for the creation of very sophisticted text Multi User Dungeons (aka MUDs) on the internet.

In the mid-90s, DGD's architecture proved so powerful that a number of companies used a commercial version of DGD to create some of the first major chat rooms on the internet, most notably iChat which was used for the first [Yahoo! Chatrooms](https://en.wikipedia.org/wiki/Yahoo!_Messenger#Group_conversations_(formerly_Yahoo!_Chat)).

In February 1999 Skotos Tech Corporation aquired a license to the DGD from Acuity Corporation who had an exclusive license, and began to fork both the DGD driver library and the `kernellib` itself. Some patches were exchanged by both parties over the next decade, but increasingly these versions of DGD driver and `kernellib` diverged.

Ultimately @dworkin aquired back his rights to DGD, and released version 1.4 of DGD and the `kernellib` as open source. DGD was released under the [GNU Affero General Public License v3](http://www.fsf.org/licensing/licenses/agpl-3.0.html) and the `kernellib` was released as public domain.

Over the next decade @Dworkin's DGD driver and the Skotos fork of DGD merged and forked several times, but today both are fairly close, and there is are some efforts to no longer use the Skotos fork of the DGD driver and use @Dworkin's soley.

However, the original `kernellib` and the Skotos `kernellib` have diverged tremendously, and no attempt has been made to merge them. Thus this repository thus differs from the Skotos `kernellib` significanly.

In 2019 Skotos Tech Corporation released [SkotOS](https://github.com/ChatTheatre/SkotOS) as open source, which included its fork of the `kernellib`, along with an example of a prose-based narrative game server called [The Gables](https://www.ChatTheatre.com), as well as a new open source user account manager, an HTML5 client and other software to support modern web browsers, These were released with the goal of encouraging other parties to develop and create their own games, chat rooms, or other online services. Skotos Tech Corporation closed in 2020 and transfererd its rights to its successor, Dyvers Hands Productions LLC Series 5, dba "ChatTheatre.com", who is acting as steward of this open source community today.

This archive is being kept to help developers and archivists who want to better understand DGD, and the differences between the @dworkin's `kernellib` and the `kernellib` used in [SkotOS](https://github.com/ChatTheatre/SkotOS) and other forks of `kernellib`.

## Copyright & Status

Unless otherwise noted, the contents of this repository are public domain.

@dworkin wrote in [2016-03-5](https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591):

> This is the final release of the Kernel Library, for Hydra and DGD.  The
> kernellib is and has always been in the public domain (even though it was
> distributed with DGD), so this repository includes the full history.
>
> The last release only modifies this file, and moves everything else into
> a src directory; it will work fine with current versions of DGD and Hydra.
> There will be no further updates, and no more pull requests will be
> accepted.

### CC0 Declarations

Under US law it is a bit more difficult to declare something public domain (see [article](https://www.techdirt.com/articles/20150123/15564629797/why-we-still-cant-really-put-anything-public-domain-why-that-needs-to-change.shtml)). Creative Commons offers a [CC0 tool](https://creativecommons.org/choose/zero/) that combined with GPG signed commits, helps with this issue.

The following parties have declared their contributions to this repository as public domain:

* Skotos Tech Corportation

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="http://i.creativecommons.org/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="http://www.skotos.net/about/">
    <span property="dct:title">Skotos Tech Corporation</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">DGD Kernel Library (aka `kernellib`)</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="US" about="https://github.com/ChatTheatre/kernellib">
  United States</span>.
</p>

* Dyvers Hands Productions LLC Series 5

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

* Christopher Allen

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="http://i.creativecommons.org/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="https://ChristopherA.info">
    <span property="dct:title">Christopher Allen</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">DGD Kernel Library (aka `kernellib`)</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="US" about="https://github.com/ChatTheatre/kernellib">
  United States</span>.
</p>

* Noah Gibbs

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="http://i.creativecommons.org/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="https://codefol.io">
    <span property="dct:title">Noah Gibbs</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">DGD Kernel Library (aka `kernellib`)</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="UK" about="https://github.com/ChatTheatre/kernellib">
  United Kingdom</span>.
</p>

## Contributing

This repository is intended as a "live archive", which means that we don't plan to add functionality to the repository, but we will accept PRs to add documentation, comment code, address bugs or security issues, or address problems using this library with @dworkin's DGD on modern operating systems.

In particular, we would love to have more general installation instructions, architecture documentation, code commentary, as well as articles about differences between this code and other forks of the `kernellib`.

We require that before any first PR from a contributor to this repository can be accepted, their commit must be GPG signed, and it must contain a comment that include a similar CC0 disclaimer as above, which can be obtained from [Creative Commons CC0](https://creativecommons.org/choose/zero/).

## Installation

The Kernellib is normally copied into place inside another application or codebase, or used via Git Submodules or similar. See [the installation instructions on the documentation site](https://ChatTheatre.github.io/kernellib-doc/installing.html) for details.

## Historical

Many of the websites that supported DGD and the `kernellib` no longer seem to be available, or are hard to find as they are only available via Archive.org. I've only included those here that have attribution, and that appear to be public domain or have a permissive license. You'll have to browse their sources to find their proper license details. Most of the following appear to be [GNU Free Documentation LIcense, V1.3 or later](https://www.gnu.org/licenses/fdl-1.3.en.html) and are the only exceptions known so far to this repostory being public domain.

## More Kernel Library links only on Archive.org

Saved at 2020-08-22 01:08
- [The Phantasmal MUDlib for DGD: The Kernel Library](https://web.archive.org/web/20120607183732/http://phantasmal.sourceforge.net:80/DGD/Kernel/index.html)
- [The Kernel Library for DGD: Commands in the Kernel](https://web.archive.org/web/20080418081830/http://phantasmal.sourceforge.net/DGD/Kernel/Commands.html)
- [The Kernel Library for DGD: Layers of DGD](https://web.archive.org/web/20080418061133/http://phantasmal.sourceforge.net/DGD/Kernel/Layers.html)
- [The Phantasmal MUDlib for DGD: Inheritance in the Kernel](https://web.archive.org/web/20120717014107/http://phantasmal.sourceforge.net:80/DGD/Kernel/Inheritance.html)
- [The Kernel Library for DGD: Extending the Kernel](https://web.archive.org/web/20080430230807/http://phantasmal.sourceforge.net/DGD/Kernel/Modifying.html)
- [The Kernel Library for DGD: Kernel Security](https://web.archive.org/web/20080408090748/http://phantasmal.sourceforge.net/DGD/Kernel/Security.html)
- [The Kernel Library for DGD: Object Creators and Owners](https://web.archive.org/web/20080415183759/http://phantasmal.sourceforge.net/DGD/Kernel/ObjectOwners.html)
- [The Kernel Library for DGD: Users and Connections](https://web.archive.org/web/20080416223034/http://phantasmal.sourceforge.net/DGD/Kernel/UserConnections.html)
- [The Kernel Library for DGD: Debugging with the Kernel](https://web.archive.org/web/20080409212124/http://phantasmal.sourceforge.net/DGD/Kernel/Debugging.html)
- [The Kernel Library for DGD: Adding to your MUDLib](https://web.archive.org/web/20080501121118/http://phantasmal.sourceforge.net/DGD/Kernel/Adding.html)
- [The Kernel Library for DGD: Directory Structure](https://web.archive.org/web/20080406145155/http://phantasmal.sourceforge.net/DGD/Kernel/Directories.html)
- [The Kernel Library for DGD: Errord](https://web.archive.org/web/20080418005755/http://phantasmal.sourceforge.net/DGD/Kernel/Errord.html)
- [The Kernel Library for DGD: Breaking Up Functions](https://web.archive.org/web/20080417011302/http://phantasmal.sourceforge.net/DGD/Kernel/Threading.html)
- [The Kernel Library for DGD: Extra AUTO Objects](https://web.archive.org/web/20080415183804/http://phantasmal.sourceforge.net/DGD/Kernel/SecondAuto.html)
- [The Kernel Library for DGD: Object Manager](https://web.archive.org/web/20080411182423/http://phantasmal.sourceforge.net/DGD/Kernel/ObjectManager.html)
- [Phantasmal Admin Tutorials: Compiling Programs](https://web.archive.org/web/20080415213045/http://phantasmal.sourceforge.net/Tutorial/Admin/Compiling.html)
- [Phantasmal Admin Tutorials: Evaluating Arbitrary Code](https://web.archive.org/web/20050826011728/http://phantasmal.sourceforge.net/Tutorial/Admin/Evaluating.html)
- [Phantasmal Admin Tutorials: Access, Resources and Quotas](https://web.archive.org/web/20050825153455/http://phantasmal.sourceforge.net/Tutorial/Admin/Resources.html)
- [The Kernel Library for DGD: Email Archive](https://web.archive.org/web/20080429215118/http://phantasmal.sourceforge.net/DGD/Kernel/EmailArchive.html)
- [The Phantasmal MUDlib for DGD: Slush Bucket](https://web.archive.org/web/20120607070621/http://phantasmal.sourceforge.net:80/DGD/SlushBucket.html)

## Bucket of DGD links only on Archive.original

DGD & LPC
- [The Phantasmal MUDlib for DGD: DGD, LPC & MUDLib](https://web.archive.org/web/20160317125914/http://phantasmal.sourceforge.net/DGD/index.html)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120607094214/http://phantasmal.sourceforge.net/DGD/Manual/index.html)
- [The Phantasmal MUDlib for DGD: CSharp vs DGD](https://web.archive.org/web/20120607070616/http://phantasmal.sourceforge.net/DGD/CSharp_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: Contributing to DGD](https://web.archive.org/web/20120607183722/http://phantasmal.sourceforge.net/DGD/Contribute.html)
- [The Phantasmal MUDlib for DGD: DGD Glossary](https://web.archive.org/web/20120917223736/http://phantasmal.sourceforge.net/DGD/DGD_Terms.html)
- [The Phantasmal MUDlib for DGD: Java vs DGD](https://web.archive.org/web/20120607183727/http://phantasmal.sourceforge.net/DGD/Java_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: DGD MUDs](https://web.archive.org/web/20120607044849/http://phantasmal.sourceforge.net/DGD/MUDs_using_DGD.html)
- [The Phantasmal MUDlib for DGD: Miscellaneous DGD](https://web.archive.org/web/20120607033017/http://phantasmal.sourceforge.net/DGD/Misc_DGD.html)
- [The Phantasmal MUDlib for DGD: Miscellaneous DGD](https://web.archive.org/web/20120607033017/http://phantasmal.sourceforge.net/DGD/Misc_DGD.html#Websites)
- [The Phantasmal MUDlib for DGD: Skotos](https://web.archive.org/web/20120607094219/http://phantasmal.sourceforge.net/DGD/Skotos/index.html)
- [DGD and LPC: Skotos 2.0 Library](https://web.archive.org/web/20080412014722/http://phantasmal.sourceforge.net/DGD/Skotos/Skotos2.html)
- [SkotOS: SkotOS on the brink of the rewrite](http://www.alyx.com/zell/SkotOS.html)
- [DGD and LPC: Skotos Library](https://web.archive.org/web/20080515091608/http://phantasmal.sourceforge.net/DGD/Skotos/SkotosLib.html)
- [DGD and LPC:Commercial Use](https://web.archive.org/web/20080723144036/http://phantasmal.sourceforge.net/DGD/Skotos/CommercialUse.html)
- [Wayback Machine](https://web.archive.org/web/20120918084604/http://dark.home.xs4all.nl/dgd/dumpfile-format.txt)
- [Dworkin's Game Driver](https://web.archive.org/web/20120615102903/http://www.dworkin.nl/dgd)
- [LPMOO: A Simulation of LambdaMOO](https://web.archive.org/web/20120415011403/http://www.mars.org/home/rob/proj/lpmoo/)
- [DGD kfun manual](https://web.archive.org/web/20040818103815/http://dgd.maiskuil.is-here.com:8000/dgd/kfuns/)
- [DGD v1.2.112 - kfun - INDEX](https://web.archive.org/web/20120918082542/http://dgd.is-here.com/man/man.cgi)
- [GurbaLib](https://web.archive.org/web/20110817142050/http://gurba.sytes.net/%7Eerlends/gurba.html)
- [The Phantasmal MUDlib for DGD: MudOS vs DGD](https://web.archive.org/web/20120607183737/http://phantasmal.sourceforge.net/DGD/MudOS_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: Slush Bucket](https://web.archive.org/web/20120607070621/http://phantasmal.sourceforge.net/DGD/SlushBucket.html)
- [The Phantasmal MUDlib for DGD: Why Use DGD?](https://web.archive.org/web/20120607033053/http://phantasmal.sourceforge.net/DGD/Why_DGD.html)
- [The Phantasmal MUDlib for DGD: Top Level](https://web.archive.org/web/20120607183717/http://phantasmal.sourceforge.net/DGD/Book/index.html)
- [The Phantasmal MUDlib for DGD: Getting DGD](https://web.archive.org/web/20120607044839/http://phantasmal.sourceforge.net/DGD/Config/index.html)
- [Archive](https://web.archive.org/web/20120301123736/http://www.rpgmud.com/lpmud-faq.htm)
- [DGD and LPC: DGD MUDLibs](https://web.archive.org/web/20080504135229/http://phantasmal.sourceforge.net/DGD/Config/MUDLibs.html)
- [DGD and LPC: Customizing DGD](https://web.archive.org/web/20080409225451/http://phantasmal.sourceforge.net/DGD/Config/Customizing.html)
- [DGD and LPC: Troubleshooting DGD](https://web.archive.org/web/20050914221932/http://phantasmal.sourceforge.net/DGD/Config/TroubleShooting.html)
- [The Phantasmal MUDlib for DGD: Game Design Issues](https://web.archive.org/web/20120607033013/http://phantasmal.sourceforge.net/DGD/GameDesign/index.html)
- [The Phantasmal MUDlib for DGD: Player Content](https://web.archive.org/web/20090505201643/http://phantasmal.sourceforge.net/DGD/GameDesign/PlayerContent.html)
- [The Phantasmal MUDlib for DGD: Persistent Game Design](https://web.archive.org/web/20100311005127/http://phantasmal.sourceforge.net/DGD/GameDesign/GamePersistence.html)
- [The Phantasmal MUDlib for DGD: In-Game Economies](https://web.archive.org/web/20090507225531/http://phantasmal.sourceforge.net/DGD/GameDesign/Economy.html)
- [The Phantasmal MUDlib for DGD: Guest Programmers](https://web.archive.org/web/20090508002158/http://phantasmal.sourceforge.net/DGD/GameDesign/GuestProgrammers.html)
- [The Phantasmal MUDlib for DGD: Ur-Objects](https://web.archive.org/web/20090508002202/http://phantasmal.sourceforge.net/DGD/GameDesign/UrObjects.html)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120607082902/http://phantasmal.sourceforge.net/DGD/LPC/index.html)
- [DGD LPC Textbook](https://web.archive.org/web/20080516061738/http://phantasmal.sourceforge.net/DGD/LPC/section_2.html#SEC2)
- [DGD LPC Textbook](https://web.archive.org/web/20080516061746/http://phantasmal.sourceforge.net/DGD/LPC/section_31.html#SEC3)
- [DGD LPC Textbook](https://web.archive.org/web/20081101220146/http://phantasmal.sourceforge.net/DGD/LPC/section_3254.html#SEC3.2)
- [DGD LPC Textbook](https://web.archive.org/web/20080516065607/http://phantasmal.sourceforge.net/DGD/LPC/section_329.html#SEC3.2.6)
- [DGD LPC Textbook](https://web.archive.org/web/20080516080744/http://phantasmal.sourceforge.net/DGD/LPC/section_33.html#SEC3.2.10)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120714071819/http://phantasmal.sourceforge.net/DGD/LPC/section_42.html#SEC4.0)
- [DGD LPC Textbook](https://web.archive.org/web/20080516080723/http://phantasmal.sourceforge.net/DGD/LPC/section_5.html#SEC5.0)
- [The Phantasmal MUDlib for DGD: Writing a Library](https://web.archive.org/web/20120718093516/http://phantasmal.sourceforge.net/DGD/LibWriting/index.html)
- [DGD and LPC: Using Melville](https://web.archive.org/web/20080418230310/http://phantasmal.sourceforge.net/DGD/LibWriting/UseMelville.html)
- [The Phantasmal MUDlib for DGD: Comparison to Other Libs](https://web.archive.org/web/20050404232846/http://phantasmal.sourceforge.net/Comparison.html)
- [DGD and LPC: Using the Kernel](https://web.archive.org/web/20080405095821/http://phantasmal.sourceforge.net/DGD/LibWriting/UseKernel.html)
- [The Kernel Library for DGD: What Does It Do?](https://web.archive.org/web/20050825000844/http://phantasmal.sourceforge.net/DGD/Kernel/ScopeOfLib.html)
- [DGD and LPC: GurbaLib](https://web.archive.org/web/20050903070127/http://phantasmal.sourceforge.net/DGD/LibWriting/GurbaLib.html)
- [DGD and LPC: Heaven7](https://web.archive.org/web/20070707002401/http://phantasmal.sourceforge.net/DGD/LibWriting/Heaven7.html)
- [DGD and LPC: Start from Scratch?](https://web.archive.org/web/20080415152833/http://phantasmal.sourceforge.net/DGD/LibWriting/StartingNew.html)
- [DGD and LPC: So You Want To...](https://web.archive.org/web/20080422182042/http://phantasmal.sourceforge.net/DGD/LibWriting/SoYouWanna.html)
- [DGD and LPC: Supplementary Documentation](https://web.archive.org/web/20080409212129/http://phantasmal.sourceforge.net/DGD/LibWriting/SupDocs.html)
- [DGD and LPC: Conditional Inheritance](https://web.archive.org/web/20080410183958/http://phantasmal.sourceforge.net/DGD/LibWriting/CondInherit.html)
- [DGD and LPC: Interrupt Call](https://web.archive.org/web/20080418081836/http://phantasmal.sourceforge.net/DGD/LibWriting/InterruptCall.html)
- [DGD and LPC: State Dumps](https://web.archive.org/web/20080416040715/http://phantasmal.sourceforge.net/DGD/LibWriting/HeartBeat.html)
- [DGD and LPC: Precompiling](https://web.archive.org/web/20080411052608/http://phantasmal.sourceforge.net/DGD/LibWriting/Precompiling.html)
- [DGD and LPC: Misc Security](https://web.archive.org/web/20070708124824/http://phantasmal.sourceforge.net/DGD/LibWriting/Security.html)
- [DGD and LPC: Script Delays](https://web.archive.org/web/20080415183809/http://phantasmal.sourceforge.net/DGD/LibWriting/ScriptDelays.html)
- [DGD and LPC: Player vs Body](https://web.archive.org/web/20070403084610/http://phantasmal.sourceforge.net/DGD/LibWriting/PlayerBody.html)
- [DGD and LPC: Object Management](https://web.archive.org/web/20070708003443/http://phantasmal.sourceforge.net/DGD/LibWriting/ObjectManagement.html)
- [The Phantasmal MUDlib for DGD: Persistent MUDLibs](https://web.archive.org/web/20141114214747/http://phantasmal.sourceforge.net/DGD/LibWriting/Persistence.html)
- [DGD and LPC: Designing AUTO Objs](https://web.archive.org/web/20070707002658/http://phantasmal.sourceforge.net/DGD/LibWriting/LargeAuto.html)
- [DGD and LPC: Designing Driver Objs](https://web.archive.org/web/20070708125042/http://phantasmal.sourceforge.net/DGD/LibWriting/DriverObj.html)
- [DGD and LPC: Object Database](https://web.archive.org/web/20080422182037/http://phantasmal.sourceforge.net/DGD/LibWriting/Database.html)
- [DGD and LPC: Object Binding](https://web.archive.org/web/20070708003705/http://phantasmal.sourceforge.net/DGD/LibWriting/ObjBinding.html)
- [DGD and LPC: Rlimits](https://web.archive.org/web/20070708003319/http://phantasmal.sourceforge.net/DGD/LibWriting/Rlimits.html)
- [DGD and LPC: ⁄cmd vs wiztool](https://web.archive.org/web/20070708124835/http://phantasmal.sourceforge.net/DGD/LibWriting/CmdsOrNot.html)
- [The Phantasmal MUDlib for DGD: Changing LPC](https://web.archive.org/web/20111123061106/http://phantasmal.sourceforge.net/DGD/LibWriting/ChangingLPC.html)
- [DGD and LPC: Object Cleanup](https://web.archive.org/web/20080505102006/http://phantasmal.sourceforge.net/DGD/LibWriting/Cleanup.html)
- [DGD and LPC: Distribute a State Dump?](https://web.archive.org/web/20080405171233/http://phantasmal.sourceforge.net/DGD/LibWriting/DistStateDump.html)
- [DGD and LPC: Releasing Code](https://web.archive.org/web/20070708124701/http://phantasmal.sourceforge.net/DGD/LibWriting/Releasing.html)
- [DGD and LPC: Which License](https://web.archive.org/web/20070708124905/http://phantasmal.sourceforge.net/DGD/LibWriting/WhatLicense.html)
- [DGD and LPC: Reimplementing From Scratch](https://web.archive.org/web/20050421214857/http://phantasmal.sourceforge.net/DGD/LibWriting/Reimplementation.html)
- [DGD and LPC: Outgoing Email](https://web.archive.org/web/20070708003520/http://phantasmal.sourceforge.net/DGD/LibWriting/Sendmail.html)
- [DGD and LPC: FTPD](https://web.archive.org/web/20070707002850/http://phantasmal.sourceforge.net/DGD/LibWriting/FTPD.html)
- [DGD and LPC: HTTPD](https://web.archive.org/web/20070708003506/http://phantasmal.sourceforge.net/DGD/LibWriting/HTTPD.html)
- [DGD and LPC: InterMUD3](https://web.archive.org/web/20070708003451/http://phantasmal.sourceforge.net/DGD/LibWriting/IMUD3.html)
- [The Phantasmal MUDlib for DGD: Telnet Protocol](https://web.archive.org/web/20121020120624/http://phantasmal.sourceforge.net/DGD/LibWriting/Telnet.html)
- [DGD and LPC: NFS](https://web.archive.org/web/20050910033117/http://phantasmal.sourceforge.net/DGD/LibWriting/NFS.html)
- [DGD and LPC: WebDAV](https://web.archive.org/web/20080415152838/http://phantasmal.sourceforge.net/DGD/LibWriting/WebDAV.html)
- [DGD and LPC: Other Net Services](https://web.archive.org/web/20070707091924/http://phantasmal.sourceforge.net/DGD/LibWriting/OtherServices.html)
- [The Phantasmal MUDlib for DGD: What Does It Do?](https://web.archive.org/web/20120607033047/http://phantasmal.sourceforge.net/DGD/Operation/index.html)
- [DGD and LPC: Swapping](https://web.archive.org/web/20080420152357/http://phantasmal.sourceforge.net/DGD/Operation/Swapping.html)
- [The Phantasmal MUDlib for DGD: DGD LPC Reference](https://web.archive.org/web/20120810022551/http://phantasmal.sourceforge.net/DGD/Programming/index.html)
- [DGD and LPC: LPC Code Samples](https://web.archive.org/web/20070916061328/http://phantasmal.sourceforge.net/DGD/Programming/Code_Examples.html)
- [SSH in LPC | Get SSH in LPC at SourceForge.net](https://web.archive.org/web/20090821105151/http://sourceforge.net/projects/lpcssh)
- [Wayback Machine](https://web.archive.org/web/20080110080430/http://phantasmal.sourceforge.net/DGD/external/geir_objectd.c)
- [Wayback Machine](https://web.archive.org/web/20050825154208/http://phantasmal.sourceforge.net/DGD/external/wiztool_addon.c)
- [Wayback Machine](https://web.archive.org/web/20050429194934/http://phantasmal.sourceforge.net/DGD/external/I3Code.txt)
- [Wayback Machine](https://web.archive.org/web/20050825065208/http://phantasmal.sourceforge.net/DGD/external/mckenna_objd.txt)
- [Wayback Machine](https://web.archive.org/web/20050816063817/http://phantasmal.sourceforge.net/DGD/external/imud3d.c)
- [Wayback Machine](https://web.archive.org/web/20070912012122/http://phantasmal.sourceforge.net/DGD/external/pete-objectd.c)
- [Wayback Machine](https://web.archive.org/web/20050430090346/http://phantasmal.sourceforge.net/DGD/external/LPC_sqrt.txt)
- [Wayback Machine](https://web.archive.org/web/20050830023427/http://phantasmal.sourceforge.net/DGD/external/file_size.c)
- [Wayback Machine](https://web.archive.org/web/20050824063001/http://phantasmal.sourceforge.net/DGD/external/implode_explode.txt)
- [Wayback Machine](https://web.archive.org/web/20050831132841/http://phantasmal.sourceforge.net/DGD/external/color_parse.txt)
- [Wayback Machine](https://web.archive.org/web/20050819080353/http://phantasmal.sourceforge.net/DGD/external/sprintf.c)
- [Wayback Machine](https://web.archive.org/web/20050510095714/http://phantasmal.sourceforge.net/DGD/external/sprintf.doc.txt)
- [Wayback Machine](https://web.archive.org/web/20050826150806/http://phantasmal.sourceforge.net/DGD/external/flibs_pager.txt)
- [Wayback Machine](https://web.archive.org/web/20050826013558/http://phantasmal.sourceforge.net/DGD/external/flibs_sendmail.txt)
- [Wayback Machine](https://web.archive.org/web/20070818131818/http://phantasmal.sourceforge.net/DGD/external/shadows.txt)
- [Wayback Machine](https://web.archive.org/web/20050820130123/http://phantasmal.sourceforge.net/DGD/external/melville_parser.txt)
- [Wayback Machine](https://web.archive.org/web/20070917164243/http://phantasmal.sourceforge.net/DGD/external/time_example.txt)
- [Wayback Machine](https://web.archive.org/web/20050826113807/http://phantasmal.sourceforge.net/DGD/external/png_generation.txt)
- [Wayback Machine](https://web.archive.org/web/20050430090422/http://phantasmal.sourceforge.net/DGD/external/erwin_mudlib.txt)
- [The Phantasmal MUDlib for DGD: LPC FAQ](https://web.archive.org/web/20120713035141/http://phantasmal.sourceforge.net/DGD/Programming/LPC_FAQ.html)
- [DGD & LPC Textbook](https://web.archive.org/web/20080329054453/http://phantasmal.sourceforge.net/DGD/LPC/)
- [The Phantasmal MUDlib for DGD: non-DGD Docs](https://web.archive.org/web/20120715042843/http://phantasmal.sourceforge.net/DGD/Programming/General_Docs.html)
- [The Phantasmal MUDlib for DGD: DGD LPC Diffs](https://web.archive.org/web/20120717013043/http://phantasmal.sourceforge.net/DGD/Programming/Diffs_in_LPC.html)
- [The Phantasmal MUDlib for DGD: Unsupported Features](https://web.archive.org/web/20120718005919/http://phantasmal.sourceforge.net/DGD/Programming/Unsupported.html)
- [The Phantasmal MUDlib for DGD: Using parse_string](https://web.archive.org/web/20120718130128/http://phantasmal.sourceforge.net/DGD/Programming/Parse_String.html)
- [The Phantasmal MUDlib for DGD: sscanf in DGD](https://web.archive.org/web/20120718063616/http://phantasmal.sourceforge.net/DGD/Programming/SScanF.html)
- [The Phantasmal MUDlib for DGD: sprintf in DGD](https://web.archive.org/web/20120717183601/http://phantasmal.sourceforge.net/DGD/Programming/SPrintF.html)
- [The Phantasmal MUDlib for DGD: call_out](https://web.archive.org/web/20120718013704/http://phantasmal.sourceforge.net/DGD/Programming/CallOut.html)
- [The Phantasmal MUDlib for DGD: call_touch()](https://web.archive.org/web/20120717014117/http://phantasmal.sourceforge.net/DGD/Programming/CallTouch.html)
- [The Phantasmal MUDlib for DGD: call_trace()](https://web.archive.org/web/20120717183556/http://phantasmal.sourceforge.net/DGD/Programming/CallTrace.html)
- [The Phantasmal MUDlib for DGD: Create Funcs](https://web.archive.org/web/20120718145419/http://phantasmal.sourceforge.net/DGD/Programming/CreateFuncs.html)
- [The Phantasmal MUDlib for DGD: Atomic Functions](https://web.archive.org/web/20120718032045/http://phantasmal.sourceforge.net/DGD/Programming/AtomicFuncs.html)
- [The Phantasmal MUDlib for DGD: DGD Driver Details](https://web.archive.org/web/20120718005914/http://phantasmal.sourceforge.net/DGD/Programming/Driver_Details.html)
- [The Phantasmal MUDlib for DGD: DGD Calling Conventions](https://web.archive.org/web/20120717014122/http://phantasmal.sourceforge.net/DGD/Programming/Calling_Conventions.html)
- [The Phantasmal MUDlib for DGD: DGD Object Subtypes](https://web.archive.org/web/20120718032055/http://phantasmal.sourceforge.net/DGD/Programming/Object_Types.html)
- [The Phantasmal MUDlib for DGD: Thread-Local Storage](https://web.archive.org/web/20120715042854/http://phantasmal.sourceforge.net/DGD/Programming/ThreadLocal.html)
- [The Phantasmal MUDlib for DGD: DGD/MP and Threads](https://web.archive.org/web/20120715042849/http://phantasmal.sourceforge.net/DGD/Programming/MPThreads.html)
- [The Phantasmal MUDlib for DGD: Mappings](https://web.archive.org/web/20120718130058/http://phantasmal.sourceforge.net/DGD/Programming/Mappings.html)
- [The Phantasmal MUDlib for DGD: Linked Lists](https://web.archive.org/web/20120718032052/http://phantasmal.sourceforge.net/DGD/Programming/LinkedLists.html)
- [The Phantasmal MUDlib for DGD: Character Manipulation](https://web.archive.org/web/20120715042839/http://phantasmal.sourceforge.net/DGD/Programming/CharManip.html)
- [The Phantasmal MUDlib for DGD: Running a MUD](https://web.archive.org/web/20120607045244/http://phantasmal.sourceforge.net/DGD/Running/index.html)
- [DGD and LPC: Running a MUD](https://web.archive.org/web/20080503074925/http://phantasmal.sourceforge.net/DGD/Running/Profiling.html)
