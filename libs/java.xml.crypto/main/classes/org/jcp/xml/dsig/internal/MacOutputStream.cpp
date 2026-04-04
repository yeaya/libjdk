#include <org/jcp/xml/dsig/internal/MacOutputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <javax/crypto/Mac.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mac = ::javax::crypto::Mac;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

void MacOutputStream::init$($Mac* mac) {
	$ByteArrayOutputStream::init$();
	$set(this, mac, mac);
}

void MacOutputStream::write(int32_t arg0) {
	$ByteArrayOutputStream::write(arg0);
	$nc(this->mac)->update((int8_t)arg0);
}

void MacOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$ByteArrayOutputStream::write(arg0, arg1, arg2);
	$nc(this->mac)->update(arg0, arg1, arg2);
}

MacOutputStream::MacOutputStream() {
}

$Class* MacOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mac", "Ljavax/crypto/Mac;", nullptr, $PRIVATE | $FINAL, $field(MacOutputStream, mac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/Mac;)V", nullptr, $PUBLIC, $method(MacOutputStream, init$, void, $Mac*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(MacOutputStream, write, void, int32_t)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(MacOutputStream, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.MacOutputStream",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MacOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MacOutputStream));
	});
	return class$;
}

$Class* MacOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org