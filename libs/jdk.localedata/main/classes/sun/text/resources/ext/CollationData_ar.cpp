#include <sun/text/resources/ext/CollationData_ar.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_ar",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_ar_MethodInfo_
};

$Object* allocate$CollationData_ar($Class* clazz) {
	return $of($alloc(CollationData_ar));
}

void CollationData_ar::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_ar::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& ͡ = ـ= ً= ٌ= ٍ= َ= ُ= ِ= ْ= ٭= ۖ= ۗ= ۘ= ۙ= ۚ= ۛ= ۜ= \u06dd= ۞= ۟= ۠= ۡ= ۢ= ۣ= ۤ= ۥ= ۦ= ۧ= ۨ= ۩= ۪= ۫= ۬= ۭ& 0 < ٠ < ۰& 1 < ١ < ۱& 2 < ٢ < ۲& 3 < ٣ < ۳& 4 < ٤ < ۴& 5 < ٥ < ۵& 6 < ٦ < ۶& 7 < ٧ < ۷& 8 < ٨ < ۸& 9 < ٩ < ۹& µ < ،< ؛< ؟< ٪< ٫< ٬< ۔&  Z <  ء; آ; أ; ؤ; إ; ئ< ا< ب< پ< ة= ت< ث< ج< چ< ح< خ< د< ذ< ر< ز< ژ< س< ش< ص< ض< ط< ظ< ع< غ< ف< ق< ك< گ< ل< م< ن< ه< و< ى; ي< ٰ< ٱ< ٲ< ٳ< ٴ< ٵ< ٶ< ٷ< ٸ< ٹ< ٺ< ٻ< ټ< ٽ< ٿ< ڀ< ځ< ڂ< ڃ< ڄ< څ< ڇ< ڈ< ډ< ڊ< ڋ< ڌ< ڍ< ڎ< ڏ< ڐ< ڑ< ڒ< ړ< ڔ< ڕ< ږ< ڗ< ڙ< ښ< ڛ< ڜ< ڝ< ڞ< ڟ< ڠ< ڡ< ڢ< ڣ< ڤ< ڥ< ڦ< ڧ< ڨ< ک< ڪ< ګ< ڬ< ڭ< ڮ< ڰ< ڱ< ڲ< ڳ< ڴ< ڵ< ڶ< ڷ< ں< ڻ< ڼ< ڽ< ھ< ۀ< ہ< ۂ< ۃ< ۄ< ۅ< ۆ< ۇ< ۈ< ۉ< ۊ< ۋ< ی< ۍ< ێ< ې< ۑ< ے< ۓ< ە< ّ"_s)
	})});
}

CollationData_ar::CollationData_ar() {
}

$Class* CollationData_ar::load$($String* name, bool initialize) {
	$loadClass(CollationData_ar, name, initialize, &_CollationData_ar_ClassInfo_, allocate$CollationData_ar);
	return class$;
}

$Class* CollationData_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun