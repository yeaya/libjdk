#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <jcpp.h>

using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

void XMLConfigurationException::init$($Status* type, $String* identifier) {
	$XNIException::init$(identifier);
	$set(this, fType, type);
	$set(this, fIdentifier, identifier);
}

void XMLConfigurationException::init$($Status* type, $String* identifier, $String* message) {
	$XNIException::init$(message);
	$set(this, fType, type);
	$set(this, fIdentifier, identifier);
}

$Status* XMLConfigurationException::getType() {
	return this->fType;
}

$String* XMLConfigurationException::getIdentifier() {
	return this->fIdentifier;
}

XMLConfigurationException::XMLConfigurationException() {
}

XMLConfigurationException::XMLConfigurationException(const XMLConfigurationException& e) : $XNIException(e) {
}

void XMLConfigurationException::throw$() {
	throw *this;
}

$Class* XMLConfigurationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XMLConfigurationException, serialVersionUID)},
		{"fType", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PROTECTED, $field(XMLConfigurationException, fType)},
		{"fIdentifier", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLConfigurationException, fIdentifier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/Status;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLConfigurationException, init$, void, $Status*, $String*)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/Status;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLConfigurationException, init$, void, $Status*, $String*, $String*)},
		{"getIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLConfigurationException, getIdentifier, $String*)},
		{"getType", "()Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC, $virtualMethod(XMLConfigurationException, getType, $Status*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException",
		"com.sun.org.apache.xerces.internal.xni.XNIException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLConfigurationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLConfigurationException);
	});
	return class$;
}

$Class* XMLConfigurationException::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com