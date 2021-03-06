// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_FILE_PALETTE_FILE_H_INCLUDED
#define APP_FILE_PALETTE_FILE_H_INCLUDED
#pragma once

namespace doc {
  class Palette;
}

namespace app {

  void get_readable_palette_extensions(char* buf, int size);
  void get_writable_palette_extensions(char* buf, int size);

  doc::Palette* load_palette(const char *filename);
  bool save_palette(const char *filename, doc::Palette* pal);

} // namespace app

#endif
