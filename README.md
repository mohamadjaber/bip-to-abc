#Translation from BIP to ABC

`java -jar bip-to-abc.jar [options] input.bip ouput.abc [property.txt]`

where:

- input.bip    = input BIP file name (required)
- ouput.abc    = ABC file name to be generated (required)
- property.txt = Pre and Post condition written in two different lines (optional)

and options are:

- -?                prints usage to stdout; exits (optional)`
- -emulator <s>     Generate emulation code ouput.abc.cpp`
                    1. guide.txt: indices of interactions assigned to selector
                    2. integer <= 0: infinite exection
                    3. integer > 0: number of cycles to be executed
                   (optional)
- -h                prints usage to stdout; exits (optional)
- -help             displays verbose help information (optional)
- -initialize-vars  Initialize free variables (optional)
- -optimized        Generate one cycle-based code (optional)
- -version          displays command's version (optional)


Option tags are not case sensitive, and may be truncated as long as they remain unambiguous.  Option tags must be separated from their corresponding values by whitespace, or by an equal sign.  Boolean options (options that require no associated value) may be specified alone (=true), or as 'tag=value' where value is 'true' or 'false'.
