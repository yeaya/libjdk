#include <javax/swing/ScrollPaneLayout$UIResource.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;

namespace javax {
	namespace swing {

int32_t ScrollPaneLayout$UIResource::hashCode() {
	 return this->$ScrollPaneLayout::hashCode();
}

bool ScrollPaneLayout$UIResource::equals(Object$* arg0) {
	 return this->$ScrollPaneLayout::equals(arg0);
}

$Object* ScrollPaneLayout$UIResource::clone() {
	 return this->$ScrollPaneLayout::clone();
}

$String* ScrollPaneLayout$UIResource::toString() {
	 return this->$ScrollPaneLayout::toString();
}

void ScrollPaneLayout$UIResource::finalize() {
	this->$ScrollPaneLayout::finalize();
}

void ScrollPaneLayout$UIResource::init$() {
	$ScrollPaneLayout::init$();
}

ScrollPaneLayout$UIResource::ScrollPaneLayout$UIResource() {
}

$Class* ScrollPaneLayout$UIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScrollPaneLayout$UIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ScrollPaneLayout$UIResource", "javax.swing.ScrollPaneLayout", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.ScrollPaneLayout$UIResource",
		"javax.swing.ScrollPaneLayout",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ScrollPaneLayout"
	};
	$loadClass(ScrollPaneLayout$UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ScrollPaneLayout$UIResource));
	});
	return class$;
}

$Class* ScrollPaneLayout$UIResource::class$ = nullptr;

	} // swing
} // javax