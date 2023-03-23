//
// Created by Ivan on 15.03.2023.
//

#ifndef UNTITLED_IMEASURABLECOMPONENT_H
#define UNTITLED_IMEASURABLECOMPONENT_H


#include "../Component/IComponent.h"

class IMeasurableComponent : public IComponent{

        private:
            int width;
            int height;

        public:
            IMeasurableComponent(int startX, int startY, int width, int height);
            ~IMeasurableComponent() override;

            int getWidth() const;

            void setWidth(int width);

            int getHeight() const;

            void setHeight(int height);


};


#endif //UNTITLED_IMEASURABLECOMPONENT_H
