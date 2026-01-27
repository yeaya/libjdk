#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType.h>
#include <jcpp.h>

#undef TYPE_ANY
#undef TYPE_CHILDREN
#undef TYPE_EMPTY
#undef TYPE_MIXED
#undef TYPE_SIMPLE

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

$FieldInfo _XMLElementDecl_FieldInfo_[] = {
	{"TYPE_ANY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLElementDecl, TYPE_ANY)},
	{"TYPE_EMPTY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLElementDecl, TYPE_EMPTY)},
	{"TYPE_MIXED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLElementDecl, TYPE_MIXED)},
	{"TYPE_CHILDREN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLElementDecl, TYPE_CHILDREN)},
	{"TYPE_SIMPLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLElementDecl, TYPE_SIMPLE)},
	{"name", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $FINAL, $field(XMLElementDecl, name)},
	{"scope", "I", nullptr, $PUBLIC, $field(XMLElementDecl, scope)},
	{"type", "S", nullptr, $PUBLIC, $field(XMLElementDecl, type)},
	{"simpleType", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;", nullptr, $PUBLIC | $FINAL, $field(XMLElementDecl, simpleType)},
	{}
};

$MethodInfo _XMLElementDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLElementDecl, init$, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLElementDecl, clear, void)},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/xni/QName;ISLcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;)V", nullptr, $PUBLIC, $virtualMethod(XMLElementDecl, setValues, void, $QName*, int32_t, int16_t, $XMLSimpleType*)},
	{}
};

$ClassInfo _XMLElementDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.dtd.nonvalidating.XMLElementDecl",
	"java.lang.Object",
	nullptr,
	_XMLElementDecl_FieldInfo_,
	_XMLElementDecl_MethodInfo_
};

$Object* allocate$XMLElementDecl($Class* clazz) {
	return $of($alloc(XMLElementDecl));
}

void XMLElementDecl::init$() {
	$set(this, name, $new($QName));
	this->scope = -1;
	this->type = (int16_t)-1;
	$set(this, simpleType, $new($XMLSimpleType));
}

void XMLElementDecl::setValues($QName* name, int32_t scope, int16_t type, $XMLSimpleType* simpleType) {
	$nc(this->name)->setValues(name);
	this->scope = scope;
	this->type = type;
	$nc(this->simpleType)->setValues(simpleType);
}

void XMLElementDecl::clear() {
	$nc(this->name)->clear();
	this->type = (int16_t)-1;
	this->scope = -1;
	$nc(this->simpleType)->clear();
}

XMLElementDecl::XMLElementDecl() {
}

$Class* XMLElementDecl::load$($String* name, bool initialize) {
	$loadClass(XMLElementDecl, name, initialize, &_XMLElementDecl_ClassInfo_, allocate$XMLElementDecl);
	return class$;
}

$Class* XMLElementDecl::class$ = nullptr;

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com