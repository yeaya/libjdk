#include <javax/swing/Box$Filler$AccessibleBoxFiller.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/Box$Filler.h>
#include <jcpp.h>

#undef FILLER

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $Box$Filler = ::javax::swing::Box$Filler;

namespace javax {
	namespace swing {

void Box$Filler$AccessibleBoxFiller::init$($Box$Filler* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleRole* Box$Filler$AccessibleBoxFiller::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILLER;
}

Box$Filler$AccessibleBoxFiller::Box$Filler$AccessibleBoxFiller() {
}

$Class* Box$Filler$AccessibleBoxFiller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/Box$Filler;", nullptr, $FINAL | $SYNTHETIC, $field(Box$Filler$AccessibleBoxFiller, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Box$Filler;)V", nullptr, $PROTECTED, $method(Box$Filler$AccessibleBoxFiller, init$, void, $Box$Filler*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Box$Filler$AccessibleBoxFiller, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
		{"javax.swing.Box$Filler$AccessibleBoxFiller", "javax.swing.Box$Filler", "AccessibleBoxFiller", $PROTECTED},
		{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.Box$Filler$AccessibleBoxFiller",
		"java.awt.Component$AccessibleAWTComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.Box"
	};
	$loadClass(Box$Filler$AccessibleBoxFiller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Box$Filler$AccessibleBoxFiller));
	});
	return class$;
}

$Class* Box$Filler$AccessibleBoxFiller::class$ = nullptr;

	} // swing
} // javax