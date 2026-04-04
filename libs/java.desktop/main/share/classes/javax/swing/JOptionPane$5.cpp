#include <javax/swing/JOptionPane$5.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace javax {
	namespace swing {

void JOptionPane$5::init$($JOptionPane* this$0, $JInternalFrame* val$iFrame) {
	$set(this, this$0, this$0);
	$set(this, val$iFrame, val$iFrame);
}

void JOptionPane$5::propertyChange($PropertyChangeEvent* event) {
	$useLocalObjectStack();
	bool var$1 = $nc(this->val$iFrame)->isVisible();
	bool var$0 = var$1 && $equals($nc(event)->getSource(), this->this$0);
	if (var$0 && $$nc(event->getPropertyName())->equals("value"_s)) {
		$$nc($AWTAccessor::getContainerAccessor())->stopLWModal(this->val$iFrame);
		try {
			this->val$iFrame->setClosed(true);
		} catch ($PropertyVetoException& e) {
		}
		this->val$iFrame->setVisible(false);
	}
}

JOptionPane$5::JOptionPane$5() {
}

$Class* JOptionPane$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$5, this$0)},
		{"val$iFrame", "Ljavax/swing/JInternalFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$5, val$iFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JOptionPane;Ljavax/swing/JInternalFrame;)V", "()V", 0, $method(JOptionPane$5, init$, void, $JOptionPane*, $JInternalFrame*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane$5, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JOptionPane",
		"createInternalFrame",
		"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JOptionPane$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JOptionPane$5",
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
	$loadClass(JOptionPane$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPane$5);
	});
	return class$;
}

$Class* JOptionPane$5::class$ = nullptr;

	} // swing
} // javax