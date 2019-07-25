#! /usr/bin/env python3

import sys
from PyQt5.QtWidgets import QApplication, QWidget

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Empty Window")
window.resize(320, 200)
window.show()
sys.exit(app.exec_())
