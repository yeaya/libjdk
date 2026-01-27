#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$MethodInfo _DOMEnhancedForDTM_MethodInfo_[] = {
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getDocumentURI, $String*)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getElementById, int32_t, $String*)},
	{"getExpandedTypeID2", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getExpandedTypeID2, int32_t, int32_t)},
	{"getMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getMapping, $shorts*, $StringArray*, $StringArray*, $ints*)},
	{"getNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getNamespaceMapping, $shorts*, $StringArray*)},
	{"getReverseMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getReverseMapping, $ints*, $StringArray*, $StringArray*, $ints*)},
	{"getReverseNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, getReverseNamespaceMapping, $shorts*, $StringArray*)},
	{"hasDOMSource", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, hasDOMSource, bool)},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMEnhancedForDTM, setDocumentURI, void, $String*)},
	{}
};

$ClassInfo _DOMEnhancedForDTM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.DOMEnhancedForDTM",
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	nullptr,
	_DOMEnhancedForDTM_MethodInfo_
};

$Object* allocate$DOMEnhancedForDTM($Class* clazz) {
	return $of($alloc(DOMEnhancedForDTM));
}

$Class* DOMEnhancedForDTM::load$($String* name, bool initialize) {
	$loadClass(DOMEnhancedForDTM, name, initialize, &_DOMEnhancedForDTM_ClassInfo_, allocate$DOMEnhancedForDTM);
	return class$;
}

$Class* DOMEnhancedForDTM::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com