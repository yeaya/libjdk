#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>

#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <jcpp.h>

#undef NOT_ALLOWED
#undef NOT_RECOGNIZED
#undef NOT_SUPPORTED
#undef RECOGNIZED
#undef SET
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

$FieldInfo _PropertyState_FieldInfo_[] = {
	{"status", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $FINAL, $field(PropertyState, status)},
	{"state", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(PropertyState, state)},
	{"UNKNOWN", "Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyState, UNKNOWN)},
	{"RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyState, RECOGNIZED)},
	{"NOT_SUPPORTED", "Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyState, NOT_SUPPORTED)},
	{"NOT_RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyState, NOT_RECOGNIZED)},
	{"NOT_ALLOWED", "Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyState, NOT_ALLOWED)},
	{}
};

$MethodInfo _PropertyState_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/Status;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PropertyState, init$, void, $Status*, Object$*)},
	{"is", "(Ljava/lang/Object;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyState, is, PropertyState*, Object$*)},
	{"isExceptional", "()Z", nullptr, $PUBLIC, $virtualMethod(PropertyState, isExceptional, bool)},
	{"of", "(Lcom/sun/org/apache/xerces/internal/util/Status;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyState, of, PropertyState*, $Status*)},
	{}
};

$ClassInfo _PropertyState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.PropertyState",
	"java.lang.Object",
	nullptr,
	_PropertyState_FieldInfo_,
	_PropertyState_MethodInfo_
};

$Object* allocate$PropertyState($Class* clazz) {
	return $of($alloc(PropertyState));
}

PropertyState* PropertyState::UNKNOWN = nullptr;
PropertyState* PropertyState::RECOGNIZED = nullptr;
PropertyState* PropertyState::NOT_SUPPORTED = nullptr;
PropertyState* PropertyState::NOT_RECOGNIZED = nullptr;
PropertyState* PropertyState::NOT_ALLOWED = nullptr;

void PropertyState::init$($Status* status, Object$* state) {
	$set(this, status, status);
	$set(this, state, state);
}

PropertyState* PropertyState::of($Status* status) {
	$init(PropertyState);
	return $new(PropertyState, status, nullptr);
}

PropertyState* PropertyState::is(Object$* value) {
	$init(PropertyState);
	$init($Status);
	return $new(PropertyState, $Status::SET, value);
}

bool PropertyState::isExceptional() {
	return this->status->isExceptional();
}

void clinit$PropertyState($Class* class$) {
	$init($Status);
	$assignStatic(PropertyState::UNKNOWN, $new(PropertyState, $Status::UNKNOWN, nullptr));
	$assignStatic(PropertyState::RECOGNIZED, $new(PropertyState, $Status::RECOGNIZED, nullptr));
	$assignStatic(PropertyState::NOT_SUPPORTED, $new(PropertyState, $Status::NOT_SUPPORTED, nullptr));
	$assignStatic(PropertyState::NOT_RECOGNIZED, $new(PropertyState, $Status::NOT_RECOGNIZED, nullptr));
	$assignStatic(PropertyState::NOT_ALLOWED, $new(PropertyState, $Status::NOT_ALLOWED, nullptr));
}

PropertyState::PropertyState() {
}

$Class* PropertyState::load$($String* name, bool initialize) {
	$loadClass(PropertyState, name, initialize, &_PropertyState_ClassInfo_, clinit$PropertyState, allocate$PropertyState);
	return class$;
}

$Class* PropertyState::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com