#include <sun/security/krb5/internal/LocalSeqNumber.h>
#include <sun/security/krb5/Confounder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Confounder = ::sun::security::krb5::Confounder;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void LocalSeqNumber::init$() {
	randInit();
}

void LocalSeqNumber::init$(int32_t start) {
	init(start);
}

void LocalSeqNumber::init$($Integer* start) {
	init($nc(start)->intValue());
}

void LocalSeqNumber::randInit() {
	$synchronized(this) {
		$var($bytes, data, $Confounder::bytes(4));
		$nc(data)->set(0, (int8_t)($nc(data)->get(0) & 0x3f));
		int32_t result = ((((data->get(3) & 0xff) | ((data->get(2) & 0xff) << 8)) | ((data->get(1) & 0xff) << 16)) | ((data->get(0) & 0xff) << 24));
		if (result == 0) {
			result = 1;
		}
		this->lastSeqNumber = result;
	}
}

void LocalSeqNumber::init(int32_t start) {
	$synchronized(this) {
		this->lastSeqNumber = start;
	}
}

int32_t LocalSeqNumber::current() {
	$synchronized(this) {
		return this->lastSeqNumber;
	}
}

int32_t LocalSeqNumber::next() {
	$synchronized(this) {
		return this->lastSeqNumber + 1;
	}
}

int32_t LocalSeqNumber::step() {
	$synchronized(this) {
		return ++this->lastSeqNumber;
	}
}

LocalSeqNumber::LocalSeqNumber() {
}

$Class* LocalSeqNumber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastSeqNumber", "I", nullptr, $PRIVATE, $field(LocalSeqNumber, lastSeqNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocalSeqNumber, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(LocalSeqNumber, init$, void, int32_t)},
		{"<init>", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, $method(LocalSeqNumber, init$, void, $Integer*)},
		{"current", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LocalSeqNumber, current, int32_t)},
		{"init", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LocalSeqNumber, init, void, int32_t)},
		{"next", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LocalSeqNumber, next, int32_t)},
		{"randInit", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LocalSeqNumber, randInit, void)},
		{"step", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LocalSeqNumber, step, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.LocalSeqNumber",
		"java.lang.Object",
		"sun.security.krb5.internal.SeqNumber",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocalSeqNumber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalSeqNumber);
	});
	return class$;
}

$Class* LocalSeqNumber::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun