#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Window.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef WINDOW

using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

void Window$AccessibleAWTWindow::init$($Window* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Window$AccessibleAWTWindow::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::WINDOW;
}

$AccessibleStateSet* Window$AccessibleAWTWindow::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Container$AccessibleAWTContainer::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	return states;
}

Window$AccessibleAWTWindow::Window$AccessibleAWTWindow() {
}

$Class* Window$AccessibleAWTWindow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Window$AccessibleAWTWindow, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Window$AccessibleAWTWindow, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PROTECTED, $method(Window$AccessibleAWTWindow, init$, void, $Window*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Window$AccessibleAWTWindow, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(Window$AccessibleAWTWindow, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Window$AccessibleAWTWindow",
		"java.awt.Container$AccessibleAWTContainer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Window"
	};
	$loadClass(Window$AccessibleAWTWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Window$AccessibleAWTWindow));
	});
	return class$;
}

$Class* Window$AccessibleAWTWindow::class$ = nullptr;

	} // awt
} // java