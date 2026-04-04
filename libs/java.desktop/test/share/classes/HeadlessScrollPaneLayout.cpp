#include <HeadlessScrollPaneLayout.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;

void HeadlessScrollPaneLayout::init$() {
}

void HeadlessScrollPaneLayout::main($StringArray* args) {
	$var($ScrollPaneLayout, msm, $new($ScrollPaneLayout));
}

HeadlessScrollPaneLayout::HeadlessScrollPaneLayout() {
}

$Class* HeadlessScrollPaneLayout::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessScrollPaneLayout, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessScrollPaneLayout, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessScrollPaneLayout",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessScrollPaneLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessScrollPaneLayout);
	});
	return class$;
}

$Class* HeadlessScrollPaneLayout::class$ = nullptr;