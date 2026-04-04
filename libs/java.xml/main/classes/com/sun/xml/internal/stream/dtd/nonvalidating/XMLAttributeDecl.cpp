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
	$FieldInfo fieldInfos$$[] = {
		{"name", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $FINAL, $field(XMLAttributeDecl, name)},
		{"simpleType", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;", nullptr, $PUBLIC | $FINAL, $field(XMLAttributeDecl, simpleType)},
		{"optional", "Z", nullptr, $PUBLIC, $field(XMLAttributeDecl, optional)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLAttributeDecl, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLAttributeDecl, clear, void)},
		{"setValues", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLAttributeDecl, setValues, void, $QName*, $XMLSimpleType*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.dtd.nonvalidating.XMLAttributeDecl",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLAttributeDecl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLAttributeDecl);
	});
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