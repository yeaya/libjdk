#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <jcpp.h>

using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
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

$MethodInfo _XMLDTDSource_MethodInfo_[] = {
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDSource, getDTDHandler, $XMLDTDHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDSource, setDTDHandler, void, $XMLDTDHandler*)},
	{}
};

$ClassInfo _XMLDTDSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource",
	nullptr,
	nullptr,
	nullptr,
	_XMLDTDSource_MethodInfo_
};

$Object* allocate$XMLDTDSource($Class* clazz) {
	return $of($alloc(XMLDTDSource));
}

$Class* XMLDTDSource::load$($String* name, bool initialize) {
	$loadClass(XMLDTDSource, name, initialize, &_XMLDTDSource_ClassInfo_, allocate$XMLDTDSource);
	return class$;
}

$Class* XMLDTDSource::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com