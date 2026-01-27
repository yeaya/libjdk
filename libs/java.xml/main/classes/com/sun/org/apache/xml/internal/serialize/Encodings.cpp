#include <com/sun/org/apache/xml/internal/serialize/Encodings.h>

#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>
#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef DEFAULT_ENCODING
#undef DEFAULT_LAST_PRINTABLE
#undef ENGLISH
#undef JIS_DANGER_CHARS
#undef LAST_PRINTABLE_UNICODE
#undef UNICODE_ENCODINGS

using $EncodingMap = ::com::sun::org::apache::xerces::internal::util::EncodingMap;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serialize::EncodingInfo;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _Encodings_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Encodings_FieldInfo_[] = {
	{"DEFAULT_LAST_PRINTABLE", "I", nullptr, $STATIC | $FINAL, $constField(Encodings, DEFAULT_LAST_PRINTABLE)},
	{"LAST_PRINTABLE_UNICODE", "I", nullptr, $STATIC | $FINAL, $constField(Encodings, LAST_PRINTABLE_UNICODE)},
	{"UNICODE_ENCODINGS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Encodings, UNICODE_ENCODINGS)},
	{"DEFAULT_ENCODING", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Encodings, DEFAULT_ENCODING)},
	{"_encodings", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Encodings, _encodings)},
	{"JIS_DANGER_CHARS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Encodings, JIS_DANGER_CHARS)},
	{}
};

$MethodInfo _Encodings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Encodings, init$, void)},
	{"getEncodingInfo", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;", nullptr, $STATIC, $staticMethod(Encodings, getEncodingInfo, $EncodingInfo*, $String*, bool), "java.io.UnsupportedEncodingException"},
	{}
};

$ClassInfo _Encodings_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.Encodings",
	"java.lang.Object",
	nullptr,
	_Encodings_FieldInfo_,
	_Encodings_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Encodings_Annotations_
};

$Object* allocate$Encodings($Class* clazz) {
	return $of($alloc(Encodings));
}

$StringArray* Encodings::UNICODE_ENCODINGS = nullptr;
$String* Encodings::DEFAULT_ENCODING = nullptr;
$Map* Encodings::_encodings = nullptr;
$String* Encodings::JIS_DANGER_CHARS = nullptr;

void Encodings::init$() {
}

$EncodingInfo* Encodings::getEncodingInfo($String* encoding$renamed, bool allowJavaNames) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	$var($EncodingInfo, eInfo, nullptr);
	if (encoding == nullptr) {
		if (($assign(eInfo, $cast($EncodingInfo, $nc(Encodings::_encodings)->get(Encodings::DEFAULT_ENCODING)))) != nullptr) {
			return eInfo;
		}
		$assign(eInfo, $new($EncodingInfo, $($EncodingMap::getJava2IANAMapping(Encodings::DEFAULT_ENCODING)), Encodings::DEFAULT_ENCODING, Encodings::LAST_PRINTABLE_UNICODE));
		$nc(Encodings::_encodings)->put(Encodings::DEFAULT_ENCODING, eInfo);
		return eInfo;
	}
	$init($Locale);
	$assign(encoding, $nc(encoding)->toUpperCase($Locale::ENGLISH));
	$var($String, jName, $EncodingMap::getIANA2JavaMapping(encoding));
	if (jName == nullptr) {
		if (allowJavaNames) {
			$EncodingInfo::testJavaEncodingName(encoding);
			if (($assign(eInfo, $cast($EncodingInfo, $nc(Encodings::_encodings)->get(encoding)))) != nullptr) {
				return eInfo;
			}
			int32_t i = 0;
			for (; i < $nc(Encodings::UNICODE_ENCODINGS)->length; ++i) {
				if ($nc($nc(Encodings::UNICODE_ENCODINGS)->get(i))->equalsIgnoreCase(encoding)) {
					$assign(eInfo, $new($EncodingInfo, $($EncodingMap::getJava2IANAMapping(encoding)), encoding, Encodings::LAST_PRINTABLE_UNICODE));
					break;
				}
			}
			if (i == $nc(Encodings::UNICODE_ENCODINGS)->length) {
				$assign(eInfo, $new($EncodingInfo, $($EncodingMap::getJava2IANAMapping(encoding)), encoding, Encodings::DEFAULT_LAST_PRINTABLE));
			}
			$nc(Encodings::_encodings)->put(encoding, eInfo);
			return eInfo;
		} else {
			$throwNew($UnsupportedEncodingException, encoding);
		}
	}
	if (($assign(eInfo, $cast($EncodingInfo, $nc(Encodings::_encodings)->get(jName)))) != nullptr) {
		return eInfo;
	}
	int32_t i = 0;
	for (; i < $nc(Encodings::UNICODE_ENCODINGS)->length; ++i) {
		if ($nc($nc(Encodings::UNICODE_ENCODINGS)->get(i))->equalsIgnoreCase(jName)) {
			$assign(eInfo, $new($EncodingInfo, encoding, jName, Encodings::LAST_PRINTABLE_UNICODE));
			break;
		}
	}
	if (i == $nc(Encodings::UNICODE_ENCODINGS)->length) {
		$assign(eInfo, $new($EncodingInfo, encoding, jName, Encodings::DEFAULT_LAST_PRINTABLE));
	}
	$nc(Encodings::_encodings)->put(jName, eInfo);
	return eInfo;
}

void clinit$Encodings($Class* class$) {
	$assignStatic(Encodings::DEFAULT_ENCODING, "UTF8"_s);
	$assignStatic(Encodings::JIS_DANGER_CHARS, u"\\~\u007f¢£¥¬—―‖…‾‾∥∯〜＼～￠￡￢￣"_s);
	$assignStatic(Encodings::UNICODE_ENCODINGS, $new($StringArray, {
		"Unicode"_s,
		"UnicodeBig"_s,
		"UnicodeLittle"_s,
		"GB2312"_s,
		"UTF8"_s,
		"UTF-16"_s
	}));
	$assignStatic(Encodings::_encodings, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

Encodings::Encodings() {
}

$Class* Encodings::load$($String* name, bool initialize) {
	$loadClass(Encodings, name, initialize, &_Encodings_ClassInfo_, clinit$Encodings, allocate$Encodings);
	return class$;
}

$Class* Encodings::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com