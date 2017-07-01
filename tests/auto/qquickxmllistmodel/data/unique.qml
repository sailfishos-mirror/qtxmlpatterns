import QtQuick 2.0
import QtQuick.XmlListModel 2.0

XmlListModel {
    source: "model.xml"
    query: "/Pets/Pet"
    XmlRole { name: "name"; query: "name/string()" }
    XmlRole { name: "name"; query: "type/string()" }
}
