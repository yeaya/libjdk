#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXSLT.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/TransformerFactory.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef FEATURE_SECURE_PROCESSING
#undef LOG
#undef TRANSFORM_XSLT
#undef TRUE
#undef XSLTSTYLESHEET

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $TransformerFactory = ::javax::xml::transform::TransformerFactory;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$FieldInfo _TransformXSLT_FieldInfo_[] = {
	{"XSLTSpecNS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TransformXSLT, XSLTSpecNS)},
	{"defaultXSLTSpecNSprefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TransformXSLT, defaultXSLTSpecNSprefix)},
	{"XSLTSTYLESHEET", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TransformXSLT, XSLTSTYLESHEET)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransformXSLT, LOG)},
	{}
};

$MethodInfo _TransformXSLT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformXSLT, init$, void)},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TransformXSLT, engineGetURI, $String*)},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, $virtualMethod(TransformXSLT, enginePerformTransform, $XMLSignatureInput*, $XMLSignatureInput*, $OutputStream*, $Element*, $String*, bool), "java.io.IOException,com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{}
};

$ClassInfo _TransformXSLT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXSLT",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	_TransformXSLT_FieldInfo_,
	_TransformXSLT_MethodInfo_
};

$Object* allocate$TransformXSLT($Class* clazz) {
	return $of($alloc(TransformXSLT));
}

$String* TransformXSLT::XSLTSpecNS = nullptr;
$String* TransformXSLT::defaultXSLTSpecNSprefix = nullptr;
$String* TransformXSLT::XSLTSTYLESHEET = nullptr;
$Logger* TransformXSLT::LOG = nullptr;

void TransformXSLT::init$() {
	$TransformSpi::init$();
}

$String* TransformXSLT::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_XSLT;
}

$XMLSignatureInput* TransformXSLT::enginePerformTransform($XMLSignatureInput* input, $OutputStream* baos, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Element, xsltElement, $XMLUtils::selectNode($($nc(transformElement)->getFirstChild()), TransformXSLT::XSLTSpecNS, "stylesheet"_s, 0));
		if (xsltElement == nullptr) {
			$assign(xsltElement, $XMLUtils::selectNode($($nc(transformElement)->getFirstChild()), TransformXSLT::XSLTSpecNS, "transform"_s, 0));
		}
		if (xsltElement == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$of("xslt:stylesheet"_s),
				$of("Transform"_s)
			}));
			$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
		}
		$var($TransformerFactory, tFactory, $TransformerFactory::newInstance());
		$init($XMLConstants);
		$init($Boolean);
		$nc(tFactory)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, $nc($Boolean::TRUE)->booleanValue());
		if (secureValidation) {
			try {
				tFactory->setAttribute($XMLConstants::ACCESS_EXTERNAL_DTD, ""_s);
				tFactory->setAttribute($XMLConstants::ACCESS_EXTERNAL_STYLESHEET, ""_s);
			} catch ($IllegalArgumentException& ex) {
			}
		}
		$var($Source, stylesheet, nullptr);
		{
			{
				$var($ByteArrayOutputStream, os, $new($ByteArrayOutputStream));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$var($Transformer, transformer, tFactory->newTransformer());
							$var($DOMSource, source, $new($DOMSource, xsltElement));
							$var($StreamResult, result, $new($StreamResult, static_cast<$OutputStream*>(os)));
							$nc(transformer)->transform(source, result);
							$assign(stylesheet, $new($StreamSource, static_cast<$InputStream*>($$new($ByteArrayInputStream, $(os->toByteArray())))));
						} catch ($Throwable& t$) {
							try {
								os->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						os->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
		$var($Transformer, transformer, tFactory->newTransformer(stylesheet));
		try {
			$nc(transformer)->setOutputProperty("{http://xml.apache.org/xalan}line-separator"_s, "\n"_s);
		} catch ($Exception& e) {
			$nc(TransformXSLT::LOG)->warn($$str({"Unable to set Xalan line-separator property: "_s, $(e->getMessage())}));
		}
		{
			$var($InputStream, is, $new($ByteArrayInputStream, $($nc(input)->getBytes())));
			{
				$var($Throwable, var$2, nullptr);
				$var($XMLSignatureInput, var$4, nullptr);
				bool return$3 = false;
				try {
					try {
						$var($Source, xmlSource, $new($StreamSource, is));
						if (baos == nullptr) {
							{
								$var($ByteArrayOutputStream, baos1, $new($ByteArrayOutputStream));
								{
									$var($Throwable, var$5, nullptr);
									$var($XMLSignatureInput, var$7, nullptr);
									bool return$6 = false;
									try {
										try {
											$var($StreamResult, outputTarget, $new($StreamResult, static_cast<$OutputStream*>(baos1)));
											$nc(transformer)->transform(xmlSource, outputTarget);
											$var($XMLSignatureInput, output, $new($XMLSignatureInput, $(baos1->toByteArray())));
											output->setSecureValidation(secureValidation);
											$assign(var$7, output);
											return$6 = true;
											goto $finally2;
										} catch ($Throwable& t$) {
											try {
												baos1->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable& var$8) {
										$assign(var$5, var$8);
									} $finally2: {
										baos1->close();
									}
									if (var$5 != nullptr) {
										$throw(var$5);
									}
									if (return$6) {
										$assign(var$4, var$7);
										return$3 = true;
										goto $finally1;
									}
								}
							}
						}
						$var($StreamResult, outputTarget, $new($StreamResult, baos));
						$nc(transformer)->transform(xmlSource, outputTarget);
					} catch ($Throwable& t$) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$9) {
					$assign(var$2, var$9);
				} $finally1: {
					is->close();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (return$3) {
					return var$4;
				}
			}
		}
		$var($XMLSignatureInput, output, $new($XMLSignatureInput, ($bytes*)nullptr));
		output->setSecureValidation(secureValidation);
		output->setOutputStream(baos);
		return output;
	} catch ($XMLSecurityException& ex) {
		$throwNew($TransformationException, $cast($Exception, ex));
	} catch ($TransformerException& ex) {
		$throwNew($TransformationException, $cast($Exception, ex));
	}
	$shouldNotReachHere();
}

void clinit$TransformXSLT($Class* class$) {
	$assignStatic(TransformXSLT::XSLTSpecNS, "http://www.w3.org/1999/XSL/Transform"_s);
	$assignStatic(TransformXSLT::defaultXSLTSpecNSprefix, "xslt"_s);
	$assignStatic(TransformXSLT::XSLTSTYLESHEET, "stylesheet"_s);
	$assignStatic(TransformXSLT::LOG, $LoggerFactory::getLogger(TransformXSLT::class$));
}

TransformXSLT::TransformXSLT() {
}

$Class* TransformXSLT::load$($String* name, bool initialize) {
	$loadClass(TransformXSLT, name, initialize, &_TransformXSLT_ClassInfo_, clinit$TransformXSLT, allocate$TransformXSLT);
	return class$;
}

$Class* TransformXSLT::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com