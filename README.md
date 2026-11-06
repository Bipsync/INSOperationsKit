> [!WARNING]
> **Deprecated. This fork is no longer changed.**
>
> Bipsync's copy of INSOperationsKit now lives in
> [Bipsync/bipsync-notes-ios-insoperationskit](https://github.com/Bipsync/bipsync-notes-ios-insoperationskit),
> which builds it as a static-library `.xcframework` for the Bipsync iOS app. Make any future
> changes there.
>
> This fork is kept as the recorded base for that repo (commit `fdfe423`). Please don't delete it.

[![](http://inspace.io/github-cover.jpg)](http://inspace.io)

# INSOperationsKit

Objective-C adaptation of the sample code provided in the Advanced NSOperations session of WWDC 2015. The sample code was originally written in Swift 2.0. For usage examples, see WWDC 2015 Advanced NSOperations and/or look at the included unit tests.

A lot of stuff was taken from [PSOperations](https://github.com/pluralsight/PSOperations)

Feel free to fork and submit pull requests, as we are always looking for improvements from the community.

This also provides fixes to issues found in the original sample code, mostly:
* Canceling operations would not work.
* Canceling functions are slightly more friendly.
* Negated Condition would not negate.
* Unit tests!
