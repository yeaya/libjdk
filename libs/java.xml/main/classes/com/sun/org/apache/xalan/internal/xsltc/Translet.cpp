#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <jcpp.h>

using $SerializationHandlerArray = $Array<::com::sun::org::apache::xml::internal::serializer::SerializationHandler>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$MethodInfo _Translet_MethodInfo_[] = {
	{"addAuxiliaryClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Translet, addAuxiliaryClass, void, $Class*)},
	{"addParameter", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, addParameter, $Object*, $String*, Object$*)},
	{"buildKeys", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, buildKeys, void, $DOM*, $DTMAxisIterator*, $SerializationHandler*, int32_t), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAuxiliaryClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Translet, getAuxiliaryClass, $Class*, $String*)},
	{"getNamesArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, getNamesArray, $StringArray*)},
	{"getNamespaceArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, getNamespaceArray, $StringArray*)},
	{"getTypesArray", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, getTypesArray, $ints*)},
	{"getUrisArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, getUrisArray, $StringArray*)},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, overrideDefaultParser, bool)},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, setOverrideDefaultParser, void, bool)},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, transform, void, $DOM*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;[Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, transform, void, $DOM*, $SerializationHandlerArray*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Translet, transform, void, $DOM*, $DTMAxisIterator*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _Translet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.Translet",
	nullptr,
	nullptr,
	nullptr,
	_Translet_MethodInfo_
};

$Object* allocate$Translet($Class* clazz) {
	return $of($alloc(Translet));
}

$Class* Translet::load$($String* name, bool initialize) {
	$loadClass(Translet, name, initialize, &_Translet_ClassInfo_, allocate$Translet);
	return class$;
}

$Class* Translet::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com