#include <sun/text/resources/ext/CollationData_sr.h>

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

$MethodInfo _CollationData_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_sr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sr_MethodInfo_
};

$Object* allocate$CollationData_sr($Class* clazz) {
	return $of($alloc(CollationData_sr));
}

void CollationData_sr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& 9 < ҂ & Z < а , А< б , Б< в , В< г , Г; ґ , Ґ; ҕ , Ҕ; ѓ , Ѓ; ғ , Ғ< д , Д< ђ , Ђ< е , Е; ҽ , Ҽ; ё , Ё; ҿ , Ҿ< є , Є< ж , Ж; җ , Җ; ӂ , Ӂ< з , З; ҙ , Ҙ< ѕ , Ѕ< и , И< і , І; Ӏ < ї , Ї< й , Й< ј , Ј< к , К; ҟ , Ҟ; ӄ , Ӄ; ҝ , Ҝ; ҡ , Ҡ; ќ , Ќ; қ , Қ< л , Л< љ , Љ< м , М< н , Н; ѣ ; ң , Ң; ҥ , Ҥ; һ , Һ; ӈ , Ӈ< њ , Њ< о , О; ҩ , Ҩ< п , П; ҧ , Ҧ< р , Р< с , С; ҫ , Ҫ< т , Т; ҭ , Ҭ< ћ , Ћ< у , У; ү , Ү< ў , Ў< ұ , Ұ< ф , Ф< х , Х; ҳ , Ҳ< ц , Ц; ҵ , Ҵ< ч , Ч; ҷ ; Ҷ; ҹ , Ҹ; ӌ , Ӌ< џ , Џ< ш , Ш< щ , Щ< ъ , Ъ< ы , Ы< ь , Ь< э , Э< ю , Ю< я , Я< ѡ , Ѡ< Ѣ < ѥ , Ѥ< ѧ , Ѧ< ѩ , Ѩ< ѫ , Ѫ< ѭ , Ѭ< ѯ , Ѯ< ѱ , Ѱ< ѳ , Ѳ< ѵ , Ѵ; ѷ , Ѷ< ѹ , Ѹ< ѻ , Ѻ< ѽ , Ѽ< ѿ , Ѿ< ҁ , Ҁ"_s)
	})});
}

CollationData_sr::CollationData_sr() {
}

$Class* CollationData_sr::load$($String* name, bool initialize) {
	$loadClass(CollationData_sr, name, initialize, &_CollationData_sr_ClassInfo_, allocate$CollationData_sr);
	return class$;
}

$Class* CollationData_sr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun