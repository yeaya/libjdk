#include <com/sun/jndi/toolkit/url/UrlUtil.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URLDecoder = ::java::net::URLDecoder;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

$MethodInfo _UrlUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(UrlUtil, init$, void)},
	{"decode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UrlUtil, decode, $String*, $String*), "java.net.MalformedURLException"},
	{"decode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UrlUtil, decode, $String*, $String*, $String*), "java.net.MalformedURLException,java.io.UnsupportedEncodingException"},
	{"encode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UrlUtil, encode, $String*, $String*, $String*), "java.io.UnsupportedEncodingException"},
	{}
};

$ClassInfo _UrlUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.url.UrlUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UrlUtil_MethodInfo_
};

$Object* allocate$UrlUtil($Class* clazz) {
	return $of($alloc(UrlUtil));
}

void UrlUtil::init$() {
}

$String* UrlUtil::decode($String* s) {
	try {
		return decode(s, "8859_1"_s);
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($MalformedURLException, "ISO-Latin-1 decoder unavailable"_s);
	}
	$shouldNotReachHere();
}

$String* UrlUtil::decode($String* s, $String* enc) {
	$useLocalCurrentObjectStackCache();
	try {
		return $URLDecoder::decode(s, enc);
	} catch ($IllegalArgumentException& iae) {
		$var($MalformedURLException, mue, $new($MalformedURLException, $$str({"Invalid URI encoding: "_s, s})));
		mue->initCause(iae);
		$throw(mue);
	}
	$shouldNotReachHere();
}

$String* UrlUtil::encode($String* s, $String* enc) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, $nc(s)->getBytes(enc));
	int32_t count = bytes->length;
	$var($String, allowed, "=,+;.\'-@&/$_()!~*:"_s);
	$var($chars, buf, $new($chars, 3 * count));
	int32_t j = 0;
	for (int32_t i = 0; i < count; ++i) {
		if ((bytes->get(i) >= 97 && bytes->get(i) <= 122) || (bytes->get(i) >= 65 && bytes->get(i) <= 90) || (bytes->get(i) >= 48 && bytes->get(i) <= 57) || (allowed->indexOf((int32_t)bytes->get(i)) >= 0)) {
			buf->set(j++, (char16_t)bytes->get(i));
		} else {
			buf->set(j++, u'%');
			buf->set(j++, $Character::forDigit((int32_t)(15 & (uint32_t)((int32_t)((uint32_t)bytes->get(i) >> 4))), 16));
			buf->set(j++, $Character::forDigit((int32_t)(15 & (uint32_t)(int32_t)bytes->get(i)), 16));
		}
	}
	return $new($String, buf, 0, j);
}

UrlUtil::UrlUtil() {
}

$Class* UrlUtil::load$($String* name, bool initialize) {
	$loadClass(UrlUtil, name, initialize, &_UrlUtil_ClassInfo_, allocate$UrlUtil);
	return class$;
}

$Class* UrlUtil::class$ = nullptr;

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com