#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$MethodInfo _XMLDTDValidatorFilter_MethodInfo_[] = {
	{"hasGrammar", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDValidatorFilter, hasGrammar, bool)},
	{"validate", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDValidatorFilter, validate, bool)},
	{}
};

$ClassInfo _XMLDTDValidatorFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidatorFilter",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
	nullptr,
	_XMLDTDValidatorFilter_MethodInfo_
};

$Object* allocate$XMLDTDValidatorFilter($Class* clazz) {
	return $of($alloc(XMLDTDValidatorFilter));
}

$Class* XMLDTDValidatorFilter::load$($String* name, bool initialize) {
	$loadClass(XMLDTDValidatorFilter, name, initialize, &_XMLDTDValidatorFilter_ClassInfo_, allocate$XMLDTDValidatorFilter);
	return class$;
}

$Class* XMLDTDValidatorFilter::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com