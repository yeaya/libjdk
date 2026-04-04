#include <sun/security/krb5/internal/util/KrbDataInputStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/nio/ByteOrder.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace util {

void KrbDataInputStream::setNativeByteOrder() {
	$init($ByteOrder);
	if ($$nc($ByteOrder::nativeOrder())->equals($ByteOrder::BIG_ENDIAN)) {
		this->bigEndian = true;
	} else {
		this->bigEndian = false;
	}
}

void KrbDataInputStream::init$($InputStream* is) {
	$BufferedInputStream::init$(is);
	this->bigEndian = true;
}

int32_t KrbDataInputStream::readLength4() {
	int32_t len = read(4);
	if (len < 0) {
		$throwNew($IOException, "Invalid encoding"_s);
	}
	return len;
}

int32_t KrbDataInputStream::read(int32_t num) {
	$var($bytes, bytes, $new($bytes, num));
	if (read(bytes, 0, num) != num) {
		$throwNew($IOException, "Premature end of stream reached"_s);
	}
	int32_t result = 0;
	for (int32_t i = 0; i < num; ++i) {
		if (this->bigEndian) {
			result |= $sl(bytes->get(i) & 0xff, (num - i - 1) * 8);
		} else {
			result |= $sl(bytes->get(i) & 0xff, i * 8);
		}
	}
	return result;
}

int32_t KrbDataInputStream::readVersion() {
	int32_t result = (read() & 0xff) << 8;
	return result | (read() & 0xff);
}

KrbDataInputStream::KrbDataInputStream() {
}

$Class* KrbDataInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bigEndian", "Z", nullptr, $PRIVATE, $field(KrbDataInputStream, bigEndian)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(KrbDataInputStream, init$, void, $InputStream*)},
		{"read", "(I)I", nullptr, $PUBLIC, $virtualMethod(KrbDataInputStream, read, int32_t, int32_t), "java.io.IOException"},
		{"readLength4", "()I", nullptr, $PUBLIC | $FINAL, $method(KrbDataInputStream, readLength4, int32_t), "java.io.IOException"},
		{"readVersion", "()I", nullptr, $PUBLIC, $virtualMethod(KrbDataInputStream, readVersion, int32_t), "java.io.IOException"},
		{"setNativeByteOrder", "()V", nullptr, $PUBLIC, $virtualMethod(KrbDataInputStream, setNativeByteOrder, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.util.KrbDataInputStream",
		"java.io.BufferedInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbDataInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbDataInputStream);
	});
	return class$;
}

$Class* KrbDataInputStream::class$ = nullptr;

				} // util
			} // internal
		} // krb5
	} // security
} // sun