#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformBase64Decode.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef TEXT_NODE
#undef TRANSFORM_BASE64_DECODE

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

void TransformBase64Decode::init$() {
	$TransformSpi::init$();
}

$String* TransformBase64Decode::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_BASE64_DECODE;
}

$XMLSignatureInput* TransformBase64Decode::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$useLocalObjectStack();
	if ($nc(input)->isElement()) {
		$var($Node, el, input->getSubNode());
		if ($$nc(input->getSubNode())->getNodeType() == $Node::TEXT_NODE) {
			$assign(el, $nc(el)->getParentNode());
		}
		$var($StringBuilder, sb, $new($StringBuilder));
		traverseElement($cast($Element, el), sb);
		if (os == nullptr) {
			$var($bytes, decodedBytes, $XMLUtils::decode($(sb->toString())));
			$var($XMLSignatureInput, output, $new($XMLSignatureInput, decodedBytes));
			output->setSecureValidation(secureValidation);
			return output;
		}
		$var($bytes, bytes, $XMLUtils::decode($(sb->toString())));
		$nc(os)->write(bytes);
		$var($XMLSignatureInput, output, $new($XMLSignatureInput, ($bytes*)nullptr));
		output->setSecureValidation(secureValidation);
		output->setOutputStream(os);
		return output;
	} else {
		bool var$0 = input->isOctetStream();
		if (var$0 || input->isNodeSet()) {
			if (os == nullptr) {
				$var($bytes, base64Bytes, input->getBytes());
				$var($bytes, decodedBytes, $XMLUtils::decode(base64Bytes));
				$var($XMLSignatureInput, output, $new($XMLSignatureInput, decodedBytes));
				output->setSecureValidation(secureValidation);
				return output;
			}
			bool var$1 = input->isByteArray();
			if (var$1 || input->isNodeSet()) {
				$var($bytes, bytes, $XMLUtils::decode($(input->getBytes())));
				$nc(os)->write(bytes);
			} else {
				$var($bytes, inputBytes, $JavaUtils::getBytesFromStream($(input->getOctetStreamReal())));
				$var($bytes, bytes, $XMLUtils::decode(inputBytes));
				$nc(os)->write(bytes);
			}
			$var($XMLSignatureInput, output, $new($XMLSignatureInput, ($bytes*)nullptr));
			output->setSecureValidation(secureValidation);
			output->setOutputStream(os);
			return output;
		}
	}
	$throwNew($TransformationException, "empty"_s, $$new($ObjectArray, {"Unrecognized XMLSignatureInput state"_s}));
}

void TransformBase64Decode::traverseElement($Element* node, $StringBuilder* sb) {
	$useLocalObjectStack();
	$var($Node, sibling, $nc(node)->getFirstChild());
	while (sibling != nullptr) {
		if ($Node::ELEMENT_NODE == sibling->getNodeType()) {
			traverseElement($cast($Element, sibling), sb);
		} else if ($Node::TEXT_NODE == sibling->getNodeType()) {
			$nc(sb)->append($($cast($Text, sibling)->getData()));
		}
		$assign(sibling, sibling->getNextSibling());
	}
}

TransformBase64Decode::TransformBase64Decode() {
}

$Class* TransformBase64Decode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransformBase64Decode, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TransformBase64Decode, engineGetURI, $String*)},
		{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, $virtualMethod(TransformBase64Decode, enginePerformTransform, $XMLSignatureInput*, $XMLSignatureInput*, $OutputStream*, $Element*, $String*, bool), "java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
		{"traverseElement", "(Lorg/w3c/dom/Element;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(TransformBase64Decode, traverseElement, void, $Element*, $StringBuilder*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformBase64Decode",
		"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TransformBase64Decode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformBase64Decode);
	});
	return class$;
}

$Class* TransformBase64Decode::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com