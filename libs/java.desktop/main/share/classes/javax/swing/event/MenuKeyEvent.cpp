#include <javax/swing/event/MenuKeyEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace javax {
	namespace swing {
		namespace event {

void MenuKeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, $MenuElementArray* p, $MenuSelectionManager* m) {
	$KeyEvent::init$(source, id, when, modifiers, keyCode, keyChar);
	$set(this, path, p);
	$set(this, manager, m);
}

$MenuElementArray* MenuKeyEvent::getPath() {
	return this->path;
}

$MenuSelectionManager* MenuKeyEvent::getMenuSelectionManager() {
	return this->manager;
}

MenuKeyEvent::MenuKeyEvent() {
}

$Class* MenuKeyEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "[Ljavax/swing/MenuElement;", nullptr, $PRIVATE, $field(MenuKeyEvent, path)},
		{"manager", "Ljavax/swing/MenuSelectionManager;", nullptr, $PRIVATE, $field(MenuKeyEvent, manager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;IJIIC[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(MenuKeyEvent, init$, void, $Component*, int32_t, int64_t, int32_t, int32_t, char16_t, $MenuElementArray*, $MenuSelectionManager*)},
		{"getMenuSelectionManager", "()Ljavax/swing/MenuSelectionManager;", nullptr, $PUBLIC, $virtualMethod(MenuKeyEvent, getMenuSelectionManager, $MenuSelectionManager*)},
		{"getPath", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, $virtualMethod(MenuKeyEvent, getPath, $MenuElementArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.MenuKeyEvent",
		"java.awt.event.KeyEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MenuKeyEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuKeyEvent);
	});
	return class$;
}

$Class* MenuKeyEvent::class$ = nullptr;

		} // event
	} // swing
} // javax