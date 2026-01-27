#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLSimpleType = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

$FieldInfo _XMLAttributeDecl_FieldInfo_[] = {
	{"name", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $FINAL, $field(XMLAttributeDecl, name)},
	{"simpleType", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;", nullptr, $PUBLIC | $FINAL, $field(XMLAttributeDecl, simpleType)},
	{"optional", "Z", nullptr, $PUBLIC, $field(XMLAttributeDecl, optional)},
	{}
};

$MethodInfo _XMLAttributeDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLAttributeDecl, init$, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLAttributeDecl, clear, void)},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLAttributeDecl, setValues, void, $QName*, $XMLSimpleType*, bool)},
	{}
};

$ClassInfo _XMLAttributeDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.dtd.nonvalidating.XMLAttributeDecl",
	"java.lang.Object",
	nullptr,
	_XMLAttributeDecl_FieldInfo_,
	_XMLAttributeDecl_MethodInfo_
};

$Object* allocate$XMLAttributeDecl($Class* clazz) {
	return $of($alloc(XMLAttributeDecl));
}

void XMLAttributeDecl::init$() {
	$set(this, name, $new($QName));
	$set(this, simpleType, $new($XMLSimpleType));
}

void XMLAttributeDecl::setValues($QName* name, $XMLSimpleType* simpleType, bool optional) {
	$nc(this->name)->setValues(name);
	$nc(this->simpleType)->setValues(simpleType);
	this->optional = optional;
}

void XMLAttributeDecl::clear() {
	$nc(this->name)->clear();
	$nc(this->simpleType)->clear();
	this->optional = false;
}

XMLAttributeDecl::XMLAttributeDecl() {
}

$Class* XMLAttributeDecl::load$($String* name, bool initialize) {
	$loadClass(XMLAttributeDecl, name, initialize, &_XMLAttributeDecl_ClassInfo_, allocate$XMLAttributeDecl);
	return class$;
}

$Class* XMLAttributeDecl::class$ = nullptr;

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com