//
// Created by Ivan on 16.03.2023.
//

#ifndef UNTITLED_SCENE_H
#define UNTITLED_SCENE_H

#include "list"
#include "../Component/IComponent.h"

class Scene {
    
    private:
        std::list<const IComponent*> components;
        
    public:
        Scene(const std::list<const IComponent *> &components);
        
        virtual ~Scene();
        
        const std::list<const IComponent *> &getComponents() const;
        
        void setComponents(const std::list<const IComponent *> &components);
        
        void addComponent(IComponent componentToAdd);
        
        void deleteComponent(IComponent componentToDelete);
        
};


#endif //UNTITLED_SCENE_H
