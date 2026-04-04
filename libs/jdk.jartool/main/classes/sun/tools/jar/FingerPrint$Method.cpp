#include <sun/tools/jar/FingerPrint$Method.h>
#include <java/util/Set.h>
#include <sun/tools/jar/FingerPrint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace sun {
	namespace tools {
		namespace jar {

void FingerPrint$Method::init$(int32_t access, $String* name, $String* desc, $Set* exceptions) {
	this->access = access;
	$set(this, name, name);
	$set(this, desc, desc);
	$set(this, exceptions, exceptions);
}

bool FingerPrint$Method::equals(Object$* that) {
	if (that == nullptr) {
		return false;
	}
	if ($equals(this, that)) {
		return true;
	}
	if (!($instanceOf(FingerPrint$Method, that))) {
		return false;
	}
	$var(FingerPrint$Method, method, $cast(FingerPrint$Method, that));
	bool var$1 = (this->access == $nc(method)->access) && $nc(this->name)->equals(method->name);
	bool var$0 = var$1 && $nc(this->desc)->equals(method->desc);
	return var$0 && $nc(this->exceptions)->equals(method->exceptions);
}

int32_t FingerPrint$Method::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->access;
	result = 37 * result + $nc(this->name)->hashCode();
	result = 37 * result + $nc(this->desc)->hashCode();
	result = 37 * result + $nc(this->exceptions)->hashCode();
	return result;
}

FingerPrint$Method::FingerPrint$Method() {
}

$Class* FingerPrint$Method::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"access", "I", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, access)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, name)},
		{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, desc)},
		{"exceptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(FingerPrint$Method, exceptions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/Set;)V", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)V", 0, $method(FingerPrint$Method, init$, void, int32_t, $String*, $String*, $Set*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Method, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Method, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.FingerPrint$Method", "sun.tools.jar.FingerPrint", "Method", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.tools.jar.FingerPrint$Method",
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
		"sun.tools.jar.FingerPrint"
	};
	$loadClass(FingerPrint$Method, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FingerPrint$Method);
	});
	return class$;
}

$Class* FingerPrint$Method::class$ = nullptr;

		} // jar
	} // tools
} // sun