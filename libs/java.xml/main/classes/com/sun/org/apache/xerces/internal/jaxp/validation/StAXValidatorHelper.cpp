#include <com/sun/org/apache/xerces/internal/jaxp/validation/StAXValidatorHelper.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <java/util/Locale.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/TransformerFactoryConfigurationError.h>
#include <javax/xml/transform/sax/SAXResult.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <javax/xml/transform/stax/StAXResult.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef JDK_DEBUG_LIMIT
#undef OVERRIDE_PARSER
#undef SECURITY_MANAGER

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $ValidatorHandlerImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $TransformerFactoryConfigurationError = ::javax::xml::transform::TransformerFactoryConfigurationError;
using $SAXResult = ::javax::xml::transform::sax::SAXResult;
using $SAXTransformerFactory = ::javax::xml::transform::sax::SAXTransformerFactory;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $StAXResult = ::javax::xml::transform::stax::StAXResult;
using $ValidatorHandler = ::javax::xml::validation::ValidatorHandler;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _StAXValidatorHelper_FieldInfo_[] = {
	{"fComponentManager", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;", nullptr, $PRIVATE, $field(StAXValidatorHelper, fComponentManager)},
	{"identityTransformer1", "Ljavax/xml/transform/Transformer;", nullptr, $PRIVATE, $field(StAXValidatorHelper, identityTransformer1)},
	{"identityTransformer2", "Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PRIVATE, $field(StAXValidatorHelper, identityTransformer2)},
	{"handler", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl;", nullptr, $PRIVATE, $field(StAXValidatorHelper, handler)},
	{}
};

$MethodInfo _StAXValidatorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;)V", nullptr, $PUBLIC, $method(StAXValidatorHelper, init$, void, $XMLSchemaValidatorComponentManager*)},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(StAXValidatorHelper, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _StAXValidatorHelper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.StAXValidatorHelper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper",
	_StAXValidatorHelper_FieldInfo_,
	_StAXValidatorHelper_MethodInfo_
};

$Object* allocate$StAXValidatorHelper($Class* clazz) {
	return $of($alloc(StAXValidatorHelper));
}

void StAXValidatorHelper::init$($XMLSchemaValidatorComponentManager* componentManager) {
	$set(this, identityTransformer1, nullptr);
	$set(this, identityTransformer2, nullptr);
	$set(this, handler, nullptr);
	$set(this, fComponentManager, componentManager);
}

void StAXValidatorHelper::validate($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if (result == nullptr || $instanceOf($StAXResult, result)) {
		if (this->identityTransformer1 == nullptr) {
			try {
				$init($JdkConstants);
				$var($SAXTransformerFactory, tf, $JdkXmlUtils::getSAXTransformFactory($nc(this->fComponentManager)->getFeature($JdkConstants::OVERRIDE_PARSER)));
				$init($Constants);
				$var($XMLSecurityManager, securityManager, $cast($XMLSecurityManager, $nc(this->fComponentManager)->getProperty($Constants::SECURITY_MANAGER)));
				if (securityManager != nullptr) {
					{
						$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$XMLSecurityManager$Limit* limit = arr$->get(i$);
							{
								if (securityManager->isSet($nc(limit)->ordinal())) {
									$var($String, var$0, $nc(limit)->apiProperty());
									$nc(tf)->setAttribute(var$0, $(securityManager->getLimitValueAsString(limit)));
								}
							}
						}
					}
					if (securityManager->printEntityCountInfo()) {
						$nc(tf)->setAttribute($JdkConstants::JDK_DEBUG_LIMIT, "yes"_s);
					}
				}
				$set(this, identityTransformer1, $nc(tf)->newTransformer());
				$set(this, identityTransformer2, tf->newTransformerHandler());
			} catch ($TransformerConfigurationException& e) {
				$throwNew($TransformerFactoryConfigurationError, static_cast<$Exception*>(e));
			}
		}
		$set(this, handler, $new($ValidatorHandlerImpl, this->fComponentManager));
		if (result != nullptr) {
			$nc(this->handler)->setContentHandler(this->identityTransformer2);
			$nc(this->identityTransformer2)->setResult(result);
		}
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$nc(this->identityTransformer1)->transform(source, $$new($SAXResult, this->handler));
				} catch ($TransformerException& e) {
					if ($instanceOf($SAXException, $(e->getException()))) {
						$throw($cast($SAXException, $(e->getException())));
					}
					$throwNew($SAXException, static_cast<$Exception*>(e));
				}
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				$nc(this->handler)->setContentHandler(nullptr);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
		return;
	}
	$var($Locale, var$3, $nc(this->fComponentManager)->getLocale());
	$var($String, var$4, "SourceResultMismatch"_s);
	$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$3, var$4, $$new($ObjectArray, {
		$($of($nc($of(source))->getClass()->getName())),
		$($of($nc($of(result))->getClass()->getName()))
	}))));
}

StAXValidatorHelper::StAXValidatorHelper() {
}

$Class* StAXValidatorHelper::load$($String* name, bool initialize) {
	$loadClass(StAXValidatorHelper, name, initialize, &_StAXValidatorHelper_ClassInfo_, allocate$StAXValidatorHelper);
	return class$;
}

$Class* StAXValidatorHelper::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com