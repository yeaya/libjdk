#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _ExternalSubsetResolver_MethodInfo_[] = {
	{"getExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExternalSubsetResolver, getExternalSubset, $XMLInputSource*, $XMLDTDDescription*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{}
};

$ClassInfo _ExternalSubsetResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.ExternalSubsetResolver",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
	nullptr,
	_ExternalSubsetResolver_MethodInfo_
};

$Object* allocate$ExternalSubsetResolver($Class* clazz) {
	return $of($alloc(ExternalSubsetResolver));
}

$Class* ExternalSubsetResolver::load$($String* name, bool initialize) {
	$loadClass(ExternalSubsetResolver, name, initialize, &_ExternalSubsetResolver_ClassInfo_, allocate$ExternalSubsetResolver);
	return class$;
}

$Class* ExternalSubsetResolver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com