#include <javax/swing/JOptionPane$1.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

void JOptionPane$1::init$($JOptionPane* this$0, $JDialog* val$dialog) {
	$set(this, this$0, this$0);
	$set(this, val$dialog, val$dialog);
}

void JOptionPane$1::propertyChange($PropertyChangeEvent* event) {
	bool var$3 = $nc(this->val$dialog)->isVisible();
	bool var$2 = var$3 && $equals($nc(event)->getSource(), this->this$0);
	bool var$1 = var$2 && ($$nc(event->getPropertyName())->equals("value"_s));
	bool var$0 = var$1 && event->getNewValue() != nullptr;
	$init($JOptionPane);
	if (var$0 && !$equals(event->getNewValue(), $JOptionPane::UNINITIALIZED_VALUE)) {
		this->val$dialog->setVisible(false);
	}
}

JOptionPane$1::JOptionPane$1() {
}

$Class* JOptionPane$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$1, this$0)},
		{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$1, val$dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JOptionPane;Ljavax/swing/JDialog;)V", "()V", 0, $method(JOptionPane$1, init$, void, $JOptionPane*, $JDialog*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JOptionPane",
		"initDialog",
		"(Ljavax/swing/JDialog;ILjava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JOptionPane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JOptionPane$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JOptionPane"
	};
	$loadClass(JOptionPane$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPane$1);
	});
	return class$;
}

$Class* JOptionPane$1::class$ = nullptr;

	} // swing
} // javax