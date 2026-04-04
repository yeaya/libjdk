#include <javax/swing/DefaultCellEditor$1.h>
#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JTextField = ::javax::swing::JTextField;

namespace javax {
	namespace swing {

void DefaultCellEditor$1::init$($DefaultCellEditor* this$0, $JTextField* val$textField) {
	$set(this, this$0, this$0);
	$set(this, val$textField, val$textField);
	$DefaultCellEditor$EditorDelegate::init$(this$0);
}

void DefaultCellEditor$1::setValue(Object$* value) {
	$nc(this->val$textField)->setText((value != nullptr) ? $($of(value)->toString()) : ""_s);
}

$Object* DefaultCellEditor$1::getCellEditorValue() {
	return $of($nc(this->val$textField)->getText());
}

DefaultCellEditor$1::DefaultCellEditor$1() {
}

$Class* DefaultCellEditor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$1, this$0)},
		{"val$textField", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$1, val$textField)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultCellEditor;Ljavax/swing/JTextField;)V", nullptr, 0, $method(DefaultCellEditor$1, init$, void, $DefaultCellEditor*, $JTextField*)},
		{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$1, getCellEditorValue, $Object*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$1, setValue, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.DefaultCellEditor",
		"<init>",
		"(Ljavax/swing/JTextField;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultCellEditor$1", nullptr, nullptr, 0},
		{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DefaultCellEditor$1",
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
	$loadClass(DefaultCellEditor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultCellEditor$1));
	});
	return class$;
}

$Class* DefaultCellEditor$1::class$ = nullptr;

	} // swing
} // javax