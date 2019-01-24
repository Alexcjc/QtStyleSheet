# QtStyleSheet
summary the usage of Qt Style Sheet

Qt Style Sheets are a powerful mechanism that allows you to customize the appearance of widgets, 
in addition to what is already possible by subclassing QStyle. The concepts, terminology, 
and syntax of Qt Style Sheets are heavily inspired by HTML Cascading Style Sheets (CSS) but adapted to the world of widgets.

(1) 可读性高并且非常直观,便于设置界面样式;
(2) 在每个平台上都有相同的显示效果.
(3) 可以在界面代码中省去与显示效果相关的大量代码,将界面逻辑独立出来.
(4) 在界面风格(配色, 字体等)改变的情况下, 可以不用修改 c++源码就可以实现
