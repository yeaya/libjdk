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
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
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

$FieldInfo _XML11DTDValidator_FieldInfo_[] = {
	{"DTD_VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDValidator, DTD_VALIDATOR_PROPERTY)},
	{}
};

$MethodInfo _XML11DTDValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DTDValidator, init$, void)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDValidator, init, void)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDValidator, reset, void, $XMLComponentManager*)},
	{}
};

$ClassInfo _XML11DTDValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDValidator",
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator",
	nullptr,
	_XML11DTDValidator_FieldInfo_,
	_XML11DTDValidator_MethodInfo_
};

$Object* allocate$XML11DTDValidator($Class* clazz) {
	return $of($alloc(XML11DTDValidator));
}

$String* XML11DTDValidator::DTD_VALIDATOR_PROPERTY = nullptr;

void XML11DTDValidator::init$() {
	$XMLDTDValidator::init$();
}

void XML11DTDValidator::reset($XMLComponentManager* manager) {
	$var($XMLDTDValidator, curr, nullptr);
	bool var$0 = ($assign(curr, $cast($XMLDTDValidator, $nc(manager)->getProperty(XML11DTDValidator::DTD_VALIDATOR_PROPERTY)))) != nullptr;
	if (var$0 && !$equals(curr, this)) {
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

void clinit$XML11DTDValidator($Class* class$) {
	$init($Constants);
	$assignStatic(XML11DTDValidator::DTD_VALIDATOR_PROPERTY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
}

$Class* XML11DTDValidator::load$($String* name, bool initialize) {
	$loadClass(XML11DTDValidator, name, initialize, &_XML11DTDValidator_ClassInfo_, clinit$XML11DTDValidator, allocate$XML11DTDValidator);
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