#include <javax/swing/MenuElement.h>
#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace javax {
	namespace swing {

$Class* MenuElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, getComponent, $Component*)},
		{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, getSubElements, $MenuElementArray*)},
		{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, menuSelectionChanged, void, bool)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, processKeyEvent, void, $KeyEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, processMouseEvent, void, $MouseEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.MenuElement",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuElement);
	});
	return class$;
}

$Class* MenuElement::class$ = nullptr;

	} // swing
} // javax