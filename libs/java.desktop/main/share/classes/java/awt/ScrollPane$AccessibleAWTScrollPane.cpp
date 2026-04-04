#include <java/awt/ScrollPane$AccessibleAWTScrollPane.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/ScrollPane.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef SCROLL_PANE

using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ScrollPane = ::java::awt::ScrollPane;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void ScrollPane$AccessibleAWTScrollPane::init$($ScrollPane* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* ScrollPane$AccessibleAWTScrollPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_PANE;
}

ScrollPane$AccessibleAWTScrollPane::ScrollPane$AccessibleAWTScrollPane() {
}

$Class* ScrollPane$AccessibleAWTScrollPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/ScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollPane$AccessibleAWTScrollPane, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPane$AccessibleAWTScrollPane, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/ScrollPane;)V", nullptr, $PROTECTED, $method(ScrollPane$AccessibleAWTScrollPane, init$, void, $ScrollPane*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(ScrollPane$AccessibleAWTScrollPane, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.ScrollPane$AccessibleAWTScrollPane", "java.awt.ScrollPane", "AccessibleAWTScrollPane", $PROTECTED},
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.ScrollPane$AccessibleAWTScrollPane",
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
		"java.awt.ScrollPane"
	};
	$loadClass(ScrollPane$AccessibleAWTScrollPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ScrollPane$AccessibleAWTScrollPane));
	});
	return class$;
}

$Class* ScrollPane$AccessibleAWTScrollPane::class$ = nullptr;

	} // awt
} // java