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

$FieldInfo _FingerPrint$Method_FieldInfo_[] = {
	{"access", "I", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, access)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Method, desc)},
	{"exceptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(FingerPrint$Method, exceptions)},
	{}
};

$MethodInfo _FingerPrint$Method_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/Set;)V", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)V", 0, $method(FingerPrint$Method, init$, void, int32_t, $String*, $String*, $Set*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Method, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Method, hashCode, int32_t)},
	{}
};

$InnerClassInfo _FingerPrint$Method_InnerClassesInfo_[] = {
	{"sun.tools.jar.FingerPrint$Method", "sun.tools.jar.FingerPrint", "Method", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FingerPrint$Method_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.tools.jar.FingerPrint$Method",
	"java.lang.Object",
	nullptr,
	_FingerPrint$Method_FieldInfo_,
	_FingerPrint$Method_MethodInfo_,
	nullptr,
	nullptr,
	_FingerPrint$Method_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.FingerPrint"
};

$Object* allocate$FingerPrint$Method($Class* clazz) {
	return $of($alloc(FingerPrint$Method));
}

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
	$loadClass(FingerPrint$Method, name, initialize, &_FingerPrint$Method_ClassInfo_, allocate$FingerPrint$Method);
	return class$;
}

$Class* FingerPrint$Method::class$ = nullptr;

		} // jar
	} // tools
} // sun