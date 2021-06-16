wget "https://api.textmate.org/downloads/release?os=10.12"
mv release?os=10.12 textmate.tbz
tar -xjf textmate.tbz
mv TextMate.app /Applications
rm textmate.tbz
echo "/Applications/TextMate.app/Contents/MacOS/TextMate $@" > /usr/local/bin/textmate
