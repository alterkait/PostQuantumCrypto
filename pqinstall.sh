# Download the latest version file
wget https://libpqcrypto.org/libpqcrypto-latest-version.txt

# Read the version number
version=$(cat libpqcrypto.org/libpqcrypto-latest-version.txt)

# Ensure the version is not empty
if [ -z "$version" ]; then
    echo "Error: Unable to determine the latest version of libpqcrypto."
    exit 1
fi

# Download the tarball
wget https://libpqcrypto.org/libpqcrypto-$version.tar.gz

# Extract the tarball
tar -xzf libpqcrypto.org/libpqcrypto-$version.tar.gz

# Change into the directory
cd libpqcrypto-$version

# Create symbolic links (removing any existing ones first)
rm -f link-build link-install
ln -s $HOME link-build
ln -s $HOME link-install

