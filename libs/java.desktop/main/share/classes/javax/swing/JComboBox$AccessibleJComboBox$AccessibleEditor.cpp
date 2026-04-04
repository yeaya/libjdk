#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleEditor.h>
#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$EditorAccessibleContext.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JComboBox$AccessibleJComboBox$EditorAccessibleContext = ::javax::swing::JComboBox$AccessibleJComboBox$EditorAccessibleContext;

namespace javax {
	namespace swing {

void JComboBox$AccessibleJComboBox$AccessibleEditor::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

$AccessibleContext* JComboBox$AccessibleJComboBox$AccessibleEditor::getAccessibleContext() {
	$useLocalObjectStack();
	if (this->this$1->editorAccessibleContext == nullptr) {
		$var($Component, c, $$nc($nc(this->this$1->this$0)->getEditor())->getEditorComponent());
		if ($instanceOf($Accessible, c)) {
			$set(this->this$1, editorAccessibleContext, $new($JComboBox$AccessibleJComboBox$EditorAccessibleContext, this->this$1, $cast($Accessible, c)));
		}
	}
	return this->this$1->editorAccessibleContext;
}

JComboBox$AccessibleJComboBox$AccessibleEditor::JComboBox$AccessibleJComboBox$AccessibleEditor() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleEditor, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(JComboBox$AccessibleJComboBox$AccessibleEditor, init$, void, $JComboBox$AccessibleJComboBox*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox$AccessibleEditor, getAccessibleContext, $AccessibleContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
		{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleEditor", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor",
		"java.lang.Object",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComboBox"
	};
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBox$AccessibleJComboBox$AccessibleEditor);
	});
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleEditor::class$ = nullptr;

	} // swing
} // javax