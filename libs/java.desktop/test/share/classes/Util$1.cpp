#include <Util$1.h>
#include <Util.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Util$1::init$($Component* val$component) {
	$set(this, val$component, val$component);
}

$Object* Util$1::call() {
	$useLocalObjectStack();
	$var($Point, p, $nc(this->val$component)->getLocationOnScreen());
	$var($Dimension, size, this->val$component->getSize());
	return $of($new($Point, $nc(p)->x + $nc(size)->width / 2, $nc(p)->y + $nc(size)->height / 2));
}

Util$1::Util$1() {
}

$Class* Util$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$component", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Util$1, val$component)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", "()V", 0, $method(Util$1, init$, void, $Component*)},
		{"call", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(Util$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Util",
		"getCenterPoint",
		"(Ljava/awt/Component;)Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Util$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Util$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Point;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Util"
	};
	$loadClass(Util$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$1);
	});
	return class$;
}

$Class* Util$1::class$ = nullptr;