#! /usr/bin/env python3

import sys
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QHBoxLayout

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Label")
layout = QHBoxLayout()
window.setLayout(layout)
label = QLabel("Hello, world!")
label.setAlignment(Qt.AlignCenter)
layout.addWidget(label)
window.show()
sys.exit(app.exec_())
