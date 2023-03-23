//
// Created by Ivan on 16.03.2023.
//

#include "IComponent.h"

IComponent::IComponent(int startX, int startY, bool isVisible) : startX(startX), startY(startY), visible(isVisible) {}

int IComponent::getStartX() const {
    return this->startX;
}

int IComponent::getStartY() const {
    return this->startY;
}

void IComponent::setStartX(int startX) {
    this->startX = startX;
}

void IComponent::setStartY(int startY) {
    this->startY = startY;
}

bool IComponent::isVisible() const{
    return this->visible;
}

void IComponent::setVisible() {
    this->visible = true;
}

void IComponent::setInvisible() {
    this->visible = false;
}


