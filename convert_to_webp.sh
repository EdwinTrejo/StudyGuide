#!/bin/bash

# Convert all image files to WebP format
# images should be passed as arguments

# check if cwebp is installed
if ! command -v cwebp &> /dev/null
then
    echo "cwebp could not be found"
    echo "Please install cwebp"
    exit 1
fi

for image in "$@"
do
    # check if the file exists
    if [ ! -f "$image" ]
    then
        echo "$image does not exist"
        continue
    fi

    # get the file extension
    extension="${image##*.}"

    # check if the file is an image
    if [ "$extension" != "jpg" ] && [ "$extension" != "jpeg" ] && [ "$extension" != "png" ]
    then
        echo "$image is not an image"
        continue
    fi

    # check if the output file already exists, if it does delete it
    if [ -f "${image%.*}.webp" ]
    then
        rm "${image%.*}.webp"
    fi

    # convert the image to WebP format
    cwebp -q 100 "$image" -o "${image%.*}.webp"
done