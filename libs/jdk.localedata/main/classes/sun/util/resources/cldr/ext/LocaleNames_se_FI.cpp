#include <sun/util/resources/cldr/ext/LocaleNames_se_FI.h>

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

$MethodInfo _LocaleNames_se_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_se_FI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_se_FI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_se_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_se_FI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_se_FI_MethodInfo_
};

$Object* allocate$LocaleNames_se_FI($Class* clazz) {
	return $of($alloc(LocaleNames_se_FI));
}

void LocaleNames_se_FI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_se_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Máilbmi"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrihka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Davvi-Amerihká ja Gaska-Amerihká"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Lulli-Amerihká"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Oarje-Afrihká"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Gaska-Amerihká"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Nuorta-Afrihká"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Davvi-Afrihká"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Gaska-Afrihká"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Lulli-Afrihká"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerihka"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Davvi-Amerihká"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia guovlu"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latiinnalaš Amerihká"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ja Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Euroavádat"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamboža"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Ovttastuvvan Našuvnnat"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"vilgesruoššagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fižigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakhgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"kambožagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thaigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ačehgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arábalaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"kiinnálaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"álkes kiinnálaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"árbevirolaš kiinnálaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"orrut čállojuvvot"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"dovdameahttun čállin"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"nuortariikkalaš duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"šveicalaš duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"austrálialaš eaŋgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanádalaš eaŋgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"brihttalaš eaŋgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"amerihkálaš eaŋgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"espánjalaš spánskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"meksikolaš spánskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanádalaš fránskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"šveicalaš fránskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"belgialaš hollánddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brasilialaš portugálagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugálalaš portugálagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldávialaš romániagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"standárda arábagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"latiinna-amerihkalaš spánskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"álkes kiinnágiella"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"koptalaš kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"kiinná kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhista kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"etiohpalaš kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"gregorialaš kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"etiohpalaš-amete-alem kaleandar"_s)
		})
	}));
	return data;
}

LocaleNames_se_FI::LocaleNames_se_FI() {
}

$Class* LocaleNames_se_FI::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_se_FI, name, initialize, &_LocaleNames_se_FI_ClassInfo_, allocate$LocaleNames_se_FI);
	return class$;
}

$Class* LocaleNames_se_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun