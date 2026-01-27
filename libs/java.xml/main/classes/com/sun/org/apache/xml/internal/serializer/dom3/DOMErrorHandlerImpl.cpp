#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMErrorHandlerImpl.h>

#include <org/w3c/dom/DOMError.h>
#include <jcpp.h>

#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING

using $PrintStream = ::java::io::PrintStream;
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

$MethodInfo _DOMErrorHandlerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMErrorHandlerImpl, init$, void)},
	{"handleError", "(Lorg/w3c/dom/DOMError;)Z", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerImpl, handleError, bool, $DOMError*)},
	{}
};

$ClassInfo _DOMErrorHandlerImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOMErrorHandlerImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMErrorHandler",
	nullptr,
	_DOMErrorHandlerImpl_MethodInfo_
};

$Object* allocate$DOMErrorHandlerImpl($Class* clazz) {
	return $of($alloc(DOMErrorHandlerImpl));
}

void DOMErrorHandlerImpl::init$() {
}

bool DOMErrorHandlerImpl::handleError($DOMError* error) {
	$useLocalCurrentObjectStackCache();
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
	$nc($System::err)->println($$str({severity, ": "_s, $($nc(error)->getMessage()), "\t"_s}));
	$var($String, var$2, $$str({"Type : "_s, $($nc(error)->getType()), "\tRelated Data: "_s}));
	$var($String, var$1, $$concat(var$2, $(error->getRelatedData())));
	$var($String, var$0, $$concat(var$1, "\tRelated Exception: "_s));
	$nc($System::err)->println($$concat(var$0, $(error->getRelatedException())));
	return fail;
}

DOMErrorHandlerImpl::DOMErrorHandlerImpl() {
}

$Class* DOMErrorHandlerImpl::load$($String* name, bool initialize) {
	$loadClass(DOMErrorHandlerImpl, name, initialize, &_DOMErrorHandlerImpl_ClassInfo_, allocate$DOMErrorHandlerImpl);
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