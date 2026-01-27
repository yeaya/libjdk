#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelFilter.h>

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

$MethodInfo _XMLDTDContentModelFilter_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _XMLDTDContentModelFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelFilter",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource",
	nullptr,
	_XMLDTDContentModelFilter_MethodInfo_
};

$Object* allocate$XMLDTDContentModelFilter($Class* clazz) {
	return $of($alloc(XMLDTDContentModelFilter));
}

int32_t XMLDTDContentModelFilter::hashCode() {
	 return this->$XMLDTDContentModelHandler::hashCode();
}

bool XMLDTDContentModelFilter::equals(Object$* arg0) {
	 return this->$XMLDTDContentModelHandler::equals(arg0);
}

$Object* XMLDTDContentModelFilter::clone() {
	 return this->$XMLDTDContentModelHandler::clone();
}

$String* XMLDTDContentModelFilter::toString() {
	 return this->$XMLDTDContentModelHandler::toString();
}

void XMLDTDContentModelFilter::finalize() {
	this->$XMLDTDContentModelHandler::finalize();
}

$Class* XMLDTDContentModelFilter::load$($String* name, bool initialize) {
	$loadClass(XMLDTDContentModelFilter, name, initialize, &_XMLDTDContentModelFilter_ClassInfo_, allocate$XMLDTDContentModelFilter);
	return class$;
}

$Class* XMLDTDContentModelFilter::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com