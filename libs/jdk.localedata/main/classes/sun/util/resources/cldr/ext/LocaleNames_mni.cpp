#include <sun/util/resources/cldr/ext/LocaleNames_mni.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mni, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mni, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mni",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mni_MethodInfo_
};

$Object* allocate$LocaleNames_mni($Class* clazz) {
	return $of($alloc(LocaleNames_mni));
}

void LocaleNames_mni::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mni::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ব্রাজিল"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"চিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"জর্মনি"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ফ্রান্স"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"য়ুনাইটেদ কিংদম"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ইন্দিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ইটালি"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"জাপান"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"রুসিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"য়ুনাইটেদ ষ্টেটস"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"মশকখংদবা লমদম"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"জর্মন"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ইংলিস"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"স্পেনিস"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ফ্রেঞ্চ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ইটালিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"জাপানিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"পোর্টুগিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"রুসিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"চাইনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"মৈতৈলোন্"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"মশকখংদবা লোল"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"আরবিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"বাংলা"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"সিরিলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"লাইথোকহল্লবা"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ত্রেদিস্নেল"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"লেটিন"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"মেইটেই মায়েক"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ইদবা"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"মশকখংদবা স্ক্রিপ্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ওষ্ট্রিয়ান জর্মন"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"স্বিজ হায় জর্মন"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ওষ্ট্রেলিয়ান ইংলিস"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"কানাদিয়ান ইংলিস"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ব্রিটিশ ইংলিস"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"অমেরিকান ইংলিস"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"য়ুরোপিয়ান স্পেনিস"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"মেক্সিকান স্পেনিস"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"কানাদিয়ান ফ্রেঞ্চ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"স্বিজ ফ্রেঞ্চ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ব্রাজিলিয়ান পোর্টুগিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"য়ুরোপিয়ান পোর্টুগিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"লেটিন অমেরিকান স্পেনিস"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"সিমপ্লিফাইদ চাইনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ত্রেদিস্নেল চাইনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"বাংলা দিজিট"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ৱেস্তর্ন দিজিট"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ষ্টেন্দর্দ সোর্ট ওর্দর"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"গ্রিগোরিয়ান কেলেন্দর"_s)
		})
	}));
	return data;
}

LocaleNames_mni::LocaleNames_mni() {
}

$Class* LocaleNames_mni::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mni, name, initialize, &_LocaleNames_mni_ClassInfo_, allocate$LocaleNames_mni);
	return class$;
}

$Class* LocaleNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun