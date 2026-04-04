#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <jcpp.h>

#undef DTD_VALIDATOR_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$String* XML11DTDValidator::DTD_VALIDATOR_PROPERTY = nullptr;

void XML11DTDValidator::init$() {
	$XMLDTDValidator::init$();
}

void XML11DTDValidator::reset($XMLComponentManager* manager) {
	$var($XMLDTDValidator, curr, nullptr);
	if (($assign(curr, $cast($XMLDTDValidator, $nc(manager)->getProperty(XML11DTDValidator::DTD_VALIDATOR_PROPERTY)))) != nullptr && !$equals(curr, this)) {
		$set(this, fGrammarBucket, $nc(curr)->getGrammarBucket());
	}
	$XMLDTDValidator::reset(manager);
}

void XML11DTDValidator::init() {
	if (this->fValidation || this->fDynamicValidation) {
		$XMLDTDValidator::init();
		try {
			$set(this, fValID, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV("XML11ID"_s));
			$set(this, fValIDRef, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV("XML11IDREF"_s));
			$set(this, fValIDRefs, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV("XML11IDREFS"_s));
			$set(this, fValNMTOKEN, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV("XML11NMTOKEN"_s));
			$set(this, fValNMTOKENS, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV("XML11NMTOKENS"_s));
		} catch ($Exception& e) {
			e->printStackTrace($System::err);
		}
	}
}

XML11DTDValidator::XML11DTDValidator() {
}

void XML11DTDValidator::clinit$($Class* clazz) {
	$init($Constants);
	$assignStatic(XML11DTDValidator::DTD_VALIDATOR_PROPERTY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
}

$Class* XML11DTDValidator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DTD_VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDValidator, DTD_VALIDATOR_PROPERTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DTDValidator, init$, void)},
		{"init", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDValidator, init, void)},
		{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDValidator, reset, void, $XMLComponentManager*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDValidator",
		"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XML11DTDValidator, name, initialize, &classInfo$$, XML11DTDValidator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(XML11DTDValidator));
	});
	return class$;
}

$Class* XML11DTDValidator::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com