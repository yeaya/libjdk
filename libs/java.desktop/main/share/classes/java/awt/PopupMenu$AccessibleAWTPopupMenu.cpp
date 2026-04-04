#include <java/awt/PopupMenu$AccessibleAWTPopupMenu.h>
#include <java/awt/Menu$AccessibleAWTMenu.h>
#include <java/awt/PopupMenu.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef POPUP_MENU

using $Menu$AccessibleAWTMenu = ::java::awt::Menu$AccessibleAWTMenu;
using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void PopupMenu$AccessibleAWTPopupMenu::init$($PopupMenu* this$0) {
	$set(this, this$0, this$0);
	$Menu$AccessibleAWTMenu::init$(this$0);
}

$AccessibleRole* PopupMenu$AccessibleAWTPopupMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::POPUP_MENU;
}

PopupMenu$AccessibleAWTPopupMenu::PopupMenu$AccessibleAWTPopupMenu() {
}

$Class* PopupMenu$AccessibleAWTPopupMenu::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/PopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenu$AccessibleAWTPopupMenu, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PopupMenu$AccessibleAWTPopupMenu, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/PopupMenu;)V", nullptr, $PROTECTED, $method(PopupMenu$AccessibleAWTPopupMenu, init$, void, $PopupMenu*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(PopupMenu$AccessibleAWTPopupMenu, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.PopupMenu$AccessibleAWTPopupMenu", "java.awt.PopupMenu", "AccessibleAWTPopupMenu", $PROTECTED},
		{"java.awt.Menu$AccessibleAWTMenu", "java.awt.Menu", "AccessibleAWTMenu", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.PopupMenu$AccessibleAWTPopupMenu",
		"java.awt.Menu$AccessibleAWTMenu",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.PopupMenu"
	};
	$loadClass(PopupMenu$AccessibleAWTPopupMenu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PopupMenu$AccessibleAWTPopupMenu));
	});
	return class$;
}

$Class* PopupMenu$AccessibleAWTPopupMenu::class$ = nullptr;

	} // awt
} // java