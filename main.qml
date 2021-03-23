import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Scroll")
    //console.log("test");

    ScrollView {
        anchors.fill: parent

        ListView {
            id: listView
            width: parent.width
            model: log.list
            delegate: ItemDelegate {
           Text {
           text: modelData;
           }
            }
        }
    }
}
