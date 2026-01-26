#include <javax/xml/crypto/XMLCryptoContext.h>

#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _XMLCryptoContext_MethodInfo_[] = {
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, get, $Object*, Object$*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getBaseURI, $String*)},
	{"getDefaultNamespacePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getDefaultNamespacePrefix, $String*)},
	{"getKeySelector", "()Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getKeySelector, $KeySelector*)},
	{"getNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getNamespacePrefix, $String*, $String*, $String*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getProperty, $Object*, $String*)},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, getURIDereferencer, $URIDereferencer*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, put, $Object*, Object$*, Object$*)},
	{"putNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, putNamespacePrefix, $String*, $String*, $String*)},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, setBaseURI, void, $String*)},
	{"setDefaultNamespacePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, setDefaultNamespacePrefix, void, $String*)},
	{"setKeySelector", "(Ljavax/xml/crypto/KeySelector;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, setKeySelector, void, $KeySelector*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, setProperty, $Object*, $String*, Object$*)},
	{"setURIDereferencer", "(Ljavax/xml/crypto/URIDereferencer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLCryptoContext, setURIDereferencer, void, $URIDereferencer*)},
	{}
};

$ClassInfo _XMLCryptoContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.XMLCryptoContext",
	nullptr,
	nullptr,
	nullptr,
	_XMLCryptoContext_MethodInfo_
};

$Object* allocate$XMLCryptoContext($Class* clazz) {
	return $of($alloc(XMLCryptoContext));
}

$Class* XMLCryptoContext::load$($String* name, bool initialize) {
	$loadClass(XMLCryptoContext, name, initialize, &_XMLCryptoContext_ClassInfo_, allocate$XMLCryptoContext);
	return class$;
}

$Class* XMLCryptoContext::class$ = nullptr;

		} // crypto
	} // xml
} // javax