#include <javax/swing/plaf/basic/BasicMenuBarUI$Handler.h>
#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicMenuBarUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicMenuBarUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicMenuBarUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicMenuBarUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicMenuBarUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicMenuBarUI$Handler::init$($BasicMenuBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuBarUI$Handler::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t c = 0;
	for (i = 0, c = $nc(this->this$0->menuBar)->getMenuCount(); i < c; ++i) {
		$var($JMenu, menu, $nc(this->this$0->menuBar)->getMenu(i));
		if (menu != nullptr && menu->isSelected()) {
			$$nc($nc(this->this$0->menuBar)->getSelectionModel())->setSelectedIndex(i);
			break;
		}
	}
}

void BasicMenuBarUI$Handler::componentAdded($ContainerEvent* e) {
	$useLocalObjectStack();
	$var($Component, c, $nc(e)->getChild());
	if ($instanceOf($JMenu, c)) {
		$$nc($cast($JMenu, c)->getModel())->addChangeListener(this->this$0->changeListener);
	}
}

void BasicMenuBarUI$Handler::componentRemoved($ContainerEvent* e) {
	$useLocalObjectStack();
	$var($Component, c, $nc(e)->getChild());
	if ($instanceOf($JMenu, c)) {
		$$nc($cast($JMenu, c)->getModel())->removeChangeListener(this->this$0->changeListener);
	}
}

BasicMenuBarUI$Handler::BasicMenuBarUI$Handler() {
}

$Class* BasicMenuBarUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuBarUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuBarUI;)V", nullptr, $PRIVATE, $method(BasicMenuBarUI$Handler, init$, void, $BasicMenuBarUI*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuBarUI$Handler, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuBarUI$Handler, componentRemoved, void, $ContainerEvent*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuBarUI$Handler, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicMenuBarUI$Handler", "javax.swing.plaf.basic.BasicMenuBarUI", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicMenuBarUI$Handler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener,java.awt.event.ContainerListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicMenuBarUI"
	};
	$loadClass(BasicMenuBarUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicMenuBarUI$Handler));
	});
	return class$;
}

$Class* BasicMenuBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax