#include <javax/swing/DefaultCellEditor$2.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JCheckBox.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JCheckBox = ::javax::swing::JCheckBox;

namespace javax {
	namespace swing {

void DefaultCellEditor$2::init$($DefaultCellEditor* this$0, $JCheckBox* val$checkBox) {
	$set(this, this$0, this$0);
	$set(this, val$checkBox, val$checkBox);
	$DefaultCellEditor$EditorDelegate::init$(this$0);
}

void DefaultCellEditor$2::setValue(Object$* value) {
	bool selected = false;
	if ($instanceOf($Boolean, value)) {
		selected = $cast($Boolean, value)->booleanValue();
	} else if ($instanceOf($String, value)) {
		selected = $of(value)->equals("true"_s);
	}
	$nc(this->val$checkBox)->setSelected(selected);
}

$Object* DefaultCellEditor$2::getCellEditorValue() {
	return $of($Boolean::valueOf($nc(this->val$checkBox)->isSelected()));
}

DefaultCellEditor$2::DefaultCellEditor$2() {
}

$Class* DefaultCellEditor$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$2, this$0)},
		{"val$checkBox", "Ljavax/swing/JCheckBox;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$2, val$checkBox)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultCellEditor;Ljavax/swing/JCheckBox;)V", nullptr, 0, $method(DefaultCellEditor$2, init$, void, $DefaultCellEditor*, $JCheckBox*)},
		{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$2, getCellEditorValue, $Object*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultCellEditor$2, setValue, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.DefaultCellEditor",
		"<init>",
		"(Ljavax/swing/JCheckBox;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultCellEditor$2", nullptr, nullptr, 0},
		{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DefaultCellEditor$2",
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
	$loadClass(DefaultCellEditor$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultCellEditor$2));
	});
	return class$;
}

$Class* DefaultCellEditor$2::class$ = nullptr;

	} // swing
} // javax