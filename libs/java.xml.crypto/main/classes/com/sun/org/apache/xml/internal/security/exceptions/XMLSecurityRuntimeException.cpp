#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <java/text/MessageFormat.h>
#include <jcpp.h>

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace exceptions {

void XMLSecurityRuntimeException::init$() {
	$RuntimeException::init$("Missing message string"_s);
	$set(this, msgID, nullptr);
}

void XMLSecurityRuntimeException::init$($String* msgID) {
	$RuntimeException::init$($($I18n::getExceptionMessage(msgID)));
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($String* msgID, $ObjectArray* exArgs) {
	$useLocalObjectStack();
	$RuntimeException::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)));
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($Exception* originalException) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Missing message ID to locate message string in resource bundle \""_s);
	$init($Constants);
	var$0->append($Constants::exceptionMessagesResourceBundleBase);
	var$0->append("\". Original Exception was a "_s);
	var$0->append($($nc($of(originalException))->getClass()->getName()));
	var$0->append(" and message "_s);
	var$0->append($(originalException->getMessage()));
	$RuntimeException::init$($$str(var$0), originalException);
}

void XMLSecurityRuntimeException::init$($String* msgID, $Exception* originalException) {
	$RuntimeException::init$($($I18n::getExceptionMessage(msgID, originalException)), originalException);
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	$useLocalObjectStack();
	$RuntimeException::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)), originalException);
	$set(this, msgID, msgID);
}

$String* XMLSecurityRuntimeException::getMsgID() {
	if (this->msgID == nullptr) {
		return "Missing message ID"_s;
	}
	return this->msgID;
}

$String* XMLSecurityRuntimeException::toString() {
	$useLocalObjectStack();
	$var($String, s, this->getClass()->getName());
	$var($String, message, $RuntimeException::getLocalizedMessage());
	if (message != nullptr) {
		$assign(message, $str({s, ": "_s, message}));
	} else {
		$assign(message, s);
	}
	if (this->getCause() != nullptr) {
		$assign(message, $str({message, "\nOriginal Exception was "_s, $($$nc(this->getCause())->toString())}));
	}
	return message;
}

$Exception* XMLSecurityRuntimeException::getOriginalException() {
	if ($instanceOf($Exception, $(this->getCause()))) {
		return $cast($Exception, this->getCause());
	}
	return nullptr;
}

XMLSecurityRuntimeException::XMLSecurityRuntimeException() {
}

XMLSecurityRuntimeException::XMLSecurityRuntimeException(const XMLSecurityRuntimeException& e) : $RuntimeException(e) {
}

void XMLSecurityRuntimeException::throw$() {
	throw *this;
}

$Class* XMLSecurityRuntimeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSecurityRuntimeException, serialVersionUID)},
		{"msgID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLSecurityRuntimeException, msgID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void, $String*, $Exception*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XMLSecurityRuntimeException, init$, void, $String*, $ObjectArray*, $Exception*)},
		{"getMsgID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSecurityRuntimeException, getMsgID, $String*)},
		{"getOriginalException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(XMLSecurityRuntimeException, getOriginalException, $Exception*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSecurityRuntimeException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityRuntimeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLSecurityRuntimeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSecurityRuntimeException);
	});
	return class$;
}

$Class* XMLSecurityRuntimeException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com