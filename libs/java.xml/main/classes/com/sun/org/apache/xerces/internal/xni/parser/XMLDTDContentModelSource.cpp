#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <jcpp.h>

using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
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

$MethodInfo _XMLDTDContentModelSource_MethodInfo_[] = {
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelSource, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelSource, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{}
};

$ClassInfo _XMLDTDContentModelSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource",
	nullptr,
	nullptr,
	nullptr,
	_XMLDTDContentModelSource_MethodInfo_
};

$Object* allocate$XMLDTDContentModelSource($Class* clazz) {
	return $of($alloc(XMLDTDContentModelSource));
}

$Class* XMLDTDContentModelSource::load$($String* name, bool initialize) {
	$loadClass(XMLDTDContentModelSource, name, initialize, &_XMLDTDContentModelSource_ClassInfo_, allocate$XMLDTDContentModelSource);
	return class$;
}

$Class* XMLDTDContentModelSource::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com