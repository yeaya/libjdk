#include <java/awt/Menu$AccessibleAWTMenu.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef MENU

using $Menu = ::java::awt::Menu;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void Menu$AccessibleAWTMenu::init$($Menu* this$0) {
	$set(this, this$0, this$0);
	$MenuItem$AccessibleAWTMenuItem::init$(this$0);
}

$AccessibleRole* Menu$AccessibleAWTMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU;
}

Menu$AccessibleAWTMenu::Menu$AccessibleAWTMenu() {
}

$Class* Menu$AccessibleAWTMenu::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Menu;", nullptr, $FINAL | $SYNTHETIC, $field(Menu$AccessibleAWTMenu, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Menu$AccessibleAWTMenu, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Menu;)V", nullptr, $PROTECTED, $method(Menu$AccessibleAWTMenu, init$, void, $Menu*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Menu$AccessibleAWTMenu, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Menu$AccessibleAWTMenu", "java.awt.Menu", "AccessibleAWTMenu", $PROTECTED},
		{"java.awt.MenuItem$AccessibleAWTMenuItem", "java.awt.MenuItem", "AccessibleAWTMenuItem", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Menu$AccessibleAWTMenu",
		"java.awt.MenuItem$AccessibleAWTMenuItem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Menu"
	};
	$loadClass(Menu$AccessibleAWTMenu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Menu$AccessibleAWTMenu));
	});
	return class$;
}

$Class* Menu$AccessibleAWTMenu::class$ = nullptr;

	} // awt
} // java