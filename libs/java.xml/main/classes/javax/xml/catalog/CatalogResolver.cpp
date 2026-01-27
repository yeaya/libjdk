#include <javax/xml/catalog/CatalogResolver.h>

#include <org/xml/sax/EntityResolver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EntityResolver = ::org::xml::sax::EntityResolver;

namespace javax {
	namespace xml {
		namespace catalog {

$MethodInfo _CatalogResolver_MethodInfo_[] = {
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC | $ABSTRACT},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _CatalogResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.catalog.CatalogResolver",
	nullptr,
	"org.xml.sax.EntityResolver,javax.xml.stream.XMLResolver,javax.xml.transform.URIResolver,org.w3c.dom.ls.LSResourceResolver",
	nullptr,
	_CatalogResolver_MethodInfo_
};

$Object* allocate$CatalogResolver($Class* clazz) {
	return $of($alloc(CatalogResolver));
}

int32_t CatalogResolver::hashCode() {
	 return this->$EntityResolver::hashCode();
}

bool CatalogResolver::equals(Object$* arg0) {
	 return this->$EntityResolver::equals(arg0);
}

$Object* CatalogResolver::clone() {
	 return this->$EntityResolver::clone();
}

$String* CatalogResolver::toString() {
	 return this->$EntityResolver::toString();
}

void CatalogResolver::finalize() {
	this->$EntityResolver::finalize();
}

$Class* CatalogResolver::load$($String* name, bool initialize) {
	$loadClass(CatalogResolver, name, initialize, &_CatalogResolver_ClassInfo_, allocate$CatalogResolver);
	return class$;
}

$Class* CatalogResolver::class$ = nullptr;

		} // catalog
	} // xml
} // javax