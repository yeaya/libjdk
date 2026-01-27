#include <com/sun/org/apache/xml/internal/utils/LocaleUtility.h>

#include <java/util/Locale.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef IETF_SEPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _LocaleUtility_FieldInfo_[] = {
	{"IETF_SEPARATOR", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LocaleUtility, IETF_SEPARATOR)},
	{"EMPTY_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LocaleUtility, EMPTY_STRING)},
	{}
};

$MethodInfo _LocaleUtility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleUtility, init$, void)},
	{"langToLocale", "(Ljava/lang/String;)Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleUtility, langToLocale, $Locale*, $String*)},
	{}
};

$ClassInfo _LocaleUtility_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.LocaleUtility",
	"java.lang.Object",
	nullptr,
	_LocaleUtility_FieldInfo_,
	_LocaleUtility_MethodInfo_
};

$Object* allocate$LocaleUtility($Class* clazz) {
	return $of($alloc(LocaleUtility));
}

$String* LocaleUtility::EMPTY_STRING = nullptr;

void LocaleUtility::init$() {
}

$Locale* LocaleUtility::langToLocale($String* lang) {
	$init(LocaleUtility);
	$useLocalCurrentObjectStackCache();
	if ((lang == nullptr) || $nc(lang)->equals(LocaleUtility::EMPTY_STRING)) {
		return $Locale::getDefault();
	}
	$var($String, language, LocaleUtility::EMPTY_STRING);
	$var($String, country, LocaleUtility::EMPTY_STRING);
	$var($String, variant, LocaleUtility::EMPTY_STRING);
	int32_t i1 = $nc(lang)->indexOf((int32_t)LocaleUtility::IETF_SEPARATOR);
	if (i1 < 0) {
		$assign(language, lang);
	} else {
		$assign(language, lang->substring(0, i1));
		++i1;
		int32_t i2 = lang->indexOf((int32_t)LocaleUtility::IETF_SEPARATOR, i1);
		if (i2 < 0) {
			$assign(country, lang->substring(i1));
		} else {
			$assign(country, lang->substring(i1, i2));
			$assign(variant, lang->substring(i2 + 1));
		}
	}
	if ($nc(language)->length() == 2) {
		$assign(language, language->toLowerCase());
	} else {
		$assign(language, LocaleUtility::EMPTY_STRING);
	}
	if ($nc(country)->length() == 2) {
		$assign(country, country->toUpperCase());
	} else {
		$assign(country, LocaleUtility::EMPTY_STRING);
	}
	bool var$0 = ($nc(variant)->length() > 0);
	if (var$0) {
		bool var$1 = ($nc(language)->length() == 2);
		var$0 = (var$1 || ($nc(country)->length() == 2));
	}
	if (var$0) {
		$assign(variant, $nc(variant)->toUpperCase());
	} else {
		$assign(variant, LocaleUtility::EMPTY_STRING);
	}
	return $new($Locale, language, country, variant);
}

LocaleUtility::LocaleUtility() {
}

void clinit$LocaleUtility($Class* class$) {
	$assignStatic(LocaleUtility::EMPTY_STRING, ""_s);
}

$Class* LocaleUtility::load$($String* name, bool initialize) {
	$loadClass(LocaleUtility, name, initialize, &_LocaleUtility_ClassInfo_, clinit$LocaleUtility, allocate$LocaleUtility);
	return class$;
}

$Class* LocaleUtility::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com