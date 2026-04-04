#include <sun/swing/FilePane$8.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef SINGLE_SELECTION

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$8::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void FilePane$8::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	$var($JScrollPane, jsp, $cast($JScrollPane, $nc(e)->getComponent()));
	$var($JTable, table, $cast($JTable, $$nc($nc(jsp)->getViewport())->getView()));
	bool var$0 = !e->isShiftDown();
	if (var$0 || $$nc($nc(table)->getSelectionModel())->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		this->this$0->clearSelection();
		$var($TableCellEditor, tce, $nc(table)->getCellEditor());
		if (tce != nullptr) {
			tce->stopCellEditing();
		}
	}
}

FilePane$8::FilePane$8() {
}

$Class* FilePane$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(FilePane$8, init$, void, $FilePane*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$8, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		"createDetailsView",
		"()Ljavax/swing/JPanel;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$8",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$8));
	});
	return class$;
}

$Class* FilePane$8::class$ = nullptr;

	} // swing
} // sun