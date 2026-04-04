#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor$1.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor$EditorBorder.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $MetalComboBoxEditor$1 = ::javax::swing::plaf::metal::MetalComboBoxEditor$1;
using $MetalComboBoxEditor$EditorBorder = ::javax::swing::plaf::metal::MetalComboBoxEditor$EditorBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$Insets* MetalComboBoxEditor::editorBorderInsets = nullptr;

void MetalComboBoxEditor::init$() {
	$BasicComboBoxEditor::init$();
	$set(this, editor, $new($MetalComboBoxEditor$1, this, ""_s, 9));
	this->editor->setBorder($$new($MetalComboBoxEditor$EditorBorder, this));
}

void MetalComboBoxEditor::clinit$($Class* clazz) {
	$assignStatic(MetalComboBoxEditor::editorBorderInsets, $new($Insets, 2, 2, 2, 0));
}

MetalComboBoxEditor::MetalComboBoxEditor() {
}

$Class* MetalComboBoxEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"editorBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalComboBoxEditor, editorBorderInsets)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalComboBoxEditor, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource", "javax.swing.plaf.metal.MetalComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder", "javax.swing.plaf.metal.MetalComboBoxEditor", "EditorBorder", 0},
		{"javax.swing.plaf.metal.MetalComboBoxEditor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxEditor",
		"javax.swing.plaf.basic.BasicComboBoxEditor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource,javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder,javax.swing.plaf.metal.MetalComboBoxEditor$1"
	};
	$loadClass(MetalComboBoxEditor, name, initialize, &classInfo$$, MetalComboBoxEditor::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalComboBoxEditor));
	});
	return class$;
}

$Class* MetalComboBoxEditor::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax