#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv) {
    QApplication a(argc, argv); 
    QMainWindow win;
    win.setGeometry(100, 100, 800, 800);  
    win.show(); 
    return a.exec(); 
}
