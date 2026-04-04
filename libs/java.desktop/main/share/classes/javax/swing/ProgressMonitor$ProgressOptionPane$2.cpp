#include <javax/swing/ProgressMonitor$ProgressOptionPane$2.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $ProgressMonitor$ProgressOptionPane = ::javax::swing::ProgressMonitor$ProgressOptionPane;

namespace javax {
	namespace swing {

void ProgressMonitor$ProgressOptionPane$2::init$($ProgressMonitor$ProgressOptionPane* this$1, $JDialog* val$dialog) {
	$set(this, this$1, this$1);
	$set(this, val$dialog, val$dialog);
}

void ProgressMonitor$ProgressOptionPane$2::propertyChange($PropertyChangeEvent* event) {
	$useLocalObjectStack();
	bool var$1 = $nc(this->val$dialog)->isVisible();
	bool var$0 = var$1 && $equals($nc(event)->getSource(), this->this$1);
	if (var$0) {
		bool var$2 = $$nc(event->getPropertyName())->equals("value"_s);
		var$0 = var$2 || $$nc(event->getPropertyName())->equals("inputValue"_s);
	}
	if (var$0) {
		this->val$dialog->setVisible(false);
		this->val$dialog->dispose();
	}
}

ProgressMonitor$ProgressOptionPane$2::ProgressMonitor$ProgressOptionPane$2() {
}

$Class* ProgressMonitor$ProgressOptionPane$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/ProgressMonitor$ProgressOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane$2, this$1)},
		{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane$2, val$dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ProgressMonitor$ProgressOptionPane;Ljavax/swing/JDialog;)V", "()V", 0, $method(ProgressMonitor$ProgressOptionPane$2, init$, void, $ProgressMonitor$ProgressOptionPane*, $JDialog*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor$ProgressOptionPane$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ProgressMonitor$ProgressOptionPane",
		"createDialog",
		"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ProgressMonitor$ProgressOptionPane", "javax.swing.ProgressMonitor", "ProgressOptionPane", $PRIVATE},
		{"javax.swing.ProgressMonitor$ProgressOptionPane$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ProgressMonitor$ProgressOptionPane$2",
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
		"javax.swing.ProgressMonitor"
	};
	$loadClass(ProgressMonitor$ProgressOptionPane$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitor$ProgressOptionPane$2);
	});
	return class$;
}

$Class* ProgressMonitor$ProgressOptionPane$2::class$ = nullptr;

	} // swing
} // javax