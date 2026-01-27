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

$MethodInfo _MenuElement_MethodInfo_[] = {
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, getComponent, $Component*)},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, getSubElements, $MenuElementArray*)},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, menuSelectionChanged, void, bool)},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, processKeyEvent, void, $KeyEvent*, $MenuElementArray*, $MenuSelectionManager*)},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuElement, processMouseEvent, void, $MouseEvent*, $MenuElementArray*, $MenuSelectionManager*)},
	{}
};

$ClassInfo _MenuElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.MenuElement",
	nullptr,
	nullptr,
	nullptr,
	_MenuElement_MethodInfo_
};

$Object* allocate$MenuElement($Class* clazz) {
	return $of($alloc(MenuElement));
}

$Class* MenuElement::load$($String* name, bool initialize) {
	$loadClass(MenuElement, name, initialize, &_MenuElement_ClassInfo_, allocate$MenuElement);
	return class$;
}

$Class* MenuElement::class$ = nullptr;

	} // swing
} // javax