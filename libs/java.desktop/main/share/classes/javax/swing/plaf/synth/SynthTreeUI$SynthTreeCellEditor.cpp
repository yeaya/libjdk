#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor.h>
#include <java/awt/Color.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor$1.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $SynthTreeUI$SynthTreeCellEditor$1 = ::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellEditor$1;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTreeUI$SynthTreeCellEditor::init$($JTree* tree, $DefaultTreeCellRenderer* renderer) {
	$DefaultTreeCellEditor::init$(tree, renderer);
	setBorderSelectionColor(nullptr);
}

$TreeCellEditor* SynthTreeUI$SynthTreeCellEditor::createTreeCellEditor() {
	$useLocalObjectStack();
	$var($JTextField, tf, $new($SynthTreeUI$SynthTreeCellEditor$1, this));
	$var($DefaultCellEditor, editor, $new($DefaultCellEditor, tf));
	editor->setClickCountToStart(1);
	return editor;
}

SynthTreeUI$SynthTreeCellEditor::SynthTreeUI$SynthTreeCellEditor() {
}

$Class* SynthTreeUI$SynthTreeCellEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTree;Ljavax/swing/tree/DefaultTreeCellRenderer;)V", nullptr, $PUBLIC, $method(SynthTreeUI$SynthTreeCellEditor, init$, void, $JTree*, $DefaultTreeCellRenderer*)},
		{"createTreeCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED, $virtualMethod(SynthTreeUI$SynthTreeCellEditor, createTreeCellEditor, $TreeCellEditor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellEditor", $PRIVATE | $STATIC},
		{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor",
		"javax.swing.tree.DefaultTreeCellEditor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTreeUI"
	};
	$loadClass(SynthTreeUI$SynthTreeCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTreeUI$SynthTreeCellEditor));
	});
	return class$;
}

$Class* SynthTreeUI$SynthTreeCellEditor::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax