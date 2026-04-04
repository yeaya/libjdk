#include <java/awt/MenuBar$AccessibleAWTMenuBar.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef MENU_BAR

using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void MenuBar$AccessibleAWTMenuBar::init$($MenuBar* this$0) {
	$set(this, this$0, this$0);
	$MenuComponent$AccessibleAWTMenuComponent::init$(this$0);
}

$AccessibleRole* MenuBar$AccessibleAWTMenuBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU_BAR;
}

MenuBar$AccessibleAWTMenuBar::MenuBar$AccessibleAWTMenuBar() {
}

$Class* MenuBar$AccessibleAWTMenuBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/MenuBar;", nullptr, $FINAL | $SYNTHETIC, $field(MenuBar$AccessibleAWTMenuBar, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuBar$AccessibleAWTMenuBar, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, $PROTECTED, $method(MenuBar$AccessibleAWTMenuBar, init$, void, $MenuBar*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(MenuBar$AccessibleAWTMenuBar, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MenuBar$AccessibleAWTMenuBar", "java.awt.MenuBar", "AccessibleAWTMenuBar", $PROTECTED},
		{"java.awt.MenuComponent$AccessibleAWTMenuComponent", "java.awt.MenuComponent", "AccessibleAWTMenuComponent", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.MenuBar$AccessibleAWTMenuBar",
		"java.awt.MenuComponent$AccessibleAWTMenuComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.MenuBar"
	};
	$loadClass(MenuBar$AccessibleAWTMenuBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MenuBar$AccessibleAWTMenuBar));
	});
	return class$;
}

$Class* MenuBar$AccessibleAWTMenuBar::class$ = nullptr;

	} // awt
} // java