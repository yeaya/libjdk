#include <HeadlessOverlayLayout.h>
#include <java/awt/Container.h>
#include <javax/swing/OverlayLayout.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OverlayLayout = ::javax::swing::OverlayLayout;

void HeadlessOverlayLayout::init$() {
}

void HeadlessOverlayLayout::main($StringArray* args) {
	$useLocalObjectStack();
	$var($OverlayLayout, msm, $new($OverlayLayout, $$new($Container)));
}

HeadlessOverlayLayout::HeadlessOverlayLayout() {
}

$Class* HeadlessOverlayLayout::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessOverlayLayout, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessOverlayLayout, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessOverlayLayout",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessOverlayLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessOverlayLayout);
	});
	return class$;
}

$Class* HeadlessOverlayLayout::class$ = nullptr;