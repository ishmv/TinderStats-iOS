# TinderStats-iOS
TinderStats for iOS is an application and [Cydia Substrate Tweak](http://iphonedevwiki.net/index.php/Cydia_Substrate) for jailbroken iOS devices that uses the [Theos](http://iphonedevwiki.net/index.php/Theos) and [Logos](http://iphonedevwiki.net/index.php/Logos) tools to hook the Tinder iOS application at runtime and add functionality to keep statistics about your Tinder usage.

TinderStats **REQUIRES** a jailbroken iOS device in order to work. This is alpha software, use this at your own risk.

![Screenshot of the application](https://raw.githubusercontent.com/f41c0r/TinderStats-iOS/master/screenshot.png)

## Install

#### Easiest Way:

1. Add a repo in Cydia under the sources tab. For the URL, put `https://f41c0r.github.io`
2. In Cydia, search for "TinderStats-iOS"
3. Install the application. A new icon will pop up in your home screen after install.

#### Also Easy:

1. Go to the releases page and manually download the .deb file for your preferred release.
2. Using SCP or another tool, push the deb file to your iOS device.
3. Using SSH or a terminal application, issue `sudo dpkg -i blahblahblah.deb`

#### More Difficult:

1. See build instructions.
2. After generating a deb file, push it to your device as in "Also Easy"

## Build Instructions

//TODO

## Still TODO

1. Build Instructions.
2. Figure out which function to hook to do superlike counting.
3. Figure out which function to hook to count how many matches you have gotten.
4. Figure out how to identify whether a given match was a superlike match or just a normal match.
5. Add a donations section and add a BTC address to donate to :wink:

## License

GPLv3 - see the LICENSE file for full licensing details.

## Thanks

The folks on #iphonedev on irc.saurik.net were really helpful in answering my noob questions. You know who you are. Thanks.
