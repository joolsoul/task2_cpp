cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Component/IComponent.h Container/IContainer.cpp Container/IContainer.h MeasurableComponent/IMeasurableComponent.cpp MeasurableComponent/IMeasurableComponent.h ComponentImpl/Frame/Frame.cpp ComponentImpl/Frame/Frame.h ComponentImpl/Panel/Panel.cpp ComponentImpl/Panel/Panel.h ComponentImpl/Button/Button.cpp ComponentImpl/Button/Button.h ComponentImpl/Line/Line.cpp ComponentImpl/Line/Line.h ComponentImpl/List/List.cpp ComponentImpl/List/List.h ComponentImpl/Text/Text.cpp ComponentImpl/Text/Text.h ComponentController/ComponentController.cpp ComponentController/ComponentController.h Component/IComponent.cpp Scene/Scene.cpp Scene/Scene.h)
