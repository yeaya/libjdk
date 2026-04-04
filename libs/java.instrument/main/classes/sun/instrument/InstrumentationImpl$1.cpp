#include <sun/instrument/InstrumentationImpl$1.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <sun/instrument/InstrumentationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;

namespace sun {
	namespace instrument {

void InstrumentationImpl$1::init$($AccessibleObject* val$ao, bool val$accessible) {
	$set(this, val$ao, val$ao);
	this->val$accessible = val$accessible;
}

$Object* InstrumentationImpl$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$ao)->setAccessible(this->val$accessible);
	return nullptr;
}

InstrumentationImpl$1::InstrumentationImpl$1() {
}

$Class* InstrumentationImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$accessible", "Z", nullptr, $FINAL | $SYNTHETIC, $field(InstrumentationImpl$1, val$accessible)},
		{"val$ao", "Ljava/lang/reflect/AccessibleObject;", nullptr, $FINAL | $SYNTHETIC, $field(InstrumentationImpl$1, val$ao)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/AccessibleObject;Z)V", "()V", 0, $method(InstrumentationImpl$1, init$, void, $AccessibleObject*, bool)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InstrumentationImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.instrument.InstrumentationImpl",
		"setAccessible",
		"(Ljava/lang/reflect/AccessibleObject;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.instrument.InstrumentationImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.instrument.InstrumentationImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.instrument.InstrumentationImpl"
	};
	$loadClass(InstrumentationImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstrumentationImpl$1);
	});
	return class$;
}

$Class* InstrumentationImpl$1::class$ = nullptr;

	} // instrument
} // sun