//
// Created by Ivan on 09.03.2023.
//

#include "IContainer.h"

IContainer::IContainer() {}

IContainer::~IContainer() {

}

void IContainer::addChild(const IComponent* component) {
    IContainer::children.push_back(component);
}

void IContainer::deleteChild(const IComponent* componentToDelete) {
    IContainer::children.remove(componentToDelete);
}

list<IComponent> IContainer::getChildren() {
    IContainer::children;
}
