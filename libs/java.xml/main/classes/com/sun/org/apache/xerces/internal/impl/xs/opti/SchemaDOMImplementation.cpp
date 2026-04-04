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
	if (SchemaDOMImplementation::singleton->hasFeature(feature, version)) {
		return SchemaDOMImplementation::singleton;
	}
	return nullptr;
}

bool SchemaDOMImplementation::hasFeature($String* feature, $String* version) {
	bool anyVersion = version == nullptr || version->length() == 0;
	bool var$1 = $nc(feature)->equalsIgnoreCase("Core"_s);
	bool var$0 = var$1 || feature->equalsIgnoreCase("XML"_s);
	if (var$0) {
		bool var$3 = anyVersion || $nc(version)->equals("1.0"_s);
		bool var$2 = var$3 || $nc(version)->equals("2.0"_s);
		var$0 = var$2 || $nc(version)->equals("3.0"_s);
	}
	return var$0;
}

void SchemaDOMImplementation::clinit$($Class* clazz) {
	$assignStatic(SchemaDOMImplementation::singleton, $new(SchemaDOMImplementation));
}

SchemaDOMImplementation::SchemaDOMImplementation() {
}

$Class* SchemaDOMImplementation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMImplementation;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaDOMImplementation, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SchemaDOMImplementation, init$, void)},
		{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, createDocument, $Document*, $String*, $String*, $DocumentType*), "org.w3c.dom.DOMException"},
		{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, createDocumentType, $DocumentType*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
		{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(SchemaDOMImplementation, getDOMImplementation, $DOMImplementation*)},
		{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, getFeature, $Object*, $String*, $String*)},
		{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SchemaDOMImplementation, hasFeature, bool, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMImplementation",
		"java.lang.Object",
		"org.w3c.dom.DOMImplementation",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SchemaDOMImplementation, name, initialize, &classInfo$$, SchemaDOMImplementation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SchemaDOMImplementation);
	});
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