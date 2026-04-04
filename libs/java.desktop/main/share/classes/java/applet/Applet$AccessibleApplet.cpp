#include <java/applet/Applet$AccessibleApplet.h>
#include <java/applet/Applet.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef FRAME

using $Applet = ::java::applet::Applet;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace applet {

void Applet$AccessibleApplet::init$($Applet* this$0) {
	$set(this, this$0, this$0);
	$Panel$AccessibleAWTPanel::init$(this$0);
}

$AccessibleRole* Applet$AccessibleApplet::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FRAME;
}

$AccessibleStateSet* Applet$AccessibleApplet::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Panel$AccessibleAWTPanel::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::ACTIVE);
	return states;
}

Applet$AccessibleApplet::Applet$AccessibleApplet() {
}

$Class* Applet$AccessibleApplet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/applet/Applet;", nullptr, $FINAL | $SYNTHETIC, $field(Applet$AccessibleApplet, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Applet$AccessibleApplet, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/applet/Applet;)V", nullptr, $PROTECTED, $method(Applet$AccessibleApplet, init$, void, $Applet*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Applet$AccessibleApplet, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(Applet$AccessibleApplet, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.applet.Applet$AccessibleApplet", "java.applet.Applet", "AccessibleApplet", $PROTECTED},
		{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.applet.Applet$AccessibleApplet",
		"java.awt.Panel$AccessibleAWTPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.applet.Applet"
	};
	$loadClass(Applet$AccessibleApplet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Applet$AccessibleApplet));
	});
	return class$;
}

$Class* Applet$AccessibleApplet::class$ = nullptr;

	} // applet
} // java