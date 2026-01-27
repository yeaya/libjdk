#include <javax/xml/transform/Source.h>

#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _Source_MethodInfo_[] = {
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Source, getSystemId, $String*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Source, isEmpty, bool)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Source, setSystemId, void, $String*)},
	{}
};

$ClassInfo _Source_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.Source",
	nullptr,
	nullptr,
	nullptr,
	_Source_MethodInfo_
};

$Object* allocate$Source($Class* clazz) {
	return $of($alloc(Source));
}

bool Source::isEmpty() {
	$throwNew($UnsupportedOperationException, "The isEmpty method is not supported."_s);
	$shouldNotReachHere();
}

$Class* Source::load$($String* name, bool initialize) {
	$loadClass(Source, name, initialize, &_Source_ClassInfo_, allocate$Source);
	return class$;
}

$Class* Source::class$ = nullptr;

		} // transform
	} // xml
} // javax