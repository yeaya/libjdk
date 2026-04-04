#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Panel.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef PANEL

using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void Panel$AccessibleAWTPanel::init$($Panel* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Panel$AccessibleAWTPanel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

Panel$AccessibleAWTPanel::Panel$AccessibleAWTPanel() {
}

$Class* Panel$AccessibleAWTPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Panel;", nullptr, $FINAL | $SYNTHETIC, $field(Panel$AccessibleAWTPanel, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Panel$AccessibleAWTPanel, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Panel;)V", nullptr, $PROTECTED, $method(Panel$AccessibleAWTPanel, init$, void, $Panel*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Panel$AccessibleAWTPanel, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Panel$AccessibleAWTPanel",
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
		"java.awt.Panel"
	};
	$loadClass(Panel$AccessibleAWTPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Panel$AccessibleAWTPanel));
	});
	return class$;
}

$Class* Panel$AccessibleAWTPanel::class$ = nullptr;

	} // awt
} // java