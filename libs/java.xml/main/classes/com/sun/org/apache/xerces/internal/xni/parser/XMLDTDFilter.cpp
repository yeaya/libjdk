#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>

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

$MethodInfo _XMLDTDFilter_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _XMLDTDFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource",
	nullptr,
	_XMLDTDFilter_MethodInfo_
};

$Object* allocate$XMLDTDFilter($Class* clazz) {
	return $of($alloc(XMLDTDFilter));
}

int32_t XMLDTDFilter::hashCode() {
	 return this->$XMLDTDHandler::hashCode();
}

bool XMLDTDFilter::equals(Object$* arg0) {
	 return this->$XMLDTDHandler::equals(arg0);
}

$Object* XMLDTDFilter::clone() {
	 return this->$XMLDTDHandler::clone();
}

$String* XMLDTDFilter::toString() {
	 return this->$XMLDTDHandler::toString();
}

void XMLDTDFilter::finalize() {
	this->$XMLDTDHandler::finalize();
}

$Class* XMLDTDFilter::load$($String* name, bool initialize) {
	$loadClass(XMLDTDFilter, name, initialize, &_XMLDTDFilter_ClassInfo_, allocate$XMLDTDFilter);
	return class$;
}

$Class* XMLDTDFilter::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com