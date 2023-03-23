//
// Created by Ivan on 15.03.2023.
//

#include "IMeasurableComponent.h"

IMeasurableComponent::IMeasurableComponent(int startX, int startY, int width, int height) : IComponent(startX, startY),
                                                                                            width(width),
                                                                                            height(height) {}

IMeasurableComponent::~IMeasurableComponent() {

}

int IMeasurableComponent::getWidth() const {
    return width;
}

void IMeasurableComponent::setWidth(int width) {
    IMeasurableComponent::width = width;
}

int IMeasurableComponent::getHeight() const {
    return height;
}

void IMeasurableComponent::setHeight(int height) {
    IMeasurableComponent::height = height;
}


