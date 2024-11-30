This is my attempt to create a simple, user-friendly utility for downgrading Skyrim and Fallout 4 to a specific game version.
This utility is based on DepotDownloader (available on Github) which is designed to download files from Steam Depot.
There are great guides on how to do this manually but to my knowledge there isn't any program that could achieve this.

After the downgrade process is finished you will only be able to use SKSE (F4SE) designed for the downgraded version of the game!  General rule of thumb: do not try to use mods which were created to newer versions of the game than you have.

Usage

1. Start the program, fill in your username and password to the appropriate fields.
2. Select download location for the files.  This should be a temporary directory on your hard drive.
3. Select the game installation folder (if the program couldn't find it).
4. Select the game you wish to downgrade.
5. Select the game version you wish to downgrade to.  This should match the mod's requirement you wish to use.
(Actually these can be done in any order you want.)

6. Finally click on 'Start Downgrade' button.  You'll be given a new window to enter your 2FA code from SteamGuard or you simply have to allow a new sign-in to your Steam account in Steamguard.

Source code is fully open source (GPL3?) and available on GitHub at...

Known Issues

You have to approve accessing your Steam account in SteamGuard every time (3 times in total for Skyrim, way more for Fallout 4) despite the fact I use "-remember-password" parameter with DepotDownloader.
The UI may become unresponsive during the "Copying files..." phase after the download phase completed.  You just have to be patient and let it finish.

FAQ

Q: OMG!  Are you trying to steal my Steam account?!
A: No, your account - hopefully - is protected with 2FA (SteamGuard) which requires access to your email in order to log in, something I don't have.  Plus this program does not store or send you password/2FA code anywhere else just to Steam using DepotDownloader.  Check out the source code on GitHub if you like.

Q: How do I run this in Vortex/MO2?
A: Don't.  In Vortex it is recommended to deactivate and purge the mods first.  Don't know about Mod Organizer 2 (barely used it).

Q: Does this work with a non-English version of the game?
A: No.  In theory it could be done but I probably won't.  However if you'd like to extend the capabilites of this utility and know how to edit XML files it shouldn't be too difficult...

Q: I didn't get the game from Steam.  Could you make it work with other platforms/stores/torrent?
A: No.  This utility is based on DepotDownloader which is designed to download files from Steam Depot.