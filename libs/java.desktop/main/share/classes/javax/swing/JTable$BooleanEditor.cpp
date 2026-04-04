#include <javax/swing/JTable$BooleanEditor.h>
#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef CENTER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JCheckBox = ::javax::swing::JCheckBox;

namespace javax {
	namespace swing {

void JTable$BooleanEditor::init$() {
	$useLocalObjectStack();
	$DefaultCellEditor::init$($$new($JCheckBox));
	$var($JCheckBox, checkBox, $cast($JCheckBox, getComponent()));
	$nc(checkBox)->setHorizontalAlignment($JCheckBox::CENTER);
}

JTable$BooleanEditor::JTable$BooleanEditor() {
}

$Class* JTable$BooleanEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$BooleanEditor, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$BooleanEditor", "javax.swing.JTable", "BooleanEditor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$BooleanEditor",
		"javax.swing.DefaultCellEditor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$BooleanEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$BooleanEditor));
	});
	return class$;
}

$Class* JTable$BooleanEditor::class$ = nullptr;

	} // swing
} // javax