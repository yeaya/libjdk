#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>

#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _ValidatorHelper_MethodInfo_[] = {
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHelper, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _ValidatorHelper_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper",
	nullptr,
	nullptr,
	nullptr,
	_ValidatorHelper_MethodInfo_
};

$Object* allocate$ValidatorHelper($Class* clazz) {
	return $of($alloc(ValidatorHelper));
}

$Class* ValidatorHelper::load$($String* name, bool initialize) {
	$loadClass(ValidatorHelper, name, initialize, &_ValidatorHelper_ClassInfo_, allocate$ValidatorHelper);
	return class$;
}

$Class* ValidatorHelper::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com