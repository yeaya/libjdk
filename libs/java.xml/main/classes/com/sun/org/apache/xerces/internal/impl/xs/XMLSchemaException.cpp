#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XMLSchemaException, serialVersionUID)},
	{"key", "Ljava/lang/String;", nullptr, 0, $field(XMLSchemaException, key)},
	{"args", "[Ljava/lang/Object;", nullptr, 0, $field(XMLSchemaException, args)},
	{}
};

$MethodInfo _XMLSchemaException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XMLSchemaException, init$, void, $String*, $ObjectArray*)},
	{"getArgs", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaException, getArgs, $ObjectArray*)},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaException, getKey, $String*)},
	{}
};

$ClassInfo _XMLSchemaException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException",
	"java.lang.Exception",
	nullptr,
	_XMLSchemaException_FieldInfo_,
	_XMLSchemaException_MethodInfo_
};

$Object* allocate$XMLSchemaException($Class* clazz) {
	return $of($alloc(XMLSchemaException));
}

void XMLSchemaException::init$($String* key, $ObjectArray* args) {
	$Exception::init$();
	$set(this, key, key);
	$set(this, args, args);
}

$String* XMLSchemaException::getKey() {
	return this->key;
}

$ObjectArray* XMLSchemaException::getArgs() {
	return this->args;
}

XMLSchemaException::XMLSchemaException() {
}

XMLSchemaException::XMLSchemaException(const XMLSchemaException& e) : $Exception(e) {
}

void XMLSchemaException::throw$() {
	throw *this;
}

$Class* XMLSchemaException::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaException, name, initialize, &_XMLSchemaException_ClassInfo_, allocate$XMLSchemaException);
	return class$;
}

$Class* XMLSchemaException::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com