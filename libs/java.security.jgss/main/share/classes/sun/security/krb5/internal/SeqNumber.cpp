#include <sun/security/krb5/internal/SeqNumber.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

$MethodInfo _SeqNumber_MethodInfo_[] = {
	{"current", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeqNumber, current, int32_t)},
	{"init", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeqNumber, init, void, int32_t)},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeqNumber, next, int32_t)},
	{"randInit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeqNumber, randInit, void)},
	{"step", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeqNumber, step, int32_t)},
	{}
};

$ClassInfo _SeqNumber_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.krb5.internal.SeqNumber",
	nullptr,
	nullptr,
	nullptr,
	_SeqNumber_MethodInfo_
};

$Object* allocate$SeqNumber($Class* clazz) {
	return $of($alloc(SeqNumber));
}

$Class* SeqNumber::load$($String* name, bool initialize) {
	$loadClass(SeqNumber, name, initialize, &_SeqNumber_ClassInfo_, allocate$SeqNumber);
	return class$;
}

$Class* SeqNumber::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun