#include <javax/swing/ComboBoxEditor.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionListener.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _ComboBoxEditor_MethodInfo_[] = {
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, addActionListener, void, $ActionListener*)},
	{"getEditorComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, getEditorComponent, $Component*)},
	{"getItem", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, getItem, $Object*)},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, removeActionListener, void, $ActionListener*)},
	{"selectAll", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, selectAll, void)},
	{"setItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxEditor, setItem, void, Object$*)},
	{}
};

$ClassInfo _ComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ComboBoxEditor",
	nullptr,
	nullptr,
	nullptr,
	_ComboBoxEditor_MethodInfo_
};

$Object* allocate$ComboBoxEditor($Class* clazz) {
	return $of($alloc(ComboBoxEditor));
}

$Class* ComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(ComboBoxEditor, name, initialize, &_ComboBoxEditor_ClassInfo_, allocate$ComboBoxEditor);
	return class$;
}

$Class* ComboBoxEditor::class$ = nullptr;

	} // swing
} // javax