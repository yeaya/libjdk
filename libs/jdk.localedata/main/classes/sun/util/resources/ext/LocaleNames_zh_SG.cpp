#include <sun/util/resources/ext/LocaleNames_zh_SG.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_zh_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zh_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zh_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zh_SG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_zh_SG",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_SG_MethodInfo_
};

$Object* allocate$LocaleNames_zh_SG($Class* clazz) {
	return $of($alloc(LocaleNames_zh_SG));
}

void LocaleNames_zh_SG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_zh_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"美属萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"澳洲"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波斯尼亚和黑塞哥维那"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"孟加拉国"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"布维特岛"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"伯利兹"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科科斯（基林）群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"刚果（金）"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"刚果（布）"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"捷克"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"多米尼加"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"厄立特里亚"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"福克兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"密克罗尼西亚联邦"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"南佐治亚和南三明治群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"几内亚比绍"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"中国香港特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"赫德与麦克唐纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"印尼"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"吉尔吉斯斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"北朝鲜"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"南韩"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"老挝人民民主共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"马其顿"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"中国澳门特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"北马里亚纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"马提尼克群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙塞拉特群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"新卡里多尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"纽埃"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"纽西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法属波利尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"圣皮埃尔和密克隆"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特凯恩"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"波多黎各"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"巴勒斯坦领土"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"留尼汪"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙地阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"圣赫勒拿"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"斯瓦尔巴特和扬马延"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"塞拉利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"特克斯和凯科斯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法属南部领土"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"托克劳"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"台湾"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"美国边远小岛"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"瓦利斯和富图纳"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"马约特"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"阿维斯塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"阿肯文"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"克里族文"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"宗教斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"夫拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"苏格兰盖尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"马恩岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"希里莫图文"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"国际文 A"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"国际文 E"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"伊格博文"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"四川话"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"伊努伊特文"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"宽亚玛文"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"坎纳达文"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"韩文"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"凯尔特文"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"卢干达文"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"淋布尔吉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"鲁巴加丹加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"拉脱维亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北恩德贝勒文"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南部恩德贝勒文"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"尼扬贾文；齐切瓦文；切瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"奥克西唐文(1500以后)"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"奥洛莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"列托－罗曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"萨丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"信德文"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"绍纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"斯瓦特文"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"巽他文"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"他加禄文"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"塞茨瓦纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"宗加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"塔塔尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"特威文"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"塔西提文"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"瓦隆文"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"沃洛夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"科萨文"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"壮语"_s)
		})
	});
}

LocaleNames_zh_SG::LocaleNames_zh_SG() {
}

$Class* LocaleNames_zh_SG::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_SG, name, initialize, &_LocaleNames_zh_SG_ClassInfo_, allocate$LocaleNames_zh_SG);
	return class$;
}

$Class* LocaleNames_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun