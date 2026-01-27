#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <jcpp.h>

using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLDocumentSource_MethodInfo_[] = {
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentSource, getDocumentHandler, $XMLDocumentHandler*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentSource, setDocumentHandler, void, $XMLDocumentHandler*)},
	{}
};

$ClassInfo _XMLDocumentSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource",
	nullptr,
	nullptr,
	nullptr,
	_XMLDocumentSource_MethodInfo_
};

$Object* allocate$XMLDocumentSource($Class* clazz) {
	return $of($alloc(XMLDocumentSource));
}

$Class* XMLDocumentSource::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentSource, name, initialize, &_XMLDocumentSource_ClassInfo_, allocate$XMLDocumentSource);
	return class$;
}

$Class* XMLDocumentSource::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com