#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <java/text/MessageFormat.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

void DatatypeException::init$($String* key, $ObjectArray* args) {
	$Exception::init$(key);
	$set(this, key, key);
	$set(this, args, args);
}

$String* DatatypeException::getKey() {
	return this->key;
}

$ObjectArray* DatatypeException::getArgs() {
	return this->args;
}

$String* DatatypeException::getMessage() {
	$useLocalObjectStack();
	$var($ResourceBundle, resourceBundle, nullptr);
	$assign(resourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLSchemaMessages"_s));
	if (resourceBundle == nullptr) {
		$throwNew($MissingResourceException, "Property file not found!"_s, "com.sun.org.apache.xerces.internal.impl.msg.XMLSchemaMessages"_s, this->key);
	}
	$var($String, msg, $nc(resourceBundle)->getString(this->key));
	if (msg == nullptr) {
		$assign(msg, resourceBundle->getString("BadMessageKey"_s));
		$throwNew($MissingResourceException, msg, "com.sun.org.apache.xerces.internal.impl.msg.XMLSchemaMessages"_s, this->key);
	}
	if (this->args != nullptr) {
		try {
			$assign(msg, $MessageFormat::format(msg, this->args));
		} catch ($Exception& e) {
			$assign(msg, resourceBundle->getString("FormatFailed"_s));
			$plusAssign(msg, $$str({" "_s, $(resourceBundle->getString(this->key))}));
		}
	}
	return msg;
}

DatatypeException::DatatypeException() {
}

DatatypeException::DatatypeException(const DatatypeException& e) : $Exception(e) {
}

void DatatypeException::throw$() {
	throw *this;
}

$Class* DatatypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DatatypeException, serialVersionUID)},
		{"key", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DatatypeException, key)},
		{"args", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(DatatypeException, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(DatatypeException, init$, void, $String*, $ObjectArray*)},
		{"getArgs", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DatatypeException, getArgs, $ObjectArray*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DatatypeException, getKey, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DatatypeException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.DatatypeException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DatatypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatatypeException);
	});
	return class$;
}

$Class* DatatypeException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com