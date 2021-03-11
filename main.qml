import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2
import example 1.0

Window {
    id: root
    visible: true
    width: colLayout.width + 4
    FactorialCalculator {
        id: calculator
    }

    ColumnLayout {
        id: colLayout
        spacing: 2
        anchors.margins: 2
        anchors.centerIn: parent
        TextField {
            id: txtField
            placeholderText: "Значение для вычисления"
            validator: IntValidator {
                bottom: 0
                top: 30
            }
            focus: true
        }
        RowLayout {
            spacing: 2
            Label {
                text: "Результат:"
            }
            Text {
                id: resultLbl
                text: calculator.result
            }
        }
        CustomButton {
            text: "Вычислить"
            Layout.alignment: Qt.AlignHCenter
            Layout.fillWidth: true
            onClicked: calculator.handleCalculate(txtField.text)
        }
        CustomButton {
            id: logBtn
            text: "Вывести результат в консоль"
            Layout.alignment: Qt.AlignHCenter
            Layout.fillWidth: true
            onClicked: console.log("Результат: ", resultLbl.text)
        }
    }
}
