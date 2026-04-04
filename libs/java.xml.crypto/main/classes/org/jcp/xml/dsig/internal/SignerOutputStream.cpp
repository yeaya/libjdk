#include <org/jcp/xml/dsig/internal/SignerOutputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

void SignerOutputStream::init$($Signature* sig) {
	$ByteArrayOutputStream::init$();
	$set(this, sig, sig);
}

void SignerOutputStream::write(int32_t arg0) {
	$ByteArrayOutputStream::write(arg0);
	try {
		$nc(this->sig)->update((int8_t)arg0);
	} catch ($SignatureException& e) {
		$throwNew($RuntimeException, e);
	}
}

void SignerOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$ByteArrayOutputStream::write(arg0, arg1, arg2);
	try {
		$nc(this->sig)->update(arg0, arg1, arg2);
	} catch ($SignatureException& e) {
		$throwNew($RuntimeException, e);
	}
}

SignerOutputStream::SignerOutputStream() {
}

$Class* SignerOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sig", "Ljava/security/Signature;", nullptr, $PRIVATE | $FINAL, $field(SignerOutputStream, sig)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Signature;)V", nullptr, $PUBLIC, $method(SignerOutputStream, init$, void, $Signature*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SignerOutputStream, write, void, int32_t)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(SignerOutputStream, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.SignerOutputStream",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignerOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SignerOutputStream));
	});
	return class$;
}

$Class* SignerOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org