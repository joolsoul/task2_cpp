//
// Created by Ivan on 09.03.2023.
//

#ifndef UNTITLED_ICONTAINER_H
#define UNTITLED_ICONTAINER_H

#include <list>
#include "../Component/IComponent.h"

using namespace std;


class IContainer
{
//виртуальные геттеры, В окне просчитывать относитьтельно состояния
    private:
        list<const IComponent*> children;

    public:
        IContainer();
        virtual ~IContainer();

        list<IComponent> getChildren();

        void deleteChild(const IComponent* componentToDelete);

        void addChild(const IComponent* component);
};


#endif //UNTITLED_ICONTAINER_H
