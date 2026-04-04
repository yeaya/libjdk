#include <javax/swing/JTable$CellEditorRemover.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableCellEditor.h>
#include <jcpp.h>

#undef TRUE

using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

void JTable$CellEditorRemover::init$($JTable* this$0, $KeyboardFocusManager* fm) {
	$set(this, this$0, this$0);
	$set(this, focusManager, fm);
}

void JTable$CellEditorRemover::propertyChange($PropertyChangeEvent* ev) {
	$useLocalObjectStack();
	bool var$0 = !this->this$0->isEditing();
	if (var$0 || !$equals(this->this$0->getClientProperty("terminateEditOnFocusLost"_s), $Boolean::TRUE)) {
		return;
	}
	$var($Component, c, $nc(this->focusManager)->getPermanentFocusOwner());
	while (c != nullptr) {
		if ($equals(c, this->this$0)) {
			return;
		} else if (($instanceOf($Window, c)) || ($instanceOf($Applet, c) && c->getParent() == nullptr)) {
			if (c == $SwingUtilities::getRoot(this->this$0)) {
				if (!$$nc(this->this$0->getCellEditor())->stopCellEditing()) {
					$$nc(this->this$0->getCellEditor())->cancelCellEditing();
				}
			}
			break;
		}
		$assign(c, c->getParent());
	}
}

JTable$CellEditorRemover::JTable$CellEditorRemover() {
}

$Class* JTable$CellEditorRemover::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$CellEditorRemover, this$0)},
		{"focusManager", "Ljava/awt/KeyboardFocusManager;", nullptr, 0, $field(JTable$CellEditorRemover, focusManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;Ljava/awt/KeyboardFocusManager;)V", nullptr, $PUBLIC, $method(JTable$CellEditorRemover, init$, void, $JTable*, $KeyboardFocusManager*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable$CellEditorRemover, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$CellEditorRemover", "javax.swing.JTable", "CellEditorRemover", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$CellEditorRemover",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$CellEditorRemover, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$CellEditorRemover);
	});
	return class$;
}

$Class* JTable$CellEditorRemover::class$ = nullptr;

	} // swing
} // javax