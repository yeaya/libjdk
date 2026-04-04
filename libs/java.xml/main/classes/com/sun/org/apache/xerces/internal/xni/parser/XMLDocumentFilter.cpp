#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
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

int32_t XMLDocumentFilter::hashCode() {
	 return this->$XMLDocumentHandler::hashCode();
}

bool XMLDocumentFilter::equals(Object$* arg0) {
	 return this->$XMLDocumentHandler::equals(arg0);
}

$Object* XMLDocumentFilter::clone() {
	 return this->$XMLDocumentHandler::clone();
}

$String* XMLDocumentFilter::toString() {
	 return this->$XMLDocumentHandler::toString();
}

void XMLDocumentFilter::finalize() {
	this->$XMLDocumentHandler::finalize();
}

$Class* XMLDocumentFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLDocumentFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XMLDocumentFilter));
	});
	return class$;
}

$Class* XMLDocumentFilter::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com