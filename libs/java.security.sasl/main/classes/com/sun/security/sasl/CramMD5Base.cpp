#include <com/sun/security/sasl/CramMD5Base.h>
#include <java/lang/IllegalStateException.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <java/util/logging/Logger.h>
#include <javax/security/sasl/Sasl.h>
#include <jcpp.h>

#undef HMAC_MD5
#undef MD5_BLOCKSIZE
#undef QOP
#undef SASL_LOGGER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Arrays = ::java::util::Arrays;
using $Logger = ::java::util::logging::Logger;
using $Sasl = ::javax::security::sasl::Sasl;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$String* CramMD5Base::SASL_LOGGER_NAME = nullptr;
$Logger* CramMD5Base::logger = nullptr;

void CramMD5Base::init$() {
	this->completed = false;
	this->aborted = false;
	initLogger();
}

$String* CramMD5Base::getMechanismName() {
	return "CRAM-MD5"_s;
}

bool CramMD5Base::isComplete() {
	return this->completed;
}

$bytes* CramMD5Base::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$bytes* CramMD5Base::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$Object* CramMD5Base::getNegotiatedProperty($String* propName) {
	if (this->completed) {
		$init($Sasl);
		if ($nc(propName)->equals($Sasl::QOP)) {
			return $of("auth"_s);
		} else {
			return nullptr;
		}
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
}

void CramMD5Base::dispose() {
	clearPassword();
}

void CramMD5Base::clearPassword() {
	if (this->pw != nullptr) {
		for (int32_t i = 0; i < this->pw->length; ++i) {
			this->pw->set(i, (int8_t)0);
		}
		$set(this, pw, nullptr);
	}
}

void CramMD5Base::finalize() {
	clearPassword();
}

$String* CramMD5Base::HMAC_MD5($bytes* key$renamed, $bytes* text) {
	$init(CramMD5Base);
	$useLocalObjectStack();
	$var($bytes, key, key$renamed);
	$var($MessageDigest, md5, $MessageDigest::getInstance("MD5"_s));
	if ($nc(key)->length > CramMD5Base::MD5_BLOCKSIZE) {
		$assign(key, $nc(md5)->digest(key));
	}
	$var($bytes, ipad, $new($bytes, CramMD5Base::MD5_BLOCKSIZE));
	$var($bytes, opad, $new($bytes, CramMD5Base::MD5_BLOCKSIZE));
	$var($bytes, digest, nullptr);
	int32_t i = 0;
	for (i = 0; i < $nc(key)->length; ++i) {
		ipad->set(i, key->get(i));
		opad->set(i, key->get(i));
	}
	for (i = 0; i < CramMD5Base::MD5_BLOCKSIZE; ++i) {
		(*ipad)[i] ^= 54;
		(*opad)[i] ^= 92;
	}
	$nc(md5)->update(ipad);
	md5->update(text);
	$assign(digest, md5->digest());
	md5->update(opad);
	md5->update(digest);
	$assign(digest, md5->digest());
	$var($StringBuilder, digestString, $new($StringBuilder));
	for (i = 0; i < $nc(digest)->length; ++i) {
		if ((digest->get(i) & 0xff) < 0x10) {
			digestString->append(u'0')->append($($Integer::toHexString(digest->get(i) & 0xff)));
		} else {
			digestString->append($($Integer::toHexString(digest->get(i) & 0xff)));
		}
	}
	$Arrays::fill(ipad, (int8_t)0);
	$Arrays::fill(opad, (int8_t)0);
	$assign(ipad, nullptr);
	$assign(opad, nullptr);
	return (digestString->toString());
}

void CramMD5Base::initLogger() {
	$init(CramMD5Base);
	$synchronized(class$) {
		$beforeCallerSensitive();
		if (CramMD5Base::logger == nullptr) {
			$assignStatic(CramMD5Base::logger, $Logger::getLogger(CramMD5Base::SASL_LOGGER_NAME));
		}
	}
}

CramMD5Base::CramMD5Base() {
}

void CramMD5Base::clinit$($Class* clazz) {
	$assignStatic(CramMD5Base::SASL_LOGGER_NAME, "javax.security.sasl"_s);
}

$Class* CramMD5Base::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"completed", "Z", nullptr, $PROTECTED, $field(CramMD5Base, completed)},
		{"aborted", "Z", nullptr, $PROTECTED, $field(CramMD5Base, aborted)},
		{"pw", "[B", nullptr, $PROTECTED, $field(CramMD5Base, pw)},
		{"MD5_BLOCKSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CramMD5Base, MD5_BLOCKSIZE)},
		{"SASL_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CramMD5Base, SASL_LOGGER_NAME)},
		{"logger", "Ljava/util/logging/Logger;", nullptr, $PROTECTED | $STATIC, $staticField(CramMD5Base, logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CramMD5Base, init$, void)},
		{"HMAC_MD5", "([B[B)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticMethod(CramMD5Base, HMAC_MD5, $String*, $bytes*, $bytes*), "java.security.NoSuchAlgorithmException"},
		{"clearPassword", "()V", nullptr, $PROTECTED, $virtualMethod(CramMD5Base, clearPassword, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, dispose, void), "javax.security.sasl.SaslException"},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(CramMD5Base, finalize, void)},
		{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, getMechanismName, $String*)},
		{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, getNegotiatedProperty, $Object*, $String*)},
		{"initLogger", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(CramMD5Base, initLogger, void)},
		{"isComplete", "()Z", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, isComplete, bool)},
		{"unwrap", "([BII)[B", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, unwrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
		{"wrap", "([BII)[B", nullptr, $PUBLIC, $virtualMethod(CramMD5Base, wrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.security.sasl.CramMD5Base",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CramMD5Base, name, initialize, &classInfo$$, CramMD5Base::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CramMD5Base);
	});
	return class$;
}

$Class* CramMD5Base::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com