#include <javax/swing/plaf/basic/BasicSplitPaneUI$Handler.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef CONTINUOUS_LAYOUT_PROPERTY
#undef DIVIDER_SIZE_PROPERTY
#undef ORIENTATION_PROPERTY

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicSplitPaneUI$Handler::hashCode() {
	return this->$FocusListener::hashCode();
}

bool BasicSplitPaneUI$Handler::equals(Object$* arg0) {
	return this->$FocusListener::equals(arg0);
}

$Object* BasicSplitPaneUI$Handler::clone() {
	return this->$FocusListener::clone();
}

$String* BasicSplitPaneUI$Handler::toString() {
	return this->$FocusListener::toString();
}

void BasicSplitPaneUI$Handler::finalize() {
	this->$FocusListener::finalize();
}

void BasicSplitPaneUI$Handler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	if ($equals($nc(e)->getSource(), this->this$0->splitPane)) {
		$var($String, changeName, e->getPropertyName());
		$init($JSplitPane);
		if (changeName == $JSplitPane::ORIENTATION_PROPERTY) {
			this->this$0->orientation = $nc(this->this$0->splitPane)->getOrientation();
			this->this$0->resetLayoutManager();
		} else if (changeName == $JSplitPane::CONTINUOUS_LAYOUT_PROPERTY) {
			this->this$0->setContinuousLayout($nc(this->this$0->splitPane)->isContinuousLayout());
			if (!this->this$0->isContinuousLayout()) {
				if (this->this$0->nonContinuousLayoutDivider == nullptr) {
					this->this$0->setNonContinuousLayoutDivider($(this->this$0->createDefaultNonContinuousLayoutDivider()), true);
				} else if (this->this$0->nonContinuousLayoutDivider->getParent() == nullptr) {
					this->this$0->setNonContinuousLayoutDivider(this->this$0->nonContinuousLayoutDivider, true);
				}
			}
		} else if (changeName == $JSplitPane::DIVIDER_SIZE_PROPERTY) {
			$nc(this->this$0->divider)->setDividerSize($nc(this->this$0->splitPane)->getDividerSize());
			this->this$0->dividerSize = $nc(this->this$0->divider)->getDividerSize();
			$nc(this->this$0->splitPane)->revalidate();
			$nc(this->this$0->splitPane)->repaint();
		}
	}
}

void BasicSplitPaneUI$Handler::focusGained($FocusEvent* ev) {
	this->this$0->dividerKeyboardResize = true;
	$nc(this->this$0->splitPane)->repaint();
}

void BasicSplitPaneUI$Handler::focusLost($FocusEvent* ev) {
	this->this$0->dividerKeyboardResize = false;
	$nc(this->this$0->splitPane)->repaint();
}

BasicSplitPaneUI$Handler::BasicSplitPaneUI$Handler() {
}

$Class* BasicSplitPaneUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PRIVATE, $method(BasicSplitPaneUI$Handler, init$, void, $BasicSplitPaneUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$Handler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$Handler, focusLost, void, $FocusEvent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$Handler, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$Handler", "javax.swing.plaf.basic.BasicSplitPaneUI", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$Handler",
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
		"javax.swing.plaf.basic.BasicSplitPaneUI"
	};
	$loadClass(BasicSplitPaneUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicSplitPaneUI$Handler));
	});
	return class$;
}

$Class* BasicSplitPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax