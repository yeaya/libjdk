#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSEmptyCM.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EMPTY
#undef FIRST_ERROR
#undef STATE_START
#undef SUBSEQUENT_ERROR

using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
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

$FieldInfo _XSEmptyCM_FieldInfo_[] = {
	{"STATE_START", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSEmptyCM, STATE_START)},
	{"EMPTY", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSEmptyCM, EMPTY)},
	{}
};

$MethodInfo _XSEmptyCM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSEmptyCM, init$, void)},
	{"checkMinMaxBounds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XSEmptyCM, checkMinMaxBounds, $List*)},
	{"checkUniqueParticleAttribution", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, checkUniqueParticleAttribution, bool, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"endContentModel", "([I)Z", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, endContentModel, bool, $ints*)},
	{"getTermName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, getTermName, $String*, int32_t)},
	{"isCompactedForUPA", "()Z", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, isCompactedForUPA, bool)},
	{"occurenceInfo", "([I)[I", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, occurenceInfo, $ints*, $ints*)},
	{"oneTransition", "(Lcom/sun/org/apache/xerces/internal/xni/QName;[ILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, oneTransition, $Object*, $QName*, $ints*, $SubstitutionGroupHandler*)},
	{"startContentModel", "()[I", nullptr, $PUBLIC, $virtualMethod(XSEmptyCM, startContentModel, $ints*)},
	{"whatCanGoHere", "([I)Ljava/util/List;", "([I)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(XSEmptyCM, whatCanGoHere, $List*, $ints*)},
	{}
};

$ClassInfo _XSEmptyCM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSEmptyCM",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator",
	_XSEmptyCM_FieldInfo_,
	_XSEmptyCM_MethodInfo_
};

$Object* allocate$XSEmptyCM($Class* clazz) {
	return $of($alloc(XSEmptyCM));
}

$List* XSEmptyCM::EMPTY = nullptr;

void XSEmptyCM::init$() {
}

$ints* XSEmptyCM::startContentModel() {
	return ($new($ints, {(int32_t)XSEmptyCM::STATE_START}));
}

$Object* XSEmptyCM::oneTransition($QName* elementName, $ints* currentState, $SubstitutionGroupHandler* subGroupHandler) {
	if ($nc(currentState)->get(0) < 0) {
		currentState->set(0, $XSCMValidator::SUBSEQUENT_ERROR);
		return $of(nullptr);
	}
	$nc(currentState)->set(0, $XSCMValidator::FIRST_ERROR);
	return $of(nullptr);
}

bool XSEmptyCM::endContentModel($ints* currentState) {
	bool isFinal = false;
	int32_t state = $nc(currentState)->get(0);
	if (state < 0) {
		return false;
	}
	return true;
}

bool XSEmptyCM::checkUniqueParticleAttribution($SubstitutionGroupHandler* subGroupHandler) {
	return false;
}

$List* XSEmptyCM::whatCanGoHere($ints* state) {
	return XSEmptyCM::EMPTY;
}

$List* XSEmptyCM::checkMinMaxBounds() {
	return nullptr;
}

$ints* XSEmptyCM::occurenceInfo($ints* state) {
	return nullptr;
}

$String* XSEmptyCM::getTermName(int32_t termId) {
	return nullptr;
}

bool XSEmptyCM::isCompactedForUPA() {
	return false;
}

void clinit$XSEmptyCM($Class* class$) {
	$assignStatic(XSEmptyCM::EMPTY, $new($ArrayList, 0));
}

XSEmptyCM::XSEmptyCM() {
}

$Class* XSEmptyCM::load$($String* name, bool initialize) {
	$loadClass(XSEmptyCM, name, initialize, &_XSEmptyCM_ClassInfo_, clinit$XSEmptyCM, allocate$XSEmptyCM);
	return class$;
}

$Class* XSEmptyCM::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com