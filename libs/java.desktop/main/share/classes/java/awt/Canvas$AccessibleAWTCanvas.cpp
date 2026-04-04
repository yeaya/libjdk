#include <java/awt/Canvas$AccessibleAWTCanvas.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef CANVAS

using $Canvas = ::java::awt::Canvas;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

void Canvas$AccessibleAWTCanvas::init$($Canvas* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleRole* Canvas$AccessibleAWTCanvas::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CANVAS;
}

Canvas$AccessibleAWTCanvas::Canvas$AccessibleAWTCanvas() {
}

$Class* Canvas$AccessibleAWTCanvas::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Canvas;", nullptr, $FINAL | $SYNTHETIC, $field(Canvas$AccessibleAWTCanvas, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Canvas$AccessibleAWTCanvas, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Canvas;)V", nullptr, $PROTECTED, $method(Canvas$AccessibleAWTCanvas, init$, void, $Canvas*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Canvas$AccessibleAWTCanvas, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Canvas$AccessibleAWTCanvas", "java.awt.Canvas", "AccessibleAWTCanvas", $PROTECTED},
		{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Canvas$AccessibleAWTCanvas",
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
		"java.awt.Canvas"
	};
	$loadClass(Canvas$AccessibleAWTCanvas, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Canvas$AccessibleAWTCanvas));
	});
	return class$;
}

$Class* Canvas$AccessibleAWTCanvas::class$ = nullptr;

	} // awt
} // java