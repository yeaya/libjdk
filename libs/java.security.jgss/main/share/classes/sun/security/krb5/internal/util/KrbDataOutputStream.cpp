#include <sun/security/krb5/internal/util/KrbDataOutputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace util {

void KrbDataOutputStream::init$($OutputStream* os) {
	$BufferedOutputStream::init$(os);
}

void KrbDataOutputStream::write32(int32_t num) {
	$var($bytes, bytes, $new($bytes, 4));
	bytes->set(0, (int8_t)(((num & (int32_t)0xff000000) >> 0x18) & 0xff));
	bytes->set(1, (int8_t)(((num & 0x00ff0000) >> 0x10) & 0xff));
	bytes->set(2, (int8_t)(((num & 0xff00) >> 8) & 0xff));
	bytes->set(3, (int8_t)(num & 0xff));
	write(bytes, 0, 4);
}

void KrbDataOutputStream::write16(int32_t num) {
	$var($bytes, bytes, $new($bytes, 2));
	bytes->set(0, (int8_t)(((num & 0xff00) >> 8) & 0xff));
	bytes->set(1, (int8_t)(num & 0xff));
	write(bytes, 0, 2);
}

void KrbDataOutputStream::write8(int32_t num) {
	write(num & 0xff);
}

KrbDataOutputStream::KrbDataOutputStream() {
}

$Class* KrbDataOutputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(KrbDataOutputStream, init$, void, $OutputStream*)},
		{"write16", "(I)V", nullptr, $PUBLIC, $virtualMethod(KrbDataOutputStream, write16, void, int32_t), "java.io.IOException"},
		{"write32", "(I)V", nullptr, $PUBLIC, $virtualMethod(KrbDataOutputStream, write32, void, int32_t), "java.io.IOException"},
		{"write8", "(I)V", nullptr, $PUBLIC, $virtualMethod(KrbDataOutputStream, write8, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.util.KrbDataOutputStream",
		"java.io.BufferedOutputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KrbDataOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KrbDataOutputStream));
	});
	return class$;
}

$Class* KrbDataOutputStream::class$ = nullptr;

				} // util
			} // internal
		} // krb5
	} // security
} // sun