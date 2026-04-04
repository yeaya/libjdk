#include <sun/swing/FilePane$DetailsTableCellEditor.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusListener.h>
#include <java/io/File.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$DetailsTableCellEditor::init$($FilePane* this$0, $JTextField* tf) {
	$set(this, this$0, this$0);
	$DefaultCellEditor::init$(tf);
	$set(this, tf, tf);
	$nc(tf)->setName("Table.editor"_s);
	tf->addFocusListener(this$0->editorFocusListener);
}

$Component* FilePane$DetailsTableCellEditor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($Component, comp, $DefaultCellEditor::getTableCellEditorComponent(table, value, isSelected, row, column));
	if ($instanceOf($File, value)) {
		$nc(this->tf)->setText($($$nc(this->this$0->getFileChooser())->getName($cast($File, value))));
		this->tf->selectAll();
	}
	return comp;
}

FilePane$DetailsTableCellEditor::FilePane$DetailsTableCellEditor() {
}

$Class* FilePane$DetailsTableCellEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableCellEditor, this$0)},
		{"tf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $FINAL, $field(FilePane$DetailsTableCellEditor, tf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JTextField;)V", nullptr, $PUBLIC, $method(FilePane$DetailsTableCellEditor, init$, void, $FilePane*, $JTextField*)},
		{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableCellEditor, getTableCellEditorComponent, $Component*, $JTable*, Object$*, bool, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DetailsTableCellEditor", "sun.swing.FilePane", "DetailsTableCellEditor", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DetailsTableCellEditor",
		"javax.swing.DefaultCellEditor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$DetailsTableCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$DetailsTableCellEditor));
	});
	return class$;
}

$Class* FilePane$DetailsTableCellEditor::class$ = nullptr;

	} // swing
} // sun