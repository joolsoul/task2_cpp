//
// Created by Ivan on 16.03.2023.
//

#include "Scene.h"

Scene::Scene(const std::list<const IComponent *> &components) : components(components) {}

Scene::~Scene() {

}

const std::list<const IComponent *> &Scene::getComponents() const {
return components;
}

void Scene::setComponents(const std::list<const IComponent *> &components) {
Scene::components = components;
}
