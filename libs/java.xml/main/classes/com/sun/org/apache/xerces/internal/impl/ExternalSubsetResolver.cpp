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

$Class* ExternalSubsetResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExternalSubsetResolver, getExternalSubset, $XMLInputSource*, $XMLDTDDescription*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.ExternalSubsetResolver",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExternalSubsetResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExternalSubsetResolver);
	});
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