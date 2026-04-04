#include <HeadlessLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void HeadlessLookAndFeel::init$() {
}

void HeadlessLookAndFeel::main($StringArray* args) {
	$new($MetalLookAndFeel);
}

HeadlessLookAndFeel::HeadlessLookAndFeel() {
}

$Class* HeadlessLookAndFeel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessLookAndFeel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessLookAndFeel, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessLookAndFeel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessLookAndFeel);
	});
	return class$;
}

$Class* HeadlessLookAndFeel::class$ = nullptr;