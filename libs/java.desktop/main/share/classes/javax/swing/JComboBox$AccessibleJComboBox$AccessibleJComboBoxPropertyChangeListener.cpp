#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;

namespace javax {
	namespace swing {

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	if ($nc(e)->getPropertyName() == "editor"_s) {
		this->this$1->setEditorNameAndDescription();
	}
}

JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, init$, void, $JComboBox$AccessibleJComboBox*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
		{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxPropertyChangeListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener);
	});
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax