#include <javax/swing/DefaultCellEditor$3.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

#undef MOUSE_DRAGGED

using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JComboBox = ::javax::swing::JComboBox;

namespace javax {
	namespace swing {

void DefaultCellEditor$3::init$($DefaultCellEditor* this$0, $JComboBox* val$comboBox) {
	$set(this, this$0, this$0);
	$set(this, val$comboBox, val$comboBox);
	$DefaultCellEditor$EditorDelegate::init$(this$0);
}

void DefaultCellEditor$3::setValue(Object$* value) {
	$nc(this->val$comboBox)->setSelectedItem(value);
}

$Object* DefaultCellEditor$3::getCellEditorValue() {
	return $nc(this->val$comboBox)->getSelectedItem();
}

bool DefaultCellEditor$3::shouldSelectCell($EventObject* anEvent) {
	if ($instanceOf($MouseEvent, anEvent)) {
		$var($MouseEvent, e, $cast($MouseEvent, anEvent));
		return e->getID() != $MouseEvent::MOUSE_DRAGGED;
	}
	return true;
}

bool DefaultCellEditor$3::stopCellEditing() {
	if ($nc(this->val$comboBox)->isEditable()) {
		this->val$comboBox->actionPerformed($$new($ActionEvent, this->this$0, 0, ""_s));
	}
	return $DefaultCellEditor$EditorDelegate::stopCellEditing();
}

DefaultCellEditor$3::DefaultCellEditor$3() {
}

$Class* DefaultCellEditor$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$3, this$0)},
		{"val$comboBox", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$3, val$comboBox)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultCellEditor;Ljavax/swing/JComboBox;)V", nullptr, 0, $method(DefaultCellEditor$3, init$, void, $DefaultCellEditor*, $JComboBox*)},
		{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$3, getCellEditorValue, $Object*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$3, setValue, void, Object$*)},
		{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$3, shouldSelectCell, bool, $EventObject*)},
		{"stopCellEditing", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$3, stopCellEditing, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.DefaultCellEditor",
		"<init>",
		"(Ljavax/swing/JComboBox;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultCellEditor$3", nullptr, nullptr, 0},
		{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DefaultCellEditor$3",
		"javax.swing.DefaultCellEditor$EditorDelegate",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.DefaultCellEditor"
	};
	$loadClass(DefaultCellEditor$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultCellEditor$3));
	});
	return class$;
}

$Class* DefaultCellEditor$3::class$ = nullptr;

	} // swing
} // javax