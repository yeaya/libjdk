#include <com/sun/org/apache/xerces/internal/util/XMLEntityDescriptionImpl.h>

#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLEntityDescriptionImpl_FieldInfo_[] = {
	{"fEntityName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLEntityDescriptionImpl, fEntityName)},
	{}
};

$MethodInfo _XMLEntityDescriptionImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEntityDescriptionImpl, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLEntityDescriptionImpl, init$, void, $String*, $String*, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLEntityDescriptionImpl, init$, void, $String*, $String*, $String*, $String*, $String*, $String*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, clear, void)},
	{"getEntityName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, getEntityName, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, hashCode, int32_t)},
	{"*setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, setDescription, void, $String*, $String*, $String*, $String*, $String*)},
	{"setDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, setDescription, void, $String*, $String*, $String*, $String*, $String*, $String*)},
	{"setEntityName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, setEntityName, void, $String*)},
	{"*setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityDescriptionImpl, toString, $String*)},
	{}
};

$ClassInfo _XMLEntityDescriptionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLEntityDescriptionImpl",
	"com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLEntityDescription",
	_XMLEntityDescriptionImpl_FieldInfo_,
	_XMLEntityDescriptionImpl_MethodInfo_
};

$Object* allocate$XMLEntityDescriptionImpl($Class* clazz) {
	return $of($alloc(XMLEntityDescriptionImpl));
}

void XMLEntityDescriptionImpl::setPublicId($String* publicId) {
	this->$XMLResourceIdentifierImpl::setPublicId(publicId);
}

void XMLEntityDescriptionImpl::setLiteralSystemId($String* literalSystemId) {
	this->$XMLResourceIdentifierImpl::setLiteralSystemId(literalSystemId);
}

void XMLEntityDescriptionImpl::setBaseSystemId($String* baseSystemId) {
	this->$XMLResourceIdentifierImpl::setBaseSystemId(baseSystemId);
}

void XMLEntityDescriptionImpl::setExpandedSystemId($String* expandedSystemId) {
	this->$XMLResourceIdentifierImpl::setExpandedSystemId(expandedSystemId);
}

void XMLEntityDescriptionImpl::setNamespace($String* namespace$) {
	this->$XMLResourceIdentifierImpl::setNamespace(namespace$);
}

$String* XMLEntityDescriptionImpl::getPublicId() {
	 return this->$XMLResourceIdentifierImpl::getPublicId();
}

$String* XMLEntityDescriptionImpl::getLiteralSystemId() {
	 return this->$XMLResourceIdentifierImpl::getLiteralSystemId();
}

$String* XMLEntityDescriptionImpl::getBaseSystemId() {
	 return this->$XMLResourceIdentifierImpl::getBaseSystemId();
}

$String* XMLEntityDescriptionImpl::getExpandedSystemId() {
	 return this->$XMLResourceIdentifierImpl::getExpandedSystemId();
}

$String* XMLEntityDescriptionImpl::getNamespace() {
	 return this->$XMLResourceIdentifierImpl::getNamespace();
}

bool XMLEntityDescriptionImpl::equals(Object$* arg0) {
	 return this->$XMLResourceIdentifierImpl::equals(arg0);
}

$Object* XMLEntityDescriptionImpl::clone() {
	 return this->$XMLResourceIdentifierImpl::clone();
}

void XMLEntityDescriptionImpl::finalize() {
	this->$XMLResourceIdentifierImpl::finalize();
}

void XMLEntityDescriptionImpl::init$() {
	$XMLResourceIdentifierImpl::init$();
}

void XMLEntityDescriptionImpl::init$($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId) {
	$XMLResourceIdentifierImpl::init$();
	setDescription(entityName, publicId, literalSystemId, baseSystemId, expandedSystemId);
}

void XMLEntityDescriptionImpl::init$($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$) {
	$XMLResourceIdentifierImpl::init$();
	setDescription(entityName, publicId, literalSystemId, baseSystemId, expandedSystemId, namespace$);
}

void XMLEntityDescriptionImpl::setEntityName($String* name) {
	$set(this, fEntityName, name);
}

$String* XMLEntityDescriptionImpl::getEntityName() {
	return this->fEntityName;
}

void XMLEntityDescriptionImpl::setDescription($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId) {
	setDescription(entityName, publicId, literalSystemId, baseSystemId, expandedSystemId, nullptr);
}

void XMLEntityDescriptionImpl::setDescription($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$) {
	$set(this, fEntityName, entityName);
	setValues(publicId, literalSystemId, baseSystemId, expandedSystemId, namespace$);
}

void XMLEntityDescriptionImpl::clear() {
	$XMLResourceIdentifierImpl::clear();
	$set(this, fEntityName, nullptr);
}

int32_t XMLEntityDescriptionImpl::hashCode() {
	int32_t code = $XMLResourceIdentifierImpl::hashCode();
	if (this->fEntityName != nullptr) {
		code += $nc(this->fEntityName)->hashCode();
	}
	return code;
}

$String* XMLEntityDescriptionImpl::toString() {
	$var($StringBuffer, str, $new($StringBuffer));
	if (this->fEntityName != nullptr) {
		str->append(this->fEntityName);
	}
	str->append(u':');
	if (this->fPublicId != nullptr) {
		str->append(this->fPublicId);
	}
	str->append(u':');
	if (this->fLiteralSystemId != nullptr) {
		str->append(this->fLiteralSystemId);
	}
	str->append(u':');
	if (this->fBaseSystemId != nullptr) {
		str->append(this->fBaseSystemId);
	}
	str->append(u':');
	if (this->fExpandedSystemId != nullptr) {
		str->append(this->fExpandedSystemId);
	}
	str->append(u':');
	if (this->fNamespace != nullptr) {
		str->append(this->fNamespace);
	}
	return str->toString();
}

XMLEntityDescriptionImpl::XMLEntityDescriptionImpl() {
}

$Class* XMLEntityDescriptionImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEntityDescriptionImpl, name, initialize, &_XMLEntityDescriptionImpl_ClassInfo_, allocate$XMLEntityDescriptionImpl);
	return class$;
}

$Class* XMLEntityDescriptionImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com