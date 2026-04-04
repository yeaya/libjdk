#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverFragment.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {
									namespace implementations {

$Logger* ResolverFragment::LOG = nullptr;

void ResolverFragment::init$() {
	$ResourceResolverSpi::init$();
}

$XMLSignatureInput* ResolverFragment::engineResolveURI($ResourceResolverContext* context) {
	$useLocalObjectStack();
	$var($Document, doc, $$nc($nc($nc(context)->attr)->getOwnerElement())->getOwnerDocument());
	$var($Node, selectedElem, nullptr);
	if ($nc(context->uriToResolve)->isEmpty()) {
		$nc(ResolverFragment::LOG)->debug("ResolverFragment with empty URI (means complete document)"_s);
		$assign(selectedElem, doc);
	} else {
		$var($String, id, context->uriToResolve->substring(1));
		$assign(selectedElem, $nc(doc)->getElementById(id));
		if (selectedElem == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {id}));
			$throwNew($ResourceResolverException, "signature.Verification.MissingID"_s, exArgs, context->uriToResolve, context->baseUri);
		}
		if (context->secureValidation) {
			$var($Element, start, $$nc(context->attr->getOwnerDocument())->getDocumentElement());
			if (!$XMLUtils::protectAgainstWrappingAttack(start, id)) {
				$var($ObjectArray, exArgs, $new($ObjectArray, {id}));
				$throwNew($ResourceResolverException, "signature.Verification.MultipleIDs"_s, exArgs, context->uriToResolve, context->baseUri);
			}
		}
		$nc(ResolverFragment::LOG)->debug("Try to catch an Element with ID {} and Element was {}"_s, $$new($ObjectArray, {
			id,
			selectedElem
		}));
	}
	$var($XMLSignatureInput, result, $new($XMLSignatureInput, selectedElem));
	result->setSecureValidation(context->secureValidation);
	result->setExcludeComments(true);
	result->setMIMEType("text/xml"_s);
	if (context->baseUri != nullptr && context->baseUri->length() > 0) {
		result->setSourceURI($(context->baseUri->concat(context->uriToResolve)));
	} else {
		result->setSourceURI(context->uriToResolve);
	}
	return result;
}

bool ResolverFragment::engineCanResolveURI($ResourceResolverContext* context) {
	$useLocalObjectStack();
	if ($nc(context)->uriToResolve == nullptr) {
		$nc(ResolverFragment::LOG)->debug("Quick fail for null uri"_s);
		return false;
	}
	bool var$0 = $nc(context->uriToResolve)->isEmpty();
	if (!var$0) {
		bool var$1 = context->uriToResolve->charAt(0) == u'#';
		var$0 = var$1 && !context->uriToResolve->startsWith("#xpointer("_s);
	}
	if (var$0) {
		$nc(ResolverFragment::LOG)->debug("State I can resolve reference: \"{}\""_s, $$new($ObjectArray, {context->uriToResolve}));
		return true;
	}
	$nc(ResolverFragment::LOG)->debug("Do not seem to be able to resolve reference: \"{}\""_s, $$new($ObjectArray, {context->uriToResolve}));
	return false;
}

void ResolverFragment::clinit$($Class* clazz) {
	$assignStatic(ResolverFragment::LOG, $LoggerFactory::getLogger(ResolverFragment::class$));
}

ResolverFragment::ResolverFragment() {
}

$Class* ResolverFragment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverFragment, LOG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResolverFragment, init$, void)},
		{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC, $virtualMethod(ResolverFragment, engineCanResolveURI, bool, $ResourceResolverContext*)},
		{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, $virtualMethod(ResolverFragment, engineResolveURI, $XMLSignatureInput*, $ResourceResolverContext*), "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverFragment",
		"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResolverFragment, name, initialize, &classInfo$$, ResolverFragment::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverFragment);
	});
	return class$;
}

$Class* ResolverFragment::class$ = nullptr;

									} // implementations
								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com