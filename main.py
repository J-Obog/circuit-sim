from PyQt5.QtWidgets import QApplication, QWidget 
import sys

def main():
    app = QApplication(sys.argv)
    win = QWidget()
    win.resize(500, 500)
    win.setWindowTitle('Main App')
    win.show()
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()