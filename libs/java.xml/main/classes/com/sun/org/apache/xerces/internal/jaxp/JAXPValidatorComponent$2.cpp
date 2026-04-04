#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$2.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMInputImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $DOMInputImpl = ::com::sun::org::apache::xerces::internal::dom::DOMInputImpl;
using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

void JAXPValidatorComponent$2::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
}

$LSInput* JAXPValidatorComponent$2::resolveResource($String* type, $String* ns, $String* publicId, $String* systemId, $String* baseUri) {
	$useLocalObjectStack();
	if (this->this$0->fEntityResolver == nullptr) {
		return nullptr;
	}
	try {
		$var($XMLInputSource, is, $nc(this->this$0->fEntityResolver)->resolveEntity($$new($XMLResourceIdentifierImpl, publicId, systemId, baseUri, nullptr)));
		if (is == nullptr) {
			return nullptr;
		}
		$var($LSInput, di, $new($DOMInputImpl));
		di->setBaseURI($($nc(is)->getBaseSystemId()));
		di->setByteStream($(is->getByteStream()));
		di->setCharacterStream($(is->getCharacterStream()));
		di->setEncoding($(is->getEncoding()));
		di->setPublicId($(is->getPublicId()));
		di->setSystemId($(is->getSystemId()));
		return di;
	} catch ($IOException& e) {
		$throwNew($XNIException, e);
	}
	$shouldNotReachHere();
}

JAXPValidatorComponent$2::JAXPValidatorComponent$2() {
}

$Class* JAXPValidatorComponent$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, 0, $method(JAXPValidatorComponent$2, init$, void, $JAXPValidatorComponent*)},
		{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$2, resolveResource, $LSInput*, $String*, $String*, $String*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
		"<init>",
		"(Ljavax/xml/validation/ValidatorHandler;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2",
		"java.lang.Object",
		"org.w3c.dom.ls.LSResourceResolver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
	};
	$loadClass(JAXPValidatorComponent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JAXPValidatorComponent$2);
	});
	return class$;
}

$Class* JAXPValidatorComponent$2::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com