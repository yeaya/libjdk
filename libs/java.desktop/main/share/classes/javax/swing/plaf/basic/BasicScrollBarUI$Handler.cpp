#include <javax/swing/plaf/basic/BasicScrollBarUI$Handler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ModelListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicScrollBarUI$Handler::hashCode() {
	return this->$FocusListener::hashCode();
}

bool BasicScrollBarUI$Handler::equals(Object$* arg0) {
	return this->$FocusListener::equals(arg0);
}

$Object* BasicScrollBarUI$Handler::clone() {
	return this->$FocusListener::clone();
}

$String* BasicScrollBarUI$Handler::toString() {
	return this->$FocusListener::toString();
}

void BasicScrollBarUI$Handler::finalize() {
	this->$FocusListener::finalize();
}

void BasicScrollBarUI$Handler::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollBarUI$Handler::focusGained($FocusEvent* e) {
	$nc(this->this$0->scrollbar)->repaint();
}

void BasicScrollBarUI$Handler::focusLost($FocusEvent* e) {
	$nc(this->this$0->scrollbar)->repaint();
}

void BasicScrollBarUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ("model"_s == propertyName) {
		$var($BoundedRangeModel, oldModel, $cast($BoundedRangeModel, e->getOldValue()));
		$var($BoundedRangeModel, newModel, $cast($BoundedRangeModel, e->getNewValue()));
		$nc(oldModel)->removeChangeListener(this->this$0->modelListener);
		$nc(newModel)->addChangeListener(this->this$0->modelListener);
		this->this$0->scrollBarValue = $nc(this->this$0->scrollbar)->getValue();
		$nc(this->this$0->scrollbar)->repaint();
		$nc(this->this$0->scrollbar)->revalidate();
	} else if ("orientation"_s == propertyName) {
		this->this$0->updateButtonDirections();
	} else if ("componentOrientation"_s == propertyName) {
		this->this$0->updateButtonDirections();
		$var($InputMap, inputMap, this->this$0->getInputMap($JComponent::WHEN_FOCUSED));
		$SwingUtilities::replaceUIInputMap(this->this$0->scrollbar, $JComponent::WHEN_FOCUSED, inputMap);
	}
}

BasicScrollBarUI$Handler::BasicScrollBarUI$Handler() {
}

$Class* BasicScrollBarUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PRIVATE, $method(BasicScrollBarUI$Handler, init$, void, $BasicScrollBarUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicScrollBarUI$Handler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicScrollBarUI$Handler, focusLost, void, $FocusEvent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicScrollBarUI$Handler, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicScrollBarUI$Handler", "javax.swing.plaf.basic.BasicScrollBarUI", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicScrollBarUI$Handler",
		"java.lang.Object",
		"java.awt.event.FocusListener,java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicScrollBarUI"
	};
	$loadClass(BasicScrollBarUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicScrollBarUI$Handler));
	});
	return class$;
}

$Class* BasicScrollBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax