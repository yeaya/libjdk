#include <javax/xml/catalog/Normalizer.h>

#include <java/io/IOException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/CharSequence.h>
#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Util.h>
#include <jcpp.h>

#undef ERR_OTHER
#undef URN

using $IOException = ::java::io::IOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

$MethodInfo _Normalizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Normalizer, init$, void)},
	{"decodeURN", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Normalizer, decodeURN, $String*, $String*)},
	{"encodeURN", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Normalizer, encodeURN, $String*, $String*)},
	{"normalizePublicId", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Normalizer, normalizePublicId, $String*, $String*)},
	{"normalizeURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Normalizer, normalizeURI, $String*, $String*)},
	{}
};

$ClassInfo _Normalizer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.Normalizer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Normalizer_MethodInfo_
};

$Object* allocate$Normalizer($Class* clazz) {
	return $of($alloc(Normalizer));
}

void Normalizer::init$() {
}

$String* Normalizer::normalizePublicId($String* publicId) {
	$useLocalCurrentObjectStackCache();
	if (publicId == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, sb, $new($StringBuilder, $nc(publicId)->length()));
	char16_t last = u'a';
	{
		$var($chars, arr$, $nc(publicId)->toCharArray());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				if ((c == u' ') && (sb->length() == 0 || last == u' ')) {
					continue;
				}
				if (c == u'\t' || c == u'\r' || c == u'\n') {
					if (last != u' ') {
						sb->append(u' ');
						last = u' ';
					}
				} else {
					sb->append(c);
					last = c;
				}
			}
		}
	}
	if (last == u' ') {
		sb->deleteCharAt(sb->length() - 1);
	}
	return sb->toString();
}

$String* Normalizer::encodeURN($String* publicId) {
	$var($String, urn, normalizePublicId(publicId));
	try {
		$assign(urn, $URLEncoder::encode(urn, "UTF-8"_s));
		$assign(urn, $nc(urn)->replace(static_cast<$CharSequence*>("::"_s), static_cast<$CharSequence*>(";"_s)));
		$assign(urn, urn->replace(static_cast<$CharSequence*>("//"_s), static_cast<$CharSequence*>(":"_s)));
	} catch ($UnsupportedEncodingException& ex) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_OTHER, static_cast<$Throwable*>(ex));
	}
	$init($Util);
	return $str({$Util::URN, urn});
}

$String* Normalizer::decodeURN($String* urn) {
	$var($String, publicId, nullptr);
	$init($Util);
	if (urn != nullptr && urn->startsWith($Util::URN)) {
		$assign(publicId, urn->substring(13));
	} else {
		return urn;
	}
	try {
		$assign(publicId, $nc(publicId)->replace(static_cast<$CharSequence*>(":"_s), static_cast<$CharSequence*>("//"_s)));
		$assign(publicId, publicId->replace(static_cast<$CharSequence*>(";"_s), static_cast<$CharSequence*>("::"_s)));
		$assign(publicId, $URLDecoder::decode(publicId, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& ex) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_OTHER, static_cast<$Throwable*>(ex));
	}
	return publicId;
}

$String* Normalizer::normalizeURI($String* uriref$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uriref, uriref$renamed);
	if (uriref == nullptr) {
		return nullptr;
	}
	$var($bytes, bytes, nullptr);
	$assign(uriref, $nc(uriref)->trim());
	try {
		$assign(bytes, uriref->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& uee) {
		return uriref;
	}
	$var($StringBuilder, newRef, $new($StringBuilder, $nc(bytes)->length));
	for (int32_t count = 0; count < $nc(bytes)->length; ++count) {
		int32_t ch = (int32_t)(bytes->get(count) & (uint32_t)255);
		if ((ch <= 32) || (ch > 127) || (ch == 34) || (ch == 60) || (ch == 62) || (ch == 92) || (ch == 94) || (ch == 96) || (ch == 123) || (ch == 124) || (ch == 125) || (ch == 127)) {
			newRef->append("%"_s)->append($($String::format("%02X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(ch)))}))));
		} else {
			newRef->append((char16_t)bytes->get(count));
		}
	}
	return $nc($(newRef->toString()))->trim();
}

Normalizer::Normalizer() {
}

$Class* Normalizer::load$($String* name, bool initialize) {
	$loadClass(Normalizer, name, initialize, &_Normalizer_ClassInfo_, allocate$Normalizer);
	return class$;
}

$Class* Normalizer::class$ = nullptr;

		} // catalog
	} // xml
} // javax