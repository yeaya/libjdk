#include <bug6209975$ReturnObject.h>
#include <bug6209975.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6209975$ReturnObject::init$() {
}

bug6209975$ReturnObject::bug6209975$ReturnObject() {
}

$Class* bug6209975$ReturnObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"itsValue", "I", nullptr, $PUBLIC | $VOLATILE, $field(bug6209975$ReturnObject, itsValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6209975$ReturnObject, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6209975$ReturnObject", "bug6209975", "ReturnObject", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6209975$ReturnObject",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6209975"
	};
	$loadClass(bug6209975$ReturnObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6209975$ReturnObject);
	});
	return class$;
}

$Class* bug6209975$ReturnObject::class$ = nullptr;