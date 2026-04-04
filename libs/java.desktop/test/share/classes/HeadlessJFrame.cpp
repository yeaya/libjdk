#include <HeadlessJFrame.h>
#include <java/awt/HeadlessException.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $HeadlessException = ::java::awt::HeadlessException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;

void HeadlessJFrame::init$() {
}

void HeadlessJFrame::main($StringArray* args) {
	$useLocalObjectStack();
	bool exceptions = false;
	try {
		$var($JFrame, b, $new($JFrame));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$var($JFrame, b, $new($JFrame, "Swingin\' in the window"_s));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
}

HeadlessJFrame::HeadlessJFrame() {
}

$Class* HeadlessJFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessJFrame, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessJFrame, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessJFrame",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessJFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJFrame);
	});
	return class$;
}

$Class* HeadlessJFrame::class$ = nullptr;