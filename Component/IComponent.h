//
// Created by Ivan on 09.03.2023.
//

#ifndef UNTITLED_ICOMPONENT_H
#define UNTITLED_ICOMPONENT_H

#include <list>


class IComponent {

    private:
        int startX;
        int startY;
        bool visible;

    public:
        IComponent(int startX, int startY);
        IComponent(int startX, int startY, bool isVisible);
        virtual ~IComponent();

        int getStartX() const;

        void setStartX(int startX);

        int getStartY() const;

        void setStartY(int startY);

        bool isVisible() const;

        void setVisible();

        void setInvisible();

        void onClick();
};


#endif //UNTITLED_ICOMPONENT_H
