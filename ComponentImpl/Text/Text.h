//
// Created by Ivan on 15.03.2023.
//

#ifndef UNTITLED_TEXT_H
#define UNTITLED_TEXT_H

#include "../../MeasurableComponent/IMeasurableComponent.h"
#include "string"

class Text : public IMeasurableComponent{

        private:
            std::string text;

        public:
            Text(int startX, int startY, int width, int height, const std::string &text);

            const std::string &getText() const;

            void setText(const std::string &text);

};


#endif //UNTITLED_TEXT_H
