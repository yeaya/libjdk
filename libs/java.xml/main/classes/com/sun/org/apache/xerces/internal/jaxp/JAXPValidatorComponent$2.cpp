#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$2.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMInputImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
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
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
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

$FieldInfo _JAXPValidatorComponent$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$2, this$0)},
	{}
};

$MethodInfo _JAXPValidatorComponent$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, 0, $method(JAXPValidatorComponent$2, init$, void, $JAXPValidatorComponent*)},
	{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$2, resolveResource, $LSInput*, $String*, $String*, $String*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _JAXPValidatorComponent$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
	"<init>",
	"(Ljavax/xml/validation/ValidatorHandler;)V"
};

$InnerClassInfo _JAXPValidatorComponent$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JAXPValidatorComponent$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2",
	"java.lang.Object",
	"org.w3c.dom.ls.LSResourceResolver",
	_JAXPValidatorComponent$2_FieldInfo_,
	_JAXPValidatorComponent$2_MethodInfo_,
	nullptr,
	&_JAXPValidatorComponent$2_EnclosingMethodInfo_,
	_JAXPValidatorComponent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$2($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$2));
}

void JAXPValidatorComponent$2::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
}

$LSInput* JAXPValidatorComponent$2::resolveResource($String* type, $String* ns, $String* publicId, $String* systemId, $String* baseUri) {
	$useLocalCurrentObjectStackCache();
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
		di->setByteStream($($nc(is)->getByteStream()));
		di->setCharacterStream($($nc(is)->getCharacterStream()));
		di->setEncoding($($nc(is)->getEncoding()));
		di->setPublicId($($nc(is)->getPublicId()));
		di->setSystemId($($nc(is)->getSystemId()));
		return di;
	} catch ($IOException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
	$shouldNotReachHere();
}

JAXPValidatorComponent$2::JAXPValidatorComponent$2() {
}

$Class* JAXPValidatorComponent$2::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$2, name, initialize, &_JAXPValidatorComponent$2_ClassInfo_, allocate$JAXPValidatorComponent$2);
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