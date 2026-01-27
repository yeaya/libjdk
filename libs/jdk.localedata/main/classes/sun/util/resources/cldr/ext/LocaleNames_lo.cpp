#include <sun/util/resources/cldr/ext/LocaleNames_lo.h>

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

$MethodInfo _LocaleNames_lo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lo_MethodInfo_
};

$Object* allocate$LocaleNames_lo($Class* clazz) {
	return $of($alloc(LocaleNames_lo));
}

void LocaleNames_lo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CN, u"ຈີນ"_s);
	$var($String, metaValue_DE, u"ເຢຍລະມັນ"_s);
	$var($String, metaValue_FR, u"ຝຣັ່ງ"_s);
	$var($String, metaValue_JP, u"ຍີ່ປຸ່ນ"_s);
	$var($String, metaValue_LA, u"ລາວ"_s);
	$var($String, metaValue_MN, u"ມອງໂກເລຍ"_s);
	$var($String, metaValue_TH, u"ໄທ"_s);
	$var($String, metaValue_TK, u"ໂຕເກເລົາ"_s);
	$var($String, metaValue_TV, u"ຕູວາລູ"_s);
	$var($String, metaValue_VN, u"ຫວຽດນາມ"_s);
	$var($String, metaValue_WS, u"ຊາມົວ"_s);
	$var($String, metaValue_bo, u"ທິເບທັນ"_s);
	$var($String, metaValue_el, u"ກຣີກ"_s);
	$var($String, metaValue_he, u"ຮີບຣິວ"_s);
	$var($String, metaValue_hy, u"ອາເມນຽນ"_s);
	$var($String, metaValue_ka, u"ຈໍຈຽນ"_s);
	$var($String, metaValue_kn, u"ຄັນນາດາ"_s);
	$var($String, metaValue_la, u"ລາຕິນ"_s);
	$var($String, metaValue_my, u"ມຽນມາ"_s);
	$var($String, metaValue_si, u"ສິນຫາລາ"_s);
	$var($String, metaValue_ta, u"ທາມິລ"_s);
	$var($String, metaValue_tl, u"ຕາກາລອກ"_s);
	$var($String, metaValue_cop, u"ຄອບຕິກ"_s);
	$var($String, metaValue_men, u"ເມນເດ"_s);
	$var($String, metaValue_nqo, u"ເອັນໂກ"_s);
	$var($String, metaValue_ssy, u"ຊາໂຮ"_s);
	$var($String, metaValue_vai, u"ໄວ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ໂຄລອກນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ອອກຄອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ມີລັນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ສັນຍາລັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ອາດແຊມ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"ມາວາຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"ຕົວເລກໄທທຳທຳ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"ຕັກບັນວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ອີໂມຈິ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"ພາສາພື້ນເມືອງຈີວາ/ນີວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ອີຢິບບູຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ຣາຈັສທານິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ຟາກສ-ປາ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ທີມເນ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ເຕໂຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ຣາປານຸຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"ເຕເລໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ເກາະອາເຊນຊັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ຣາໂຣທອນການ"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ເຕຕູມ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ອັນດໍຣາ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ສະຫະລັດອາຣັບເອມິເຣດ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ຟລີມິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ອາຟການິດສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ແອນທິກົວ ແລະ ບາບູດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ປະຕິທິນເອທິໂອເປຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ແອນກຸຍລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ແອວເບເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ອາເມເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"ເທງກວາຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ແອງໂກລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ແອນຕາດຕິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ອາເຈນທິນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"ພາຮ໌ເທຍອິນສຄຮິປຊັນແນລ"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ອາເມຣິກາ ຊາມົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ອອສເທຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ອອສເຕຣເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ອາຣູບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ອັງກິດ (ອາເມລິກັນ)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ຫມູ່ເກາະໂອລັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"ມໍຢິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ອາເຊີໄບຈານ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"ອາເມເນຍຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ບອດສະເນຍ ແລະ ແຮສໂກວີນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ບາບາໂດສ"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"ຊີບູໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ບັງກະລາເທດ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ຄູມີກ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ເບວຢຽມ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"ເຢຍລະມັນສູງກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ເບີກິນາ ຟາໂຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ບັງກາເຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ບາເຣນ"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ບູຣຸນດິ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ເບນິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ເຊນ ບາເທເລມີ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ເບີມິວດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"ຄູເທໄນ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ເອີຍາ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ບຣູໄນ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ໂບລິເວຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ຄາຣິບບຽນ ເນເທີແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ບຣາຊິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ບາຮາມາສ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ໂຊກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ພູຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ເກາະບູເວດ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ບອດສະວານາ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ເບລາຣຸສ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ເບລີຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"ຄຳເວົ້າທີ່ເບີ່ງເຫັນໄດ້"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ປະຕິທິນເປີຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ຕົວເລກຮິບຣິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ແຄນາດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ຫມູ່ເກາະໂກໂກສ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ມາແຊນເດີລັງ"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ຄອງໂກ - ຄິນຊາຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ສາທາລະນະລັດອາຟຣິກາກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ຄອງໂກ - ບຣາຊາວິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ສະວິດເຊີແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ໂຄຕີ ວົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ໝູ່ເກາະຄຸກ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ຊິລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"ກາຍຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ຄາເມຣູນ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ໂຄລົມເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ເກາະຄລິບເປີຕັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ໂຄສຕາ ຣິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ຄິວບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ເຄບ ເວີດ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ຄູຣາຊາວ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ເກາະຄຣິສມາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ໄຊປຣັສ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"ຕົວເລກບາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ເຊັກເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ອີກາຈັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ເຢຍລະມັນສູງໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ແອັກຊີເນັສ"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ຊີກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ດິເອໂກ ກາເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ຕົວເລກເດວານາກາຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ຈິບູຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ເດນມາກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ອາໂຄລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ກອນດີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ເບຣວ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ພຮາຫມີ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ໂດມີນິຄາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ຕົວເລກອາເມນຽນຕົວພິມນ້ອຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ສາທາລະນະລັດ ໂດມິນິກັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ໂກຣອນຕາໂຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"ກອດຮິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"ເມເທມາເຍກ"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ຊູນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ໄທກຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"ທາຄຮີ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ອັລຈິເຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"ປານກາຊີມານ"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"ພາລາວີ"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ເຊວຕາ & ເມລິນລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ຊິບຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"ປາມປານກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ເອກວາດໍ"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"ປາມເປຍເມັນໂທ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ອາແດງມີ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ເອສໂຕເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"ຕີວ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ອີຢິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ຊາຮາຣາຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"ຊາກາໄຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ປາລົວອານ"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ຊູເກດ"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ຊີນຸກຈາກອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ມາຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ຊີພິວຢານ"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ຊອກຕິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ຊີໂຣກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ເອຣິເທຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ສະເປນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ອີທິໂອເປຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ສະຫະພາບຢູໂຣບ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"ອີລາໄມ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ປະຕິທິນເກຣໂກຣຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ເຂດຢູໂຣບ"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ຊີເຢນນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ຕົວເລກກຸຈາຣາທີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"ອິນດັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ເອດີຮິ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ຟິນແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ຟິຈິ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ຫມູ່ເກາະຟອກແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ໄມໂຄຣນີເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ຫມູ່ເກາະແຟໂຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"ເປລເລ"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ກຣີໂບ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ປະຕິທິນແຫ່ງຊາດອິນເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ແອນຊຽນກຣີກ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ກາບອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ໂວຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ສະຫະລາດຊະອະນາຈັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ໄນຈີຣຽນພິດກິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ເກຣເນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ຈໍເຈຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ເຟຣນຊ໌ ກຸຍອານາ"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ເກີນຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ການາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ໄທເລ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ຈິບບຣອນທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"ແອຟີຮີລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ກຣີນແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ອັງກິດກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ສາທາລະນະລັດແກມເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ກິນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ກົວດາລູບ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ເອຄົວໂທຣຽວ ກີນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ກຣີຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ໝູ່ເກາະ ຈໍເຈຍຕອນໃຕ້ ແລະ ແຊນວິດຕອນໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ກົວເທມາລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ກວາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ກິນີ-ບິສເຊົາ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ທລີງກິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ຄຣິງກອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"ໄທລື້ໃໝ່"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ກາຍຢານາ"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"ໂຊຣານິ ເຄີດິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ບໍ່ມີເນື້ອຫາພາສາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"ຈູຮເຊັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ເຢຍລະມັນ (ໂອສຕຣິດ)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ຮົງກົງ ເຂດປົກຄອງພິເສດ ຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ໝູ່ເກາະເຮີດ & ແມັກໂດນອລ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ຮອນດູຣັສ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ໂຄຣເອເທຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ອາເຮັມ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ສະວິສ ເຈີແມນ"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ໄຮຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ຮັງກາຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"ທາມາກເຊກ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ໝູ່ເກາະຄານາຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ອິນໂດເນເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"ເປີເຊຍໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"ຕົວເລກກາຢາ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ໄອແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ນາໂປລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"ພາສາພື້ນເມືອງດິວຄາ"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ນາມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ຊາຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"ຕັນກັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ອິສຣາເອວ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"ນາບາທາທຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ເອວ ອອບ ແມນ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ອິນເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ເຂດແດນອັງກິດໃນມະຫາສະມຸດອິນເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ອີຣັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ອີຣານ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ໄອສແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ອິຕາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ເຄື່ອງໝາຍທາງຄະນິດສາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ຕົວເລກໄທ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"ຄອມພິວເຕີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ຕົວເລກບັງກລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ເຈີຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ປະຕິທິນອິສະລາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ຈາໄມຄາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"ເບັງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ຈໍແດນ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"ປາຍຍຸກກາງຝຣັ່ງເຖິງປີ ຄສ 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ໄອນູ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ກູຊິ"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ນາຍອາຊາຕອງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"ຕົວເລກແຄນນາດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"ຄຍາ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ສະວິສ ໄຮ ເຈີແມນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ປະຕິທິນ ພຸດທະສັງກາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ເຄນຢາ"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ລາຕິນ ອາເມລິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ຄຽກກິດສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ກຳປູເຈຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ຄິຣິບາທິ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ໂຄໂມໂຣສ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ເຊນ ຄິດ ແລະ ເນວິສ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ອິນເຮຮິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"ຟລັງ(ການາດາ)"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ເກົາຫລີເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ເກົາຫລີໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"ສັດຕະສາດພໍຮລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ຝຣັ່ງ (ສວິສ)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ກູເວດ"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ທອກພີຊິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ໝູ່ເກາະ ເຄແມນ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ຄາຊັກສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ຊີຣິວລິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ເລບານອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ເຊນ ລູເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ຟີນີເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ເຊຮັດສລາ ໂວນິກຊີຮິກລິກໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ວິດອິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"ລູນ່າ1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ເຢຍລະມັນ ຕອນໄຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ລິດເທນສະຕາຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ສີລັງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"ອັກກາດຽມ"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ລິເບີເຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ເລໂຊໂທ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"ປະຫລາວີບຸກ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ລິທົວເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ລຸກແຊມເບີກ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ລັດເວຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"ຄະຕະກະນະ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"ໂສຮາສົມເປັງ"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ລິເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ລາດີໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ວັນໂຈ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"ລົວກິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ລານດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ແລນກິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ທານາ"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ໂມຣັອກໂຄ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ໂມນາໂຄ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ໂມນໂດວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"ນຸຊຸ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ມອນເຕເນໂກຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ເຊນ ມາທິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ແລມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ມາດາກາສະກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ຫມູ່ເກາະມາແຊວ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ອາເລີດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ຕົວເລກໃນລະບົບໄວ"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ແມຊິໂດເນຍເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ມາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ມຽນມາ (ເບີມາ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ນີວາຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ມາກາວ ເຂດປົກຄອງພິເສດ ຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ໝູ່ເກາະມາເຣຍນາຕອນເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ມາຕິນີກ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ມົວຣິເທເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ມອນເຊີຣາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ມອນທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ມົວຣິຊຽສ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ອານໄຕໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ມັນດິຟ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ມາລາວີ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ເມັກຊິໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ປະຕິທິນຍີ່ປຸ່ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ມາເລເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ໂມແຊມບິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ປະຫລາວີອິນສຄິບຊັນແນລ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ນາມີເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ຊັບ ຊາຮາຣານ ອາຟຣິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ປະ\u200bຕິ\u200bທິນ\u200bຮີບ\u200bຣິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ລຽງຕາມພົດຈະນານຸກົມ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ນິວ ຄາເລໂດເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"ການຖອດອັກສອນແບບເວດ-ໄຈລ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"ອັກຂະລະວິທີສະບັບປັບປຸງແບບຄົບວົງຈອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ນິເຈີ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ເກາະນໍໂຟກ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ໄນຈີເຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ຕາໂລໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"ປະຫລາວີຊອດເຕຮ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ນິກຄາຣາກົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"ປາເຮາເມັງ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ເນເທີແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ນໍເວ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ເນປານ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ນາອູຣູ"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ນີອູເອ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ຟີນິເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ຣົມໂບ"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"ຊີມຊີແອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ນິວຊີແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"ເຄເລີຊີເມໂຮອິຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ໂຣເມນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"ເມໂຮຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ຄຣີເມນເຕີຄິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ອັງກິດໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ໂອມານ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"ພີທ໌1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ແອນຈີກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"ເຊເຊວາ ໂຄຣດ ຝຣັ່ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"ເປຮເຊຍໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ພານາມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ປະຕິທິນອິດສະລາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ກາຊູບຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ອັງກິດ (ບຣິດທິຊ)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ເປຣູ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ເຟຣນຊ໌ ໂພລິນີເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ປາປົວນິວກີນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ຟິລິບປິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ປາກິດສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ໂປແລນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ອີວອນດູ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ເຊນ ປີແອ ມິເກວລອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ໝູ່ເກາະພິດແຄນ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ເພືອໂຕ ຣິໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ດິນແດນປາເລດສະຕິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"ບາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ພອລທູໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ປາລາວ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ນີ່ອັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ຕົວເລກກຣີກຕົວພິມນ້ອຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ພາຣາກວຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ຕຳບູກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ກາຕາ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"ພາສາອັງກິດມາດຕະຖານສະກັອດ"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ນີ່ອູ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ເຂດຫ່າງໄກໂອຊີເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ລີຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"ສັດທະສາດອັກສອນ UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ໄທຫວຽດ"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ໂລກ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ອາຟຣິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ອາເມລິກາເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ເຣອູນິຍົງ"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ອາເມລິກາໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ໂລບບັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"ເຮຈັງ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ໂອຊີອານີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"ຊູຣ໌ຊີລ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ໂຣແມເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ເຊີເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"ເມໂຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ຣັດເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ຣວັນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"ຕົວເລກໄຕລື້ໃໝ່"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"ມານິແຊນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ຍູກາຮິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ຂໍໂຮກສີ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ຊາອຸດິ ອາຣາເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ພອນເພ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"ແມນດຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ຫມູ່ເກາະໂຊໂລມອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ຕາຊາວັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ອາຟຣິກາຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ເຊເຊວເລສ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ຊູດານ"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ອາເມລິກາກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ສະວີເດັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ອາຟຣິກາຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ອາລາມິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"ໂລມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ອາຟຣິກາເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ສິງກະໂປ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ເຊນ ເຮເລນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ຮູບແບບເສັ້ນຂັ້ນແບບເຄັ່ງຄັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ອາຟຣິກາກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ສະໂລເວເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ອາຟຣິກາຕອນໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ສະວາບາ ແລະ ແຢນ ມາເຢນ"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ອາເມຣິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ສະໂລວາເກຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"ບາມູມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"ໂອລີເອ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ເຊຍຣາ ລີໂອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ແຊນ ມາຣິໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ເຊນີໂກລ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ໂຊມາເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ມາພຸດຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ອາຣາປາໂຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ຕົວເລກທາມິລແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ຊູຣິນາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ຊູດານໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ເຊົາທູເມ ແລະ ພຣິນຊິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ເອວ ຊໍວາດໍ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ຊິນ ມາເທັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ຊີເຣຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ເຢົ້າ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u200bເອ\u200bສະ\u200bວາ\u200bຕິ\u200bນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"ອາຣາແວກ"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ຢັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ທຣິສຕັນ ດາ ກັນຮາ"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ອາຊູ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ລະບົບການວັດແທກແບບສະຫະລັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ພາກເໜືອອາເມລີກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ໝູ່ເກາະ ເທີກ ແລະ ໄຄໂຄສ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ແຍງເບນ"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ຊາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ເຂດແດນທາງໃຕ້ຂອຝຮັ່ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ໂຕໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ທາຈິກິດສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ຄາຣິບບຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ທິມໍ-ເລສເຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ແຢມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"ຄົ້ນຫາຕາມພະຍັນຊະນະຂຶ້ນຕົ້ນທີ່ເປັນຮັງກີຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ເທີກເມນິສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"ບູນທລິ່ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ຕູນິເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ທອງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ເທີຄີ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ທຣິນິແດດ ແລະ ໂທແບໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ໄຕ້ຫວັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ອັສຕູຮຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ອອກສມັນຍາ"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ທານຊາເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ກວາຊີໂອ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ແບບຂຽນທີ່ບໍ່ຮູ້ຈັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"ດຸດາວາດີ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ຢູເຄຣນ"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ອາໂຣມານຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ອາຊີຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ຕູວີນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"ຄອງໂກ ຊວາຮີລິ"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ອາຊີໄຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ໄຮດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ອາຊີຕາເວັນອອກສ່ຽງໄຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ອູການດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"ລຽງຕາມການອອກສຽງພາສາຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ຢູໂຣບໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ໝູ່ເກາະຮອບນອກຂອງສະຫະລັດຯ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ສະຫະປະຊາຊາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ສະຫະລັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ຮາໄວອຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"ວິຊາການ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ລຽງຕາມອັກສອນຈີນປະຍຸກ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ອູຣຸກວຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ປຣັສຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ອຸສເບກິສະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"ອັດລາສ ທາມາຊີກ ກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ລຽງຕາມການລາກເສັ້ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ຈີ່ມບູນ"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ນະຄອນ ວາຕິກັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"ໂປວອງຊານໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ເຊນ ວິນເຊນ ແລະ ເກຣເນດິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ເວເນຊູເອລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ໝູ່ເກາະ ເວີຈິນຂອງອັງກິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ໝູ່ເກາະ ເວີຈິນ ຂອງສະຫະລັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ວານົວຕູ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ນໍໄກ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ອາຣວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"ນໍໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ໂອດສະຕາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"ອາເມເນຍຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ເມລານີເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ວາລລິສ ແລະ ຟູຕູນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ລຽງຕາມແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"ເຂດໄມໂຄຣເນຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ງອມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ລາໂກຕາ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"ການຖອດອັກສອນແບບເຮບເບິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ວາເຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"ບັດຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"ຕົວເລກເມໄຕມາເຢກ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ວາລາໂມ"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ວາໂຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ວາເລ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ອາວາຮິ"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ໂພລີນີເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ໂຄໂຊໂວ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"ຈູຈາຣາທີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ບໍ່ມີພາສາຂຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ໂອຊິກິ"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ວາຣພິຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"ບາຕັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ບລິກຊິມໂບລສ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ເຢເມນ"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ຮຽງຕາມມາດຕະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ແຟງ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"ເຣຊ່ຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"ຊຸຕ໌ຊີລ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ແຟນຕີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ໄຊນ໌ໄຮຕີ້ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ມາຢັອດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"ຕົວເລກຊຣາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ອາຟຣິກາໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"ຕົວເລກຊຸນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ຮູບແບບເສັ້ນຂັ້ນແບບຫຼວມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ດີວານາກາຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ຕົວເລກຈໍຈຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ຣິຣະງະນະ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ແຊມເບຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"ພິນຢິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ຊິມບັບເວ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ຂົງເຂດທີ່ບໍ່ຮູ້ຈັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"ຮູນິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ລະບົບເມທຣິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ປະ\u200bຕິ\u200bທິນ ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"ແມັງໂກ້"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ໂຊໂທເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ຕົວເລກເຕລູກູ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ໂລຊິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"ກີບາ-ນາຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ມາແຊມ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ຕົວເລກທາງການເງິນແບບຮຽບງ່າຍຂອງຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ຮິຣິໄກນອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ຕົວເລກອາຣາບິກ-ອິນດິກຕົວເຕັມ"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ເນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ດາໂກຕາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ຕົວເລກຄວາມກວ້າງເຕັມ"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ຮິດໄຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ດາກວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ໄຕຕາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"ມາຍາໄຮໂຮກລິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ລູຣິ ທາງຕອນເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"ເນວາດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ອຸດມັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"ຂະແມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"ລິມບູ"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ຊັນດາວ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ຕົວເລກໂຣມັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ຊາກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"ສາມາຣິແຕນ-"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"ສະເກົາສ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ຊຳບູຣູ"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ຊາຊັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ຊານທາລິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"ທີຟີນາກ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ຈູແດວ-ເພີຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ກຳເບ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ກົວມູຄີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"ພາສາພື້ນເມືອງອລູຄຸ"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ລູບາ-ລູລົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"ບິສຄາຍັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ຊານກູ"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ລູເຊໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ນານຄອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ນາມວີຊິ"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ລຸນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ໂນໂຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ລົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ຟີລິປີໂນ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ມອງ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ເດລາວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ລູໄຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ບາລູຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"ຊີເລັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"ບາລີເນັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ຢູກາລິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ລູໄຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ບາຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"ບາມຸນ"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ຈູແດວ-ອາລາບິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ສະເປັນ ຢຸໂຣບ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ນິມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ສກອດ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ຊີຊິລີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"ອະຟາ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ແອບຄາຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"ອາເວັສແຕນ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ອາຟຣິການ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ອາການ"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ໂຄມາລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ອຳຮາຣິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ອາຣາໂກເນັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ອາຣາບິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"ພາສາພື້ນເມືອງສະໂຕວິຊ໌ຊ່າ/ໂຊລ໌ບີກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ອາຣັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ຕາຕາລາງພະຍາງພາສາຍີ່ປຸ່ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ອັສຊາມີສ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"ລີເນຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ອາວາຣິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"ລີເນຍຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ພາກໄຕ້ ຂອງ ກູດິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ອາຍມາລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ອາເຊີໄບຈານິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"ຄໍຈຄີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"ພາສາພື້ນເມືອງໂອຊຽກໂຄ/ໂອໂຊຍາເນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ບາຣກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ລຽງລຳດັບຕາມຈຳນວນຂີດ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ເບລາຣັສຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ບັງກາຣຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ບິສລະມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"ຕົວເລກຊົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ບາມບາຣາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ເບັງກາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ໂດກຣິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ເບຣຕັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ບອສນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"ຊີນີກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ຕົວເລກລາວ"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ຊີນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"ເຊນຄັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ຄາຕາລານ"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ໂຄຍຣາໂບໂຣ ເຊນນິ"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ຊີເຄນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ຊາມໍໂຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"ອັກຂະລະວິທີສະບັບປັບປຸງ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"ຄໍຊິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ໂອເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ຄີ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ເຊກ"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ໂບດສລາວິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ຊູວາຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ເວວ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ຕົວເລກເອທິໂອປິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ຍີ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ແດນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ປອກຕຸຍກິສ ຢຸໂຣບ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ຮູບແບບສະກຸນເງິນມາດຕະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ບີເຈ"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ດິນກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"ບູກິສ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ເບັມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ອີຣິຊເກົ່າ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"ຕົວເລກມ່ອງໂກເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ດີວີຮີ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ລາຕິນ ອາເມຣິກັນ ສະແປນນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ດີຊອງຄາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ບີນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ປະຕິທິນຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"ເຟຣເຊຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ຊາມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ຕົວເລກກຣີກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ອິວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"ບາຟັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"ຮູບແບບເສັ້ນຂັ້ນແບບປົກກະຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"ໂມດາວຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ອັງກິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ເອສປາຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ລຽງຕາມອັກສອນຈີນດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ສະແປນນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ເອສໂຕນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ຮັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ບັສກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ບູຮິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ຮັນກູນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"ຊາມາເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ທາເຊວຫິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ຊໍບຽນ ທາງຕອນເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"ອັລສະເຕີ"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ຊານ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ຮານູໂນໂອ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ເປີຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ແບບຮຽບງ່າຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ຕົວເລກຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ຟູລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"ອາລັບ-ຊາດ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ຟິນນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ຟິຈຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ຟອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ບາໂລຈີ ພາກຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ກວາງຕຸ້ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ຟາໂຣສ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ອຳບັນດູ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"ຊິດາໂມ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ຟຣິຊຽນ ຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ໄອຣິສ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ສະກັອດເກລິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ກາລິຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ກົວຣານີ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ໂບພູຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ບໍ່ສາມາດລະບຸພາສາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ປະຕິທິນປີໂອເອທິໂອເປຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"ກູຈາຣາຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ແມງຊ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ເຮົາຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ຮິນດິ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ຮູປາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ບີຄອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ບີນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ຮິຣິໂມຕູ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ໂຄຣເອທຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ໄຮຕຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ຮັງກາຣຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ເຮິຮິໂຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"ສັດທະສາດອັກສອນສາກົນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ອິນເຕີລິງລົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ຈາໂມ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ອິນໂດເນຊຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ຕົວເລກທິເບດ"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ອິນເຕີລິງກຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ອິກໂບ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ເສສວນ ອີ"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"ຟຮັ່ງເສດກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of(u"ຣຳກຣ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ອິນນູປຽກ"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ຟຮັ່ງເສດໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ອີໂດ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"ຟຣີຊຽນຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ຟຣີຊຽນເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ໄອສແລນດິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ອິຕາລຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ອິນນຸກຕິຕັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"ພາສານໍວີຈ່ຽນສູງ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"ມາເລຢາລາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"ອາລະເບຍໃຕ້ໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"ຊາຮາຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ດອກຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"ຕົວເລກເລຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"ກົມ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ຊາມິໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ຈາແວນີສ"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ຊອວຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"ພະພຸດທະເຈົ້າ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ມາດູລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ລຸນຊາມິ"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ມາກາຮິ"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"ມາຟາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ໄມທີລິ"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ອີນາຣິຊາມິ"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ຊິກຊິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ມາກາຊາຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ສກອດຊາມິ"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"ມັນດິງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"ຄອງໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"ໂກຮິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"ຄິຄູຢຸ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ມາໄຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ກວນຍາມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ຄາຊັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ກຣີນແລນລິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"ຂະເໝນ"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"ເກົາຫລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"ຄານຸລິ"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ຄາສເມຍຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"ເຊີຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"ເລຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"ອະເວສຕະ"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ເຄີດິສ"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"ໂຄມິ"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"ຄໍນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ເກຍກີສ"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ໂຊນິນກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ລັກເຊມບວກກິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ຕົວເລກມາເລອາລຳ"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ແກນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ຮອງໂກຮອງໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ລິມເບີກີຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ລິງກາລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ຟຣີລຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ລະບົບການວັດແທກແບບອິມເພີຣຽວ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"ຕົວເລກໄທທຳໂຮລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ລິທົວນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ລູບາ-ຄາຕັງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ລັດວຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"ຊອກດິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ມາລາກາສຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"ມາຊານເລັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ຮຽງຕາມລຳດັບຢູນິໂຄດເລີ່ມຕົ້ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ມາວຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ແມຊິໂດນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"ມາເລອາລຳ"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ມາຣາທີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ມາເລ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ມອລທີສ"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"ໂສຮັດຕຣະ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"ມອກຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"ມາບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ຊໍບຽນຕໍ່ກວ່າ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ອິມພີຮຽນ ອາເມອິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"ນາຢູລູ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ການຊອກຫາທົ່ວໄປ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ນໍເວຈຽນ ບັອກມອລ"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ເອັນເດເບເລເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ເນປາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ເອັນດອງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"ມານດາຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ດັຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ນໍເວຈຽນ ນີນອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ນໍເວຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ນີບີລີໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ນາວາໂຈ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"ກາຣາ-ການປາກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ນານຈາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ກາຊິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"ກາໄບລ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"ໂພລີໂທນິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ອັອກຊີຕານ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ຈຣູ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"ກາມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ໂອຈິບວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ເມຣູ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ຕົວເລກອາເມນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ໂອໂຣໂມ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"ກະວີ"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ໂອຣິຢາ"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ອອດເຊຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ການຖອດອັກສອນເປັນອັກສອນໂຣມັນຕາມເກນຂອງສະມາຄົມຫ້ອງສະໝຸດອາເມລິກາແລະຫ້ອງສະໝຸດລັດຖະສະພາ ສະບັບພິມປີ 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ກາບາດຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ມໍຣິສເຢນ"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ສຣານນານຕອນໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ປັນຈາບີ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ດົວລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"ເຊເລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"ພາສາພື້ນເມືອງລິໂພວາຊ໌ຂອງເຣຊ່ຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"ຄາແນມບູ"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"ປາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ໂປລິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"ດັກກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"ຕົວເລກເສົາລັດທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ປະ\u200bຕິ\u200bທິນ\u200bດັງ\u200bກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"ວັລລາເດີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ປາສໂຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ປອກຕຸຍກິສ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ໄອລິດກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ຮຽງລຳດັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ປອກຕຸຍກິສ ບະເລຊີ່ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ຕີບ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ມາຄູວາ-ມີດໂຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ຮູບແບບສະກຸນເງິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"ຕົວເລກເອັນໂກ້"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ບຣາ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"ປະຕິທິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"ເຍົາເອີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"ຊູຣ໌ມິລານ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ເມທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"ຕາມລະບົບ 24 ຊົ່ວໂມງ (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"ຕາມລະບົບ 24 ຊົ່ວໂມງ (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ຕົວເລກມຽນມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ຄີຊົວ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ຊາໂປແຕບ"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ໂບດູ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ລ້ານນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ມາຄອນເດ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"ເວດິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ອີທິໂອປິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"ການຖອດອັກສອນແບບຍູດພິງ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"ຕາມລະບົບ 12 ຊົ່ວໂມງ (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"ຕາມລະບົບ 12 ຊົ່ວໂມງ (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ໂຣແມນຊ໌"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ຣຸນດິ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ສະກຸນເງິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ໂຣແມນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ຕົວເລກໂອດິອາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ຕົວເລກທົດສະນິຍົມຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ລັດເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"ອາຄຸດ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ຄິນຢາວານດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ສັນຍາລັກບລີຊິມ"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"ຄາເວີເດຍນູ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ມິກແມກ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ຊູຄູມ້າ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ອັງກິດ (ໂອດສະຕາລີ)"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"ຊົວເລດັບໂລຍັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"ສັນສະກຣິດ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"ອັກຂະລະວິທີແບບຄົບວົງຈອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ສາດີນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"ຊູຊູ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ສິນທິ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ຊາມິເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ທີແນງກາບູ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ແຊງໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"ເຊີໂບ-ໂກເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"ຊູເມີເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ສະໂລແວັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ສະໂລເວນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"ເຄນທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ໂຊນາ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ໂຊມາລີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ຕົວເລກອາຣາບິກ-ອິນດິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ອານບານຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ເຊີບຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ຊຣາຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ຮູບແບບສະກຸນເງິນການບັນຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ໂຊໂທໃຕ້"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"ຈາວາ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"ຊຸນແດນນີສ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"ພາສາພື້ນເມືອງນາທິໂຊເນ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ສະວີດິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ຊວາຮີລິ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ຕົວເລກທາງການເງິນແບບດັ້ງເດີມຂອງຈີນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ໄອໄບໄບໂອ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ໄອບານ"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ອາຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ບູຣຽດ"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ອາຊີກາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"ເຕລູກູ"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ອາຊີຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ທາຈິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ຕິກຣິນຢາ"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ບູຈີເນັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"ໂຄໂລ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ອັງກິດແຄນາດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ເທີກເມັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ເຕສະວານາ"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ທອງການ"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"ບູລູ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ໂຈລາ-ຟອນຢີ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ຕົວເລກຍີ່ປຸ່ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ເທີຄິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ເຕຊອງກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"ໂຄໂນຣຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"ຊາກມາ"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ທາທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ດູລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ທວີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ຕາຮີຕຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"ພາສາພື້ນເມືອງຊານຈິໂອໂຈ/ບິລາ"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ຢູໂຣບ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ຢູໂຣບຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ຢູໂຣບເໜືອ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ດາຊາກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ຢູໂຣບຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ອຸຍເຄີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"ອີຕາລີໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"ເກົາຫຼີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ສາມັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ຢູເຄຣນຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"ປະຕິທິນຄັອບຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ອູຣດູ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"ອັກສອນເຣຊ່ຽນມາດຕະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ການມິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ເຊນາກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ອຸສເບກ"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ຄາສິ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"ເຢຍລະມັນອໍໂທກຣາຟີປີ1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ຊາຊອນ ຕອນໄຕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"ຊີໂລຕິນາກຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ເວນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"ວາຮັງກສິຕິ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"ປະຕິທິນໄຕ້ຫວັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ໂຄຕັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"ຄອຍຣາ ຊິນີ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ຮອບວຽນຊົ່ວໂມງ( 12 ຫຼື 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"ອັກຂະລະວິທີທາຣາຊ໌ເຄຍວິກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ໂວລາພັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"ຊີເລຍແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ວໍລູມ"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ກາກາອຸຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"ຊີເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"ລີເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"ອັກສອນຮູບປລີ່ມສຸເມເຮຍ-ອັດຄາເດຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ວໍລອບ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ໂມຣັອກແຄນ ທາມາຊີກ ມາດຕະຖານ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ອາຣາບິກມາດຕະຖານສະໄໝໃໝ່"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"ສັນຍາລັກຊົນເຜົ່າພື້ນເມືອງແຄນນາດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"ຟອນແຊມ"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ກາໂຢ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"ມົງໂກນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"ແມນຈູ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ລາຕິນ-ຟຮັ່ງເຕຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"ອັກລຮະອານາໂຕເລຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ບາຍາ"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ມານີພູຣິ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ລາຕິນ-ແກລິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ຕົວເລກຈີນແບບຮຽບງ່າຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ຕົວເລກຈີນແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ໂຮຊາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ຕົວເລກໂຣມັນຕົວພິມນ້ອຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ບລິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"ພາສາພື້ນເມືອງພາມາຄາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ໄລເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ໂອແຊກ"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"ເມດູມບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"ມູນ"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"ໂມຫາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ຄາໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"ຕອນຕົ້ນຍຸກໃໝ່ຝຣັ່ງ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ຢິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ມອສຊີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"ຊີເຮຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"ເດເຊເຮ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ໂຢຣູບາ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ເມັກຊິກັນ ສະແປນນິຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"ຊີເຮຍຕາເວັນຕົກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ຕູກີອອດໂຕມັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"ຊີເຮຍເອສທຮານຈີໂລ"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ຊວາງ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"ຄາເຮຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"ຄາເລັນຈິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"ອັບຟາກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ຈູ້ອິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ເພີມີໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"ຮູບແບບເສັ້ນຂັ້ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ຊູລູ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ລຽງຕາມສະໝຸດໂທລະສັບ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"ໂມໂນໂທນິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"ຊາຮາດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"ຄິມບັນດູ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ຕົວເລກທາງການເງິນຂອງຍີ່ປຸ່ນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"ຈາມ"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"ຊີເຮຍຕາເວັນອອກ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"ຕົວເລກຊານພະມ້າ"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"ອາຮະເບຍເໜືອໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"ຕົວເລກໂອລຈິກິ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ລຽງຕາມລຳດັບສຸດທ້າຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ດີໂມຕິກອີຍິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ເຮຍຮາຕິກອີຍິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"ອິຕິຫາສະ"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"ພາລໄມຮິນ"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ເອັມບູ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ເຮຍໂຮກລິຟອີຍິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ຄອດຊູຮີຈໍເຈຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ຈີນແບບຮຽບງ່າຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"ໂຄມີ-ເພີມຢັກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ຮັງກາຮີໂບຮານ"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"ກອນການີ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ເຢຍລະມັນອໍໂທກຣາຟີດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"ຄູສໄລ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"ຕົວເລກລິມບູ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ຈີນແບບດັ້ງເດີມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"ຊຸນດາ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ກາແປຣ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ຕົວເລກຂະແມ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"ເທຮຸທາ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ໄອໂລໂກ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"ວາເລັນເຊຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"ໄຊເປຍ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"ຕົວອັກສອນລາຕິນເທີກິກແບບຄົບວົງຈອນ"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ມັນດັງ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ຕົວເລກກົວມູຄິ"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ຫລາຍພາສາ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"ພິວເຕີ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ແຄດໂດ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"ລະບົບການວັດແທກ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ຄຣິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ກລາໂກລິຕິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ກິນເບີເທັດ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"ອັກຂະລະວິທີສາມັນ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"ເຊໂຮກີ"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"ຄາຣິບ"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"ຄາຢູກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ຕົວເລກທາມິວ"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ກາຣາໄຊ-ບານກາ"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ອິນກັຊ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ດາຣີ"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"ກາເຣລຽນ"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ອີຟິກ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ຕົວເລກ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"ກູຣູກ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ຊຳບາລ້າ"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"ເທລູກູ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ບາເຟຍ"_s)
		})
	}));
	return data;
}

LocaleNames_lo::LocaleNames_lo() {
}

$Class* LocaleNames_lo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lo, name, initialize, &_LocaleNames_lo_ClassInfo_, allocate$LocaleNames_lo);
	return class$;
}

$Class* LocaleNames_lo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun