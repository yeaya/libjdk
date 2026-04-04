#include <sun/lwawt/macosx/CAccessibleText$13.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Rectangle2D.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$13::init$($Accessible* val$a, $doubles* val$ret, int32_t val$location, int32_t val$length) {
	$set(this, val$a, val$a);
	$set(this, val$ret, val$ret);
	this->val$location = val$location;
	this->val$length = val$length;
}

$Object* CAccessibleText$13::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return this->val$ret;
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		ac->getAccessibleName();
		ac->getAccessibleEditableText();
		return this->val$ret;
	}
	$var($Rectangle2D, boundsStart, $nc(at)->getCharacterBounds(this->val$location));
	$var($Rectangle2D, boundsEnd, at->getCharacterBounds(this->val$location + this->val$length - 1));
	if (boundsEnd == nullptr || boundsStart == nullptr) {
		return this->val$ret;
	}
	$var($Rectangle2D, boundsUnion, $nc(boundsStart)->createUnion(boundsEnd));
	if ($nc(boundsUnion)->isEmpty()) {
		return this->val$ret;
	}
	double localX = boundsUnion->getX();
	double localY = boundsUnion->getY();
	$var($Point, componentLocation, $$nc(ac->getAccessibleComponent())->getLocationOnScreen());
	if (componentLocation == nullptr) {
		return this->val$ret;
	}
	double screenX = $nc(componentLocation)->getX() + localX;
	double screenY = componentLocation->getY() + localY;
	$nc(this->val$ret)->set(0, screenX);
	this->val$ret->set(1, screenY);
	this->val$ret->set(2, boundsUnion->getWidth());
	this->val$ret->set(3, boundsUnion->getHeight());
	return this->val$ret;
}

CAccessibleText$13::CAccessibleText$13() {
}

$Class* CAccessibleText$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$length)},
		{"val$location", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$location)},
		{"val$ret", "[D", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$ret)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;[DII)V", "()V", 0, $method(CAccessibleText$13, init$, void, $Accessible*, $doubles*, int32_t, int32_t)},
		{"call", "()[D", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$13, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getBoundsForRange",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)[D"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$13", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$13",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[D>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$13);
	});
	return class$;
}

$Class* CAccessibleText$13::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun