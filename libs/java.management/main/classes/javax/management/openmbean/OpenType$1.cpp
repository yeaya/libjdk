#include <javax/management/openmbean/OpenType$1.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

void OpenType$1::init$($Class* val$c) {
	$set(this, val$c, val$c);
}

$Object* OpenType$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($OpenType);
		return $of($Boolean::valueOf(($$nc($nc(this->val$c)->getMethod("getClassName"_s, $$new($ClassArray, 0)))->getDeclaringClass() != $OpenType::class$)));
	} catch ($Exception& e) {
		return $of($Boolean::valueOf(true));
	}
	$shouldNotReachHere();
}

OpenType$1::OpenType$1() {
}

$Class* OpenType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(OpenType$1, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(OpenType$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(OpenType$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.openmbean.OpenType",
		"overridesGetClassName",
		"(Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.openmbean.OpenType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.openmbean.OpenType$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.openmbean.OpenType"
	};
	$loadClass(OpenType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenType$1);
	});
	return class$;
}

$Class* OpenType$1::class$ = nullptr;

		} // openmbean
	} // management
} // javax