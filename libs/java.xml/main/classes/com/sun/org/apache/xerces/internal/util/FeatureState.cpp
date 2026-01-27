#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>

#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <jcpp.h>

#undef NOT_ALLOWED
#undef NOT_RECOGNIZED
#undef NOT_SUPPORTED
#undef RECOGNIZED
#undef SET
#undef SET_DISABLED
#undef SET_ENABLED
#undef UNKNOWN

using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _FeatureState_FieldInfo_[] = {
	{"status", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $FINAL, $field(FeatureState, status)},
	{"state", "Z", nullptr, $PUBLIC | $FINAL, $field(FeatureState, state)},
	{"SET_ENABLED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, SET_ENABLED)},
	{"SET_DISABLED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, SET_DISABLED)},
	{"UNKNOWN", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, UNKNOWN)},
	{"RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, RECOGNIZED)},
	{"NOT_SUPPORTED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, NOT_SUPPORTED)},
	{"NOT_RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, NOT_RECOGNIZED)},
	{"NOT_ALLOWED", "Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FeatureState, NOT_ALLOWED)},
	{}
};

$MethodInfo _FeatureState_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/Status;Z)V", nullptr, $PUBLIC, $method(FeatureState, init$, void, $Status*, bool)},
	{"is", "(Z)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC, $staticMethod(FeatureState, is, FeatureState*, bool)},
	{"isExceptional", "()Z", nullptr, $PUBLIC, $virtualMethod(FeatureState, isExceptional, bool)},
	{"of", "(Lcom/sun/org/apache/xerces/internal/util/Status;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $STATIC, $staticMethod(FeatureState, of, FeatureState*, $Status*)},
	{}
};

$ClassInfo _FeatureState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.FeatureState",
	"java.lang.Object",
	nullptr,
	_FeatureState_FieldInfo_,
	_FeatureState_MethodInfo_
};

$Object* allocate$FeatureState($Class* clazz) {
	return $of($alloc(FeatureState));
}

FeatureState* FeatureState::SET_ENABLED = nullptr;
FeatureState* FeatureState::SET_DISABLED = nullptr;
FeatureState* FeatureState::UNKNOWN = nullptr;
FeatureState* FeatureState::RECOGNIZED = nullptr;
FeatureState* FeatureState::NOT_SUPPORTED = nullptr;
FeatureState* FeatureState::NOT_RECOGNIZED = nullptr;
FeatureState* FeatureState::NOT_ALLOWED = nullptr;

void FeatureState::init$($Status* status, bool state) {
	$set(this, status, status);
	this->state = state;
}

FeatureState* FeatureState::of($Status* status) {
	$init(FeatureState);
	return $new(FeatureState, status, false);
}

FeatureState* FeatureState::is(bool value) {
	$init(FeatureState);
	$init($Status);
	return $new(FeatureState, $Status::SET, value);
}

bool FeatureState::isExceptional() {
	return this->status->isExceptional();
}

void clinit$FeatureState($Class* class$) {
	$init($Status);
	$assignStatic(FeatureState::SET_ENABLED, $new(FeatureState, $Status::SET, true));
	$assignStatic(FeatureState::SET_DISABLED, $new(FeatureState, $Status::SET, false));
	$assignStatic(FeatureState::UNKNOWN, $new(FeatureState, $Status::UNKNOWN, false));
	$assignStatic(FeatureState::RECOGNIZED, $new(FeatureState, $Status::RECOGNIZED, false));
	$assignStatic(FeatureState::NOT_SUPPORTED, $new(FeatureState, $Status::NOT_SUPPORTED, false));
	$assignStatic(FeatureState::NOT_RECOGNIZED, $new(FeatureState, $Status::NOT_RECOGNIZED, false));
	$assignStatic(FeatureState::NOT_ALLOWED, $new(FeatureState, $Status::NOT_ALLOWED, false));
}

FeatureState::FeatureState() {
}

$Class* FeatureState::load$($String* name, bool initialize) {
	$loadClass(FeatureState, name, initialize, &_FeatureState_ClassInfo_, clinit$FeatureState, allocate$FeatureState);
	return class$;
}

$Class* FeatureState::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com