#!/bin/sh
################################################################################
#      This file is part of Unraid USB Creator - https://github.com/limetech/usb-creator
#      Copyright (C) 2016 Team LibreELEC
#      Copyright (C) 2018-2020 Lime Technology, Inc
#
#  Unraid USB Creator is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 2 of the License, or
#  (at your option) any later version.
#
#  Unraid USB Creator is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with Unraid USB Creator.  If not, see <http://www.gnu.org/licenses/>.
################################################################################

echo ""
echo "Signing..."
echo ""

# clean any extended attributes otherwise codesigning fails
xattr -cr "Unraid USB Creator.app"

codesign --deep -v -fs "Developer ID Application: Lime Technology Inc. (B4L35Y5N35)" "Unraid USB Creator.app"
codesign -vvvv "Unraid USB Creator.app"
spctl -a -v "Unraid USB Creator.app"
