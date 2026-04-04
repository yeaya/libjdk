#include <com/sun/org/apache/xml/internal/security/utils/SignerOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

#undef LOG

using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$Logger* SignerOutputStream::LOG = nullptr;

void SignerOutputStream::init$($SignatureAlgorithm* sa) {
	$ByteArrayOutputStream::init$();
	$set(this, sa, sa);
}

void SignerOutputStream::write($bytes* arg0) {
	try {
		$nc(this->sa)->update(arg0);
	} catch ($XMLSignatureException& e) {
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void SignerOutputStream::write(int32_t arg0) {
	try {
		$nc(this->sa)->update((int8_t)arg0);
	} catch ($XMLSignatureException& e) {
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void SignerOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$useLocalObjectStack();
	if ($nc(SignerOutputStream::LOG)->isDebugEnabled()) {
		SignerOutputStream::LOG->debug("Canonicalized SignedInfo:"_s);
		$var($StringBuilder, sb, $new($StringBuilder, arg2));
		for (int32_t i = arg1; i < (arg1 + arg2); ++i) {
			sb->append((char16_t)$nc(arg0)->get(i));
		}
		SignerOutputStream::LOG->debug($(sb->toString()));
	}
	try {
		$nc(this->sa)->update(arg0, arg1, arg2);
	} catch ($XMLSignatureException& e) {
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void SignerOutputStream::clinit$($Class* clazz) {
	$assignStatic(SignerOutputStream::LOG, $LoggerFactory::getLogger(SignerOutputStream::class$));
}

SignerOutputStream::SignerOutputStream() {
}

$Class* SignerOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignerOutputStream, LOG)},
		{"sa", "Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;", nullptr, $FINAL, $field(SignerOutputStream, sa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;)V", nullptr, $PUBLIC, $method(SignerOutputStream, init$, void, $SignatureAlgorithm*)},
		{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(SignerOutputStream, write, void, $bytes*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SignerOutputStream, write, void, int32_t)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(SignerOutputStream, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.SignerOutputStream",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignerOutputStream, name, initialize, &classInfo$$, SignerOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SignerOutputStream));
	});
	return class$;
}

$Class* SignerOutputStream::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com