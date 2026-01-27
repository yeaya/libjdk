#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLEntityDecl_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, name)},
	{"publicId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, systemId)},
	{"baseSystemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, baseSystemId)},
	{"notation", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, notation)},
	{"isPE", "Z", nullptr, $PUBLIC, $field(XMLEntityDecl, isPE)},
	{"inExternal", "Z", nullptr, $PUBLIC, $field(XMLEntityDecl, inExternal)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEntityDecl, value)},
	{}
};

$MethodInfo _XMLEntityDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEntityDecl, init$, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDecl, clear, void)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDecl, setValues, void, $String*, $String*, $String*, $String*, $String*, bool, bool)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityDecl, setValues, void, $String*, $String*, $String*, $String*, $String*, $String*, bool, bool)},
	{}
};

$ClassInfo _XMLEntityDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLEntityDecl",
	"java.lang.Object",
	nullptr,
	_XMLEntityDecl_FieldInfo_,
	_XMLEntityDecl_MethodInfo_
};

$Object* allocate$XMLEntityDecl($Class* clazz) {
	return $of($alloc(XMLEntityDecl));
}

void XMLEntityDecl::init$() {
}

void XMLEntityDecl::setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation, bool isPE, bool inExternal) {
	setValues(name, publicId, systemId, baseSystemId, notation, nullptr, isPE, inExternal);
}

void XMLEntityDecl::setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation, $String* value, bool isPE, bool inExternal) {
	$set(this, name, name);
	$set(this, publicId, publicId);
	$set(this, systemId, systemId);
	$set(this, baseSystemId, baseSystemId);
	$set(this, notation, notation);
	$set(this, value, value);
	this->isPE = isPE;
	this->inExternal = inExternal;
}

void XMLEntityDecl::clear() {
	$set(this, name, nullptr);
	$set(this, publicId, nullptr);
	$set(this, systemId, nullptr);
	$set(this, baseSystemId, nullptr);
	$set(this, notation, nullptr);
	$set(this, value, nullptr);
	this->isPE = false;
	this->inExternal = false;
}

XMLEntityDecl::XMLEntityDecl() {
}

$Class* XMLEntityDecl::load$($String* name, bool initialize) {
	$loadClass(XMLEntityDecl, name, initialize, &_XMLEntityDecl_ClassInfo_, allocate$XMLEntityDecl);
	return class$;
}

$Class* XMLEntityDecl::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com