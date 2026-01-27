#include <sun/text/resources/ext/BreakIteratorRules_th.h>

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

$MethodInfo _BreakIteratorRules_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorRules_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(BreakIteratorRules_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _BreakIteratorRules_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.BreakIteratorRules_th",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_BreakIteratorRules_th_MethodInfo_
};

$Object* allocate$BreakIteratorRules_th($Class* clazz) {
	return $of($alloc(BreakIteratorRules_th));
}

void BreakIteratorRules_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BreakIteratorRules_th::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("WordBreakRules"_s),
			$of(u"<dictionary>=[ก-ฮะ-ฺเ-ไ็-๎];<ignore>=[:Mn::Me::Cf:^<dictionary>];<paiyannoi>=[ฯ];<maiyamok>=[ๆ];<danda>=[।॥];<kanji>=[々一-龥豈-鶴];<kata>=[ァ-ヺ];<hira>=[ぁ-ゔ];<cjk-diacrit>=[゙-゜];<let>=[:L::Mc:^[<kanji><kata><hira><cjk-diacrit><dictionary>]];<dgt>=[:N:];<mid-word>=[:Pd:\u00ad‧\\\"\\\'\\.];<mid-num>=[\\\"\\\'\\,٫\\.];<pre-num>=[:Sc:\\#\\.^¢];<post-num>=[\\%\\&¢٪‰‱];<ls>=[\n\f  ];<ws>=[:Zs:\t];<word>=((<let><let>*(<mid-word><let><let>*)*){<danda>});<number>=(<dgt><dgt>*(<mid-num><dgt><dgt>*)*);<thai-etc>=<paiyannoi>ล<paiyannoi>;.;{<word>}(<number><word>)*{<number>{<post-num>}};<pre-num>(<number><word>)*{<number>{<post-num>}};<dictionary><dictionary>*{{<paiyannoi>}<maiyamok>};<dictionary><dictionary>*<paiyannoi>/([^[ล<ignore>]]|ล[^[<paiyannoi><ignore>]]);<thai-etc>;<ws>*{\r}{<ls>};[<kata><cjk-diacrit>]*;[<hira><cjk-diacrit>]*;<kanji>*;"_s)
		}),
		$$new($ObjectArray, {
			$of("LineBreakRules"_s),
			$of(u"<dictionary>=[ก-ฮะ-ฺเ-ไ็-๎];<ignore>=[:Mn::Me::Cf:^[<dictionary>]];<danda>=[।॥];<break>=[\u0003\t\n\f  ];<nbsp>=[ ༌ ‑ \ufeff];<space>=[:Zs::Cc:^[<nbsp><break>\r]];<dash>=[:Pd:\u00ad^<nbsp>];<paiyannoi>=[ฯ];<maiyamok>=[ๆ];<thai-etc>=(<paiyannoi>ล<paiyannoi>);<pre-word>=[:Sc::Ps::Pi:^¢\\\"];<post-word>=[:Pe::Pf:\\!\\%\\.\\,\\:\\;\\?\\\"¢°٪‰-‴℃℅℉、。々ぁぃぅぇぉっゃゅょゎ゙-ゞァィゥェォッャュョヮヵヶー-ヾ！．？<maiyamok>];<kanji>=[一-龥豈-鶴ぁ-ゔァ-ヺ^[<post-word><ignore>]];<digit>=[:Nd::No:];<mid-num>=[\\.\\,];<char>=[^[<break><space><dash><kanji><nbsp><ignore><pre-word><post-word><mid-num>\r<danda><dictionary><paiyannoi><maiyamok>]];<number>=([<pre-word><dash>]*<digit><digit>*(<mid-num><digit><digit>*)*);<word-core>=(<char>*|<kanji>|<number>|<dictionary><dictionary>*|<thai-etc>);<word-suffix>=((<dash><dash>*|<post-word>*)<space>*);<word>=(<pre-word>*<word-core><word-suffix>);<word>(<nbsp><nbsp>*<word>)*{({\r}{<break>}|<paiyannoi>\r{break}|<paiyannoi><break>)};<word>(<nbsp><nbsp>*<word>)*<paiyannoi>/([^[ล<ignore>]]|ล[^[<paiyannoi><ignore>]]);"_s)
		})
	});
}

BreakIteratorRules_th::BreakIteratorRules_th() {
}

$Class* BreakIteratorRules_th::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorRules_th, name, initialize, &_BreakIteratorRules_th_ClassInfo_, allocate$BreakIteratorRules_th);
	return class$;
}

$Class* BreakIteratorRules_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun