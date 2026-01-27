#include <org/xml/sax/ext/Attributes2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _Attributes2_MethodInfo_[] = {
	{"isDeclared", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, int32_t)},
	{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, $String*)},
	{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, $String*, $String*)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, int32_t)},
	{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, $String*, $String*)},
	{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, $String*)},
	{}
};

$ClassInfo _Attributes2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ext.Attributes2",
	nullptr,
	"org.xml.sax.Attributes",
	nullptr,
	_Attributes2_MethodInfo_
};

$Object* allocate$Attributes2($Class* clazz) {
	return $of($alloc(Attributes2));
}

$Class* Attributes2::load$($String* name, bool initialize) {
	$loadClass(Attributes2, name, initialize, &_Attributes2_ClassInfo_, allocate$Attributes2);
	return class$;
}

$Class* Attributes2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org