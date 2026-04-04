#include <javax/swing/plaf/synth/SynthComboBoxUI$SynthComboBoxEditor.h>
#include <java/awt/Component.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthComboBoxUI$SynthComboBoxEditor::init$() {
	$BasicComboBoxEditor$UIResource::init$();
}

$JTextField* SynthComboBoxUI$SynthComboBoxEditor::createEditorComponent() {
	$var($JTextField, f, $new($JTextField, ""_s, 9));
	f->setName("ComboBox.textField"_s);
	return f;
}

SynthComboBoxUI$SynthComboBoxEditor::SynthComboBoxUI$SynthComboBoxEditor() {
}

$Class* SynthComboBoxUI$SynthComboBoxEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SynthComboBoxUI$SynthComboBoxEditor, init$, void)},
		{"createEditorComponent", "()Ljavax/swing/JTextField;", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$SynthComboBoxEditor, createEditorComponent, $JTextField*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor", "javax.swing.plaf.synth.SynthComboBoxUI", "SynthComboBoxEditor", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor",
		"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthComboBoxUI"
	};
	$loadClass(SynthComboBoxUI$SynthComboBoxEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthComboBoxUI$SynthComboBoxEditor));
	});
	return class$;
}

$Class* SynthComboBoxUI$SynthComboBoxEditor::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax