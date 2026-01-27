#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSAllCM.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FIRST_ERROR
#undef STATE_CHILD
#undef STATE_START
#undef STATE_VALID
#undef SUBSEQUENT_ERROR

using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XMLSchemaException = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaException;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSAllCM_FieldInfo_[] = {
	{"STATE_START", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSAllCM, STATE_START)},
	{"STATE_VALID", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSAllCM, STATE_VALID)},
	{"STATE_CHILD", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSAllCM, STATE_CHILD)},
	{"fAllElements", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XSAllCM, fAllElements)},
	{"fIsOptionalElement", "[Z", nullptr, $PRIVATE, $field(XSAllCM, fIsOptionalElement)},
	{"fHasOptionalContent", "Z", nullptr, $PRIVATE, $field(XSAllCM, fHasOptionalContent)},
	{"fNumElements", "I", nullptr, $PRIVATE, $field(XSAllCM, fNumElements)},
	{}
};

$MethodInfo _XSAllCM_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(XSAllCM, init$, void, bool, int32_t)},
	{"addElement", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Z)V", nullptr, $PUBLIC, $virtualMethod(XSAllCM, addElement, void, $XSElementDecl*, bool)},
	{"checkMinMaxBounds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XSAllCM, checkMinMaxBounds, $List*)},
	{"checkUniqueParticleAttribution", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC, $virtualMethod(XSAllCM, checkUniqueParticleAttribution, bool, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"endContentModel", "([I)Z", nullptr, $PUBLIC, $virtualMethod(XSAllCM, endContentModel, bool, $ints*)},
	{"findMatchingDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XSAllCM, findMatchingDecl, $Object*, $QName*, $SubstitutionGroupHandler*)},
	{"getTermName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAllCM, getTermName, $String*, int32_t)},
	{"isCompactedForUPA", "()Z", nullptr, $PUBLIC, $virtualMethod(XSAllCM, isCompactedForUPA, bool)},
	{"occurenceInfo", "([I)[I", nullptr, $PUBLIC, $virtualMethod(XSAllCM, occurenceInfo, $ints*, $ints*)},
	{"oneTransition", "(Lcom/sun/org/apache/xerces/internal/xni/QName;[ILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSAllCM, oneTransition, $Object*, $QName*, $ints*, $SubstitutionGroupHandler*)},
	{"startContentModel", "()[I", nullptr, $PUBLIC, $virtualMethod(XSAllCM, startContentModel, $ints*)},
	{"whatCanGoHere", "([I)Ljava/util/List;", "([I)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(XSAllCM, whatCanGoHere, $List*, $ints*)},
	{}
};

$ClassInfo _XSAllCM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSAllCM",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator",
	_XSAllCM_FieldInfo_,
	_XSAllCM_MethodInfo_
};

$Object* allocate$XSAllCM($Class* clazz) {
	return $of($alloc(XSAllCM));
}

void XSAllCM::init$(bool hasOptionalContent, int32_t size) {
	this->fHasOptionalContent = false;
	this->fNumElements = 0;
	this->fHasOptionalContent = hasOptionalContent;
	$set(this, fAllElements, $new($XSElementDeclArray, size));
	$set(this, fIsOptionalElement, $new($booleans, size));
}

void XSAllCM::addElement($XSElementDecl* element, bool isOptional) {
	$nc(this->fAllElements)->set(this->fNumElements, element);
	$nc(this->fIsOptionalElement)->set(this->fNumElements, isOptional);
	++this->fNumElements;
}

$ints* XSAllCM::startContentModel() {
	$var($ints, state, $new($ints, this->fNumElements + 1));
	for (int32_t i = 0; i <= this->fNumElements; ++i) {
		state->set(i, XSAllCM::STATE_START);
	}
	return state;
}

$Object* XSAllCM::findMatchingDecl($QName* elementName, $SubstitutionGroupHandler* subGroupHandler) {
	$var($Object, matchingDecl, nullptr);
	for (int32_t i = 0; i < this->fNumElements; ++i) {
		$assign(matchingDecl, $nc(subGroupHandler)->getMatchingElemDecl(elementName, $nc(this->fAllElements)->get(i)));
		if (matchingDecl != nullptr) {
			break;
		}
	}
	return $of(matchingDecl);
}

$Object* XSAllCM::oneTransition($QName* elementName, $ints* currentState, $SubstitutionGroupHandler* subGroupHandler) {
	if ($nc(currentState)->get(0) < 0) {
		currentState->set(0, $XSCMValidator::SUBSEQUENT_ERROR);
		return $of(findMatchingDecl(elementName, subGroupHandler));
	}
	$nc(currentState)->set(0, XSAllCM::STATE_CHILD);
	$var($Object, matchingDecl, nullptr);
	for (int32_t i = 0; i < this->fNumElements; ++i) {
		if (currentState->get(i + 1) != XSAllCM::STATE_START) {
			continue;
		}
		$assign(matchingDecl, $nc(subGroupHandler)->getMatchingElemDecl(elementName, $nc(this->fAllElements)->get(i)));
		if (matchingDecl != nullptr) {
			currentState->set(i + 1, XSAllCM::STATE_VALID);
			return $of(matchingDecl);
		}
	}
	currentState->set(0, $XSCMValidator::FIRST_ERROR);
	return $of(findMatchingDecl(elementName, subGroupHandler));
}

bool XSAllCM::endContentModel($ints* currentState) {
	int32_t state = $nc(currentState)->get(0);
	if (state == $XSCMValidator::FIRST_ERROR || state == $XSCMValidator::SUBSEQUENT_ERROR) {
		return false;
	}
	if (this->fHasOptionalContent && state == XSAllCM::STATE_START) {
		return true;
	}
	for (int32_t i = 0; i < this->fNumElements; ++i) {
		if (!$nc(this->fIsOptionalElement)->get(i) && currentState->get(i + 1) == XSAllCM::STATE_START) {
			return false;
		}
	}
	return true;
}

bool XSAllCM::checkUniqueParticleAttribution($SubstitutionGroupHandler* subGroupHandler) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fNumElements; ++i) {
		for (int32_t j = i + 1; j < this->fNumElements; ++j) {
			if ($XSConstraints::overlapUPA($nc(this->fAllElements)->get(i), $nc(this->fAllElements)->get(j), subGroupHandler)) {
				$throwNew($XMLSchemaException, "cos-nonambig"_s, $$new($ObjectArray, {
					$($of($nc($nc(this->fAllElements)->get(i))->toString())),
					$($of($nc($nc(this->fAllElements)->get(j))->toString()))
				}));
			}
		}
	}
	return false;
}

$List* XSAllCM::whatCanGoHere($ints* state) {
	$var($List, ret, $new($ArrayList));
	for (int32_t i = 0; i < this->fNumElements; ++i) {
		if ($nc(state)->get(i + 1) == XSAllCM::STATE_START) {
			ret->add($nc(this->fAllElements)->get(i));
		}
	}
	return ret;
}

$List* XSAllCM::checkMinMaxBounds() {
	return nullptr;
}

$ints* XSAllCM::occurenceInfo($ints* state) {
	return nullptr;
}

$String* XSAllCM::getTermName(int32_t termId) {
	return nullptr;
}

bool XSAllCM::isCompactedForUPA() {
	return false;
}

XSAllCM::XSAllCM() {
}

$Class* XSAllCM::load$($String* name, bool initialize) {
	$loadClass(XSAllCM, name, initialize, &_XSAllCM_ClassInfo_, allocate$XSAllCM);
	return class$;
}

$Class* XSAllCM::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com