#include <javax/swing/tree/DefaultTreeCellEditor$1.h>
#include <java/util/EventObject.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTextField = ::javax::swing::JTextField;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultTreeCellEditor$1::init$($DefaultTreeCellEditor* this$0, $JTextField* textField) {
	$set(this, this$0, this$0);
	$DefaultCellEditor::init$(textField);
}

bool DefaultTreeCellEditor$1::shouldSelectCell($EventObject* event) {
	bool retValue = $DefaultCellEditor::shouldSelectCell(event);
	return retValue;
}

DefaultTreeCellEditor$1::DefaultTreeCellEditor$1() {
}

$Class* DefaultTreeCellEditor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/DefaultTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTreeCellEditor$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultTreeCellEditor;Ljavax/swing/JTextField;)V", nullptr, 0, $method(DefaultTreeCellEditor$1, init$, void, $DefaultTreeCellEditor*, $JTextField*)},
		{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellEditor$1, shouldSelectCell, bool, $EventObject*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.tree.DefaultTreeCellEditor",
		"createTreeCellEditor",
		"()Ljavax/swing/tree/TreeCellEditor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultTreeCellEditor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.tree.DefaultTreeCellEditor$1",
		"javax.swing.DefaultCellEditor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.tree.DefaultTreeCellEditor"
	};
	$loadClass(DefaultTreeCellEditor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultTreeCellEditor$1));
	});
	return class$;
}

$Class* DefaultTreeCellEditor$1::class$ = nullptr;

		} // tree
	} // swing
} // javax