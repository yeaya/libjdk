#include <sun/text/resources/ext/CollationData_he.h>

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

$MethodInfo _CollationData_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_he",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_he_MethodInfo_
};

$Object* allocate$CollationData_he($Class* clazz) {
	return $of($alloc(CollationData_he));
}

void CollationData_he::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_he::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& ͡ = ׄ & ̍ = ֑ ; ֒ ; ֓ ; ֔ ; ֕ ; ֖ ; ֗ ; ֘ ; ֙ & ́ = ֚ & ̀ = ֛ & ̇ = ֜ ; ֝ & ̂ = ֞ & ̈ = ֟ & ̌ = ֠ & ̆ = ֡ & ̄ = ֣ ; ֤ & ̃ = ֥ & ̊ = ֦ & ̨ = ֧ & ̧ = ֨ & ̋ = ֩ & ̶ = ֪ & ̷ = ֫ & ̸ = ֬ ; ֭ ; ֮ ; ֯ ; ְ ; ֱ ; ֲ ; ֳ ; ִ ; ֵ ; ֶ ; ַ ; ָ ; ֹ ; ֻ ; ּ ; ֽ ; ֿ ; ׀ ; ׁ ; ׂ & µ < ־ < ׃ < ׳ < ״ & Z < א < ב < ג < ד < ה < ו < װ < ױ < ז < ח < ט < י < ײ < ך , כ < ל < ם , מ < ן , נ < ס < ע < ף , פ < ץ , צ < ק < ר < ש < ת "_s)
	})});
}

CollationData_he::CollationData_he() {
}

$Class* CollationData_he::load$($String* name, bool initialize) {
	$loadClass(CollationData_he, name, initialize, &_CollationData_he_ClassInfo_, allocate$CollationData_he);
	return class$;
}

$Class* CollationData_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun