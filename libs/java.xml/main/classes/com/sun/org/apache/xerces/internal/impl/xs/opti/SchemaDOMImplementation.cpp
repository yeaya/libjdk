#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMImplementation.h>

#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _SchemaDOMImplementation_FieldInfo_[] = {
	{"singleton", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMImplementation;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaDOMImplementation, singleton)},
	{}
};

$MethodInfo _SchemaDOMImplementation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SchemaDOMImplementation, init$, void)},
	{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, createDocument, $Document*, $String*, $String*, $DocumentType*), "org.w3c.dom.DOMException"},
	{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, createDocumentType, $DocumentType*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(SchemaDOMImplementation, getDOMImplementation, $DOMImplementation*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, getFeature, $Object*, $String*, $String*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, hasFeature, bool, $String*, $String*)},
	{}
};

$ClassInfo _SchemaDOMImplementation_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMImplementation",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementation",
	_SchemaDOMImplementation_FieldInfo_,
	_SchemaDOMImplementation_MethodInfo_
};

$Object* allocate$SchemaDOMImplementation($Class* clazz) {
	return $of($alloc(SchemaDOMImplementation));
}

SchemaDOMImplementation* SchemaDOMImplementation::singleton = nullptr;

$DOMImplementation* SchemaDOMImplementation::getDOMImplementation() {
	$init(SchemaDOMImplementation);
	return SchemaDOMImplementation::singleton;
}

void SchemaDOMImplementation::init$() {
}

$Document* SchemaDOMImplementation::createDocument($String* namespaceURI, $String* qualifiedName, $DocumentType* doctype) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$DocumentType* SchemaDOMImplementation::createDocumentType($String* qualifiedName, $String* publicId, $String* systemId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* SchemaDOMImplementation::getFeature($String* feature, $String* version) {
	if ($nc(SchemaDOMImplementation::singleton)->hasFeature(feature, version)) {
		return $of(SchemaDOMImplementation::singleton);
	}
	return $of(nullptr);
}

bool SchemaDOMImplementation::hasFeature($String* feature, $String* version) {
	bool anyVersion = version == nullptr || $nc(version)->length() == 0;
	bool var$1 = $nc(feature)->equalsIgnoreCase("Core"_s);
	bool var$0 = (var$1 || $nc(feature)->equalsIgnoreCase("XML"_s));
	if (var$0) {
		bool var$3 = anyVersion || version->equals("1.0"_s);
		bool var$2 = var$3 || version->equals("2.0"_s);
		var$0 = (var$2 || version->equals("3.0"_s));
	}
	return var$0;
}

void clinit$SchemaDOMImplementation($Class* class$) {
	$assignStatic(SchemaDOMImplementation::singleton, $new(SchemaDOMImplementation));
}

SchemaDOMImplementation::SchemaDOMImplementation() {
}

$Class* SchemaDOMImplementation::load$($String* name, bool initialize) {
	$loadClass(SchemaDOMImplementation, name, initialize, &_SchemaDOMImplementation_ClassInfo_, clinit$SchemaDOMImplementation, allocate$SchemaDOMImplementation);
	return class$;
}

$Class* SchemaDOMImplementation::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com