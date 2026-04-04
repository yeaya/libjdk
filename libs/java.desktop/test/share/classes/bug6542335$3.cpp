#include <bug6542335$3.h>
#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6542335 = ::bug6542335;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6542335$3::init$($RectangleArray* val$thumbBounds) {
	$set(this, val$thumbBounds, val$thumbBounds);
}

void bug6542335$3::run() {
	$useLocalObjectStack();
	$init($bug6542335);
	$var($Rectangle, newThumbBounds, $nc($bug6542335::ui)->getThumbBounds());
	if (!$nc($nc(this->val$thumbBounds)->get(0))->equals(newThumbBounds)) {
		$throwNew($RuntimeException, $$str({"Test failed.\nOld bounds: "_s, this->val$thumbBounds->get(0), "\nNew bounds: "_s, newThumbBounds}));
	}
}

bug6542335$3::bug6542335$3() {
}

$Class* bug6542335$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$thumbBounds", "[Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6542335$3, val$thumbBounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Rectangle;)V", "()V", 0, $method(bug6542335$3, init$, void, $RectangleArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6542335$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6542335",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6542335$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6542335$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6542335"
	};
	$loadClass(bug6542335$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6542335$3);
	});
	return class$;
}

$Class* bug6542335$3::class$ = nullptr;