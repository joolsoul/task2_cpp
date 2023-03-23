//
// Created by Ivan on 15.03.2023.
//

#include "Text.h"

Text::Text(int startX, int startY, int width, int height, const std::string &text) : IMeasurableComponent(startX,
                                                                                                          startY, width,
                                                                                                          height),
                                                                                     text(text) {}

const std::string &Text::getText() const {
    return text;
}

void Text::setText(const std::string &text) {
    Text::text = text;
}
