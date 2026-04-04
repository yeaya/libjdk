#include <javax/swing/JTable$NumberEditor.h>
#include <java/awt/Component.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTable$GenericEditor.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef RIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable$GenericEditor = ::javax::swing::JTable$GenericEditor;
using $JTextField = ::javax::swing::JTextField;

namespace javax {
	namespace swing {

void JTable$NumberEditor::init$() {
	$JTable$GenericEditor::init$();
	$$sure($JTextField, getComponent())->setHorizontalAlignment($JTextField::RIGHT);
}

JTable$NumberEditor::JTable$NumberEditor() {
}

$Class* JTable$NumberEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$NumberEditor, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$NumberEditor", "javax.swing.JTable", "NumberEditor", $STATIC},
		{"javax.swing.JTable$GenericEditor", "javax.swing.JTable", "GenericEditor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$NumberEditor",
		"javax.swing.JTable$GenericEditor",
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
	$loadClass(JTable$NumberEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$NumberEditor));
	});
	return class$;
}

$Class* JTable$NumberEditor::class$ = nullptr;

	} // swing
} // javax