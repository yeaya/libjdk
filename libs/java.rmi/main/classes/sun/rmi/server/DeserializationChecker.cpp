#include <sun/rmi/server/DeserializationChecker.h>

#include <java/io/ObjectStreamClass.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace sun {
	namespace rmi {
		namespace server {

$MethodInfo _DeserializationChecker_MethodInfo_[] = {
	{"check", "(Ljava/lang/reflect/Method;Ljava/io/ObjectStreamClass;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeserializationChecker, check, void, $Method*, $ObjectStreamClass*, int32_t, int32_t)},
	{"checkProxyClass", "(Ljava/lang/reflect/Method;[Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeserializationChecker, checkProxyClass, void, $Method*, $StringArray*, int32_t, int32_t)},
	{"end", "(I)V", nullptr, $PUBLIC, $virtualMethod(DeserializationChecker, end, void, int32_t)},
	{}
};

$ClassInfo _DeserializationChecker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.rmi.server.DeserializationChecker",
	nullptr,
	nullptr,
	nullptr,
	_DeserializationChecker_MethodInfo_
};

$Object* allocate$DeserializationChecker($Class* clazz) {
	return $of($alloc(DeserializationChecker));
}

void DeserializationChecker::end(int32_t callID) {
}

$Class* DeserializationChecker::load$($String* name, bool initialize) {
	$loadClass(DeserializationChecker, name, initialize, &_DeserializationChecker_ClassInfo_, allocate$DeserializationChecker);
	return class$;
}

$Class* DeserializationChecker::class$ = nullptr;

		} // server
	} // rmi
} // sun