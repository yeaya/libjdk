#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifPropertyChangeListener.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BasicComboBoxUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifComboBoxUI$MotifPropertyChangeListener::init$($MotifComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$PropertyChangeHandler::init$(this$0);
}

void MotifComboBoxUI$MotifPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$BasicComboBoxUI$PropertyChangeHandler::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "enabled"_s) {
		if ($$nc($MotifComboBoxUI::access$000(this->this$0))->isEnabled()) {
			$var($Component, editor, this->this$0->motifGetEditor());
			if (editor != nullptr) {
				editor->setBackground($($UIManager::getColor("text"_s)));
			}
		}
	}
}

MotifComboBoxUI$MotifPropertyChangeListener::MotifComboBoxUI$MotifPropertyChangeListener() {
}

$Class* MotifComboBoxUI$MotifPropertyChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifPropertyChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;)V", nullptr, $PRIVATE, $method(MotifComboBoxUI$MotifPropertyChangeListener, init$, void, $MotifComboBoxUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifComboBoxUI$MotifPropertyChangeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifPropertyChangeListener", $PRIVATE},
		{"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener",
		"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
	};
	$loadClass(MotifComboBoxUI$MotifPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifComboBoxUI$MotifPropertyChangeListener);
	});
	return class$;
}

$Class* MotifComboBoxUI$MotifPropertyChangeListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com