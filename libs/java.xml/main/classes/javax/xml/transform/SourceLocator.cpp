#include <javax/xml/transform/SourceLocator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _SourceLocator_MethodInfo_[] = {
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getSystemId, $String*)},
	{}
};

$ClassInfo _SourceLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.SourceLocator",
	nullptr,
	nullptr,
	nullptr,
	_SourceLocator_MethodInfo_
};

$Object* allocate$SourceLocator($Class* clazz) {
	return $of($alloc(SourceLocator));
}

$Class* SourceLocator::load$($String* name, bool initialize) {
	$loadClass(SourceLocator, name, initialize, &_SourceLocator_ClassInfo_, allocate$SourceLocator);
	return class$;
}

$Class* SourceLocator::class$ = nullptr;

		} // transform
	} // xml
} // javax