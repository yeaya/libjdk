#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMErrorHandlerImpl.h>
#include <org/w3c/dom/DOMError.h>
#include <jcpp.h>

#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

void DOMErrorHandlerImpl::init$() {
}

bool DOMErrorHandlerImpl::handleError($DOMError* error) {
	$useLocalObjectStack();
	bool fail = true;
	$var($String, severity, nullptr);
	if ($nc(error)->getSeverity() == $DOMError::SEVERITY_WARNING) {
		fail = false;
		$assign(severity, "[Warning]"_s);
	} else if (error->getSeverity() == $DOMError::SEVERITY_ERROR) {
		$assign(severity, "[Error]"_s);
	} else if (error->getSeverity() == $DOMError::SEVERITY_FATAL_ERROR) {
		$assign(severity, "[Fatal Error]"_s);
	}
	$nc($System::err)->println($$str({severity, ": "_s, $(error->getMessage()), "\t"_s}));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Type : "_s);
	var$0->append($(error->getType()));
	var$0->append("\tRelated Data: "_s);
	var$0->append($(error->getRelatedData()));
	var$0->append("\tRelated Exception: "_s);
	var$0->append($(error->getRelatedException()));
	$System::err->println($$str(var$0));
	return fail;
}

DOMErrorHandlerImpl::DOMErrorHandlerImpl() {
}

$Class* DOMErrorHandlerImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DOMErrorHandlerImpl, init$, void)},
		{"handleError", "(Lorg/w3c/dom/DOMError;)Z", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerImpl, handleError, bool, $DOMError*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.dom3.DOMErrorHandlerImpl",
		"java.lang.Object",
		"org.w3c.dom.DOMErrorHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMErrorHandlerImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMErrorHandlerImpl);
	});
	return class$;
}

$Class* DOMErrorHandlerImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com