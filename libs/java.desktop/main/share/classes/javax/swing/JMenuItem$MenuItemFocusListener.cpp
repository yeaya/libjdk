#include <javax/swing/JMenuItem$MenuItemFocusListener.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace javax {
	namespace swing {

int32_t JMenuItem$MenuItemFocusListener::hashCode() {
	return this->$FocusListener::hashCode();
}

bool JMenuItem$MenuItemFocusListener::equals(Object$* arg0) {
	return this->$FocusListener::equals(arg0);
}

$Object* JMenuItem$MenuItemFocusListener::clone() {
	return this->$FocusListener::clone();
}

$String* JMenuItem$MenuItemFocusListener::toString() {
	return this->$FocusListener::toString();
}

void JMenuItem$MenuItemFocusListener::finalize() {
	this->$FocusListener::finalize();
}

void JMenuItem$MenuItemFocusListener::init$() {
}

void JMenuItem$MenuItemFocusListener::focusGained($FocusEvent* event) {
}

void JMenuItem$MenuItemFocusListener::focusLost($FocusEvent* event) {
	$var($JMenuItem, mi, $cast($JMenuItem, $nc(event)->getSource()));
	if ($nc(mi)->isFocusPainted()) {
		mi->repaint();
	}
}

JMenuItem$MenuItemFocusListener::JMenuItem$MenuItemFocusListener() {
}

$Class* JMenuItem$MenuItemFocusListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(JMenuItem$MenuItemFocusListener, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem$MenuItemFocusListener, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem$MenuItemFocusListener, focusLost, void, $FocusEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JMenuItem$MenuItemFocusListener", "javax.swing.JMenuItem", "MenuItemFocusListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JMenuItem$MenuItemFocusListener",
		"java.lang.Object",
		"java.awt.event.FocusListener,java.io.Serializable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JMenuItem"
	};
	$loadClass(JMenuItem$MenuItemFocusListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JMenuItem$MenuItemFocusListener));
	});
	return class$;
}

$Class* JMenuItem$MenuItemFocusListener::class$ = nullptr;

	} // swing
} // javax