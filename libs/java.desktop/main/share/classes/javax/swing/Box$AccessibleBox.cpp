#include <javax/swing/Box$AccessibleBox.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/Box.h>
#include <jcpp.h>

#undef FILLER

using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $Box = ::javax::swing::Box;

namespace javax {
	namespace swing {

void Box$AccessibleBox::init$($Box* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Box$AccessibleBox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILLER;
}

Box$AccessibleBox::Box$AccessibleBox() {
}

$Class* Box$AccessibleBox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/Box;", nullptr, $FINAL | $SYNTHETIC, $field(Box$AccessibleBox, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Box;)V", nullptr, $PROTECTED, $method(Box$AccessibleBox, init$, void, $Box*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Box$AccessibleBox, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Box$AccessibleBox", "javax.swing.Box", "AccessibleBox", $PROTECTED},
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.Box$AccessibleBox",
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
		"javax.swing.Box"
	};
	$loadClass(Box$AccessibleBox, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Box$AccessibleBox));
	});
	return class$;
}

$Class* Box$AccessibleBox::class$ = nullptr;

	} // swing
} // javax