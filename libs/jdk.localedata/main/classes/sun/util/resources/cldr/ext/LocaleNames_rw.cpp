#include <sun/util/resources/cldr/ext/LocaleNames_rw.h>

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

$MethodInfo _LocaleNames_rw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_rw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_rw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_rw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_rw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_rw_MethodInfo_
};

$Object* allocate$LocaleNames_rw($Class* clazz) {
	return $of($alloc(LocaleNames_rw));
}

void LocaleNames_rw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_rw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Masedoniya y’Amajyaruguru"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("U Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Ikinyafurikaneri"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Inyamuhariki"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Icyarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Icyasamizi"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Inyazeribayijani"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Ikibelarusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Urunyabuligariya"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Ikibengali"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Inyebiritoni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Inyebosiniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Igikatalani"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Igiceke"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Ikigaluwa"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Ikidaninwa"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Ikidage"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Ikigereki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Icyongereza"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Icyesiperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Icyesipanyolo"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Icyesitoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Ikibasiki"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Inyeperisi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Igifinilande"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Inyefaroyizi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Igifaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Igifiriziyani"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Ikirilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Ikigaluwa cy’Igisweduwa"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Ikigalisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Inyaguwarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Inyegujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Igiheburayo"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Igihindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Igikorowasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Igihongiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Ikinyarumeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Ururimi Gahuzamiryango"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Ikinyendoziya"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Uruhuzandimi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Igisilande"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Igitaliyani"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Ikiyapani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Inyejava"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Inyejeworujiya"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Igikambodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Igikanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Igikoreya"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Inyekuridishi"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Inkerigizi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Ikilatini"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Ilingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Ikilawotiyani"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Ikilituwaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Ikinyaletoviyani"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Ikimasedoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Ikimalayalami"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Ikimongoli"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Ikimarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Ikimalayi"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Ikimaliteze"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Ikinepali"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Ikinerilande"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Inyenoruveji (Nyonorusiki)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Ikinoruveji"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Inyogusitani"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Inyoriya"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Igipunjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Igipolone"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Impashito"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Igiporutugali"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Ikinyarumaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ikirusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Igisansikiri"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Igisindi"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Inyeseribiya na Korowasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Inyesimpaleze"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Igisilovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Ikinyasiloveniya"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Igisomali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Icyalubaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Igiseribe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Inyesesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Inyesudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Igisuweduwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Igiswahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Igitamili"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Igitelugu"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Igitayi"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Inyatigirinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Inyeturukimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Igiturukiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Inyetuwi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Ikiwiguri"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ikinyayukereni"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Inyeyurudu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Inyeyuzubeki"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Ikinyaviyetinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Inyehawusa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Inyeyidishi"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Inyezulu"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Ikinyafilipine"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Inyekilingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Inyeporutigali (Brezili)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Inyeporutigali (Igiporutigali)"_s)
		})
	}));
	return data;
}

LocaleNames_rw::LocaleNames_rw() {
}

$Class* LocaleNames_rw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_rw, name, initialize, &_LocaleNames_rw_ClassInfo_, allocate$LocaleNames_rw);
	return class$;
}

$Class* LocaleNames_rw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun