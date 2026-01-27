#include <sun/util/resources/cldr/ext/LocaleNames_vi.h>

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

$MethodInfo _LocaleNames_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_vi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_vi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_vi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_vi_MethodInfo_
};

$Object* allocate$LocaleNames_vi($Class* clazz) {
	return $of($alloc(LocaleNames_vi));
}

void LocaleNames_vi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ssy, u"Tiếng Saho"_s);
	$var($String, metaValue_key_nu, u"Số"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Tiếng Cologne"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"Chữ Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"Tiếng Miranda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Ký hiệu"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"Tiếng Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"Tiếng Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"Chữ số Tham Thái Đam"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"Tiếng Emilia"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"Chữ Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Biểu tượng"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Phương ngữ Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"Tiếng Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Tiếng Ai Cập cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Tiếng Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"Chữ Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"Tiếng Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Chữ số Sind"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Tiếng Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"Tiếng Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"Tiếng Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Đảo Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"Tiếng Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"Tiếng Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Chữ số Sinh"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Các Tiểu Vương quốc Ả Rập Thống nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Tiếng Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua và Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Chữ số Mroo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Lịch Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"Tiếng Gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Múi giờ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"Chữ Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Nam Cực"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Chữ Parthia Văn bia"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa thuộc Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Áo"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Tiếng Anh (Mỹ)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Quần đảo Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"Tiếng Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Tiếng Armenia Miền Đông"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia và Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Tiếng Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Tiếng Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bỉ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Tiếng Thượng Giéc-man Trung cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"Tiếng Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"Tiếng Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Ca-ri-bê Hà Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Tiếng Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Đảo Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"Tiếng nói Nhìn thấy được"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Lịch Ba Tư"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Chữ số Do Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Quần đảo Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Tiếng Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Cộng hòa Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Thụy Sĩ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Quần đảo Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"Chữ Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Đảo Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Đảo Giáng Sinh"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Síp"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Chữ số Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Séc"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"Tiếng Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Tiếng Volapük Cổ điển"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Đức"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Tiếng Thượng Giéc-man cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Tiếng Achinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"Tiếng Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"Tiếng Goan Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Chữ số Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Đan Mạch"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"Tiếng Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"Tiếng Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Chữ nổi Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Chữ Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Chữ số Armenia viết thường"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Cộng hòa Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"Tiếng Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"Tiếng Gô-tích"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"Chữ Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Tiếng Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"Tiếng Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"Chữ Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"Tiếng Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Nửa độ rộng"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"Tiếng Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ceuta và Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"Tiếng Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"Tiếng Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"Tiếng Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"Tiếng Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"Tiếng Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ai Cập"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Tây Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"Tiếng Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"Tiếng Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"Tiếng Chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"Biệt ngữ Chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"Tiếng Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"Tiếng Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"Tiếng Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Chữ số Mathbold"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Tiếng Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Tây Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Liên Minh Châu Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"Tiếng Elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Lịch Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Khu vực đồng Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"Tiếng Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Chữ số Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Chữ Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Tiếng Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Phần Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Quần đảo Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Biến thể ngôn ngữ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Quần đảo Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Chữ Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"Chữ Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"Tiếng Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"Tiếng Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"Bảng chữ cái Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Lịch Quốc gia Ấn Độ"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"Tiếng Hy Lạp cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"Tiếng Votic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Vương quốc Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Tiếng Nigeria Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guiana thuộc Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"Chữ Thái Na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"Tiếng Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Tiếng Anh Trung cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guinea Xích Đạo"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Hy Lạp"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Nam Georgia & Quần đảo Nam Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"Chữ số Mathmono"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"Tiếng Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"Tiếng Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Chữ Thái Lặc mới"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Tiếng Kurd Miền Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Không có nội dung ngôn ngữ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"Chữ Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Đặc khu Hành chính Hồng Kông, Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"Chữ Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Quần đảo Heard và McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"Tiếng Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Tiếng Đức (Thụy Sĩ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Lịch Hồi Giáo - Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"Tiếng Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Quần đảo Canary"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"Tiếng Mân Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"Tiếng Ba Tư cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Chữ số Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"Tiếng Napoli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"Phương ngữ Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"Tiếng Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Chữ số Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"Tiếng Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"Chữ Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Chữ Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Đảo Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Ấn Độ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Quy tắc sắp xếp Châu Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Lãnh thổ Ấn Độ Dương thuộc Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Ký hiệu Toán học"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Chữ số Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Máy tính"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Chữ số Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"Số Kirin"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Lịch Hồi Giáo"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Chữ Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"Tiếng Frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Tiếng Pháp từ Cuối thời Trung cổ đến 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Tiếng Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"Chữ Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Tiếng Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"Tiếng Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Chữ số Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"Chữ Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Tiếng Thượng Giéc-man (Thụy Sĩ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Thứ tự sắp xếp theo ngữ âm"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"Tiếng Ingria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Lịch Phật Giáo"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Châu Mỹ La-tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Campuchia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"St. Kitts và Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"Chữ Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Chữ Kế thừa"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Triều Tiên"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Hàn Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Ngữ âm Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Tiếng Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Quần đảo Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Chữ Kirin"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Lào"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Li-băng"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Tiếng Phoenicia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Chữ Kirin Slavơ Nhà thờ cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Tiếng Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Tiếng Hạ Giéc-man"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"Tiếng Akkadia"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Tiếng Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"Tiếng Yupik Miền Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"Chữ Pahlavi Sách"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Chữ Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"Chữ Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"Tiếng Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"Tiếng Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"Tiếng Alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"Tiếng Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Tiếng Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Chữ Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Ma-rốc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"Chữ Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"Tiếng Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Quần đảo Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Tiếng Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Chữ Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Chữ số Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Bắc Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"Chữ số Mathdbl"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Myanmar (Miến Điện)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"Tiếng Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Đặc khu Hành chính Macao, Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"Tiếng Gheg Albani"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Quần đảo Bắc Mariana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"Tiếng Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"Chuyển tự UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Tiếng Altai Miền Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Lịch Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"Chữ Pahlavi Văn bia"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Châu Phi hạ Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Lịch Do Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Thứ tự sắp xếp theo từ điển"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"La Mã hóa Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Phép chính tả Sửa đổi Hợp nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Đảo Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"Tiếng Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"Chữ Pahlavi Thánh ca"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"Chữ Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Hà Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Na Uy"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Chữ Phoenicia"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"Tiếng Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"Tiếng Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Chữ Meroitic Nét thảo"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"Tiếng Romany"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Chữ Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Tiếng Thổ Nhĩ Kỳ Crimean"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Tiếng Anh cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"Tiếng Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Tiếng Pháp Seselwa Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of(u"Chữ số Hmnp"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"Chữ Ba Tư cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Chữ số Hmng"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Lịch Islamic-Civil"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"Tiếng Kashubia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Tiếng Anh (Anh)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polynesia thuộc Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Tiếng Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint Pierre và Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Quần đảo Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Lãnh thổ Palestine"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Chữ Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Bồ Đào Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"Tiếng Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Chữ số Hy Lạp viết thường"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"Tiếng Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Chữ Do Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Tiếng Anh chuẩn tại Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Tiếng Anh Jamaica Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"Tiếng Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Vùng xa xôi thuộc Châu Đại Dương"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"Tiếng Extremadura"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"Tiếng Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Chữ số Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Ngữ âm học UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Chữ số Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"Tiếng Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"Chữ Thái Việt"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Thế giới"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Châu Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"Tiếng Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Bắc Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Nam Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"Tiếng Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"Chữ Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Châu Đại Dương"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"Chữ Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Chữ số Thái Lặc mới"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"Bảng chữ cái Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Chữ Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"Chữ Ugarit"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"Chữ Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ả Rập Xê-út"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Tiếng Pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Chữ Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Quần đảo Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"Tiếng Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Tây Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Trung Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Thụy Điển"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Đông Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Tiếng Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"Chữ Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Bắc Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Kiểu xuống dòng hẹp"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"Chữ số Mymrtlng"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Miền Nam Châu Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard và Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Châu Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"Chữ Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"Chữ Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"Tiếng Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Tiếng Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Chữ số Tamil Truyền thống"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"Tiếng Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Nam Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé và Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Tiếng Ả Rập Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Tiếng Ả Rập Najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"Tiếng Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"Tiếng Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Tiếng Ả Rập Ai Cập"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"Tiếng Yap"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Tiếng Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Hệ đo lường Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Miền Bắc Châu Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Quần đảo Turks và Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Tiếng Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"Chữ Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Lãnh thổ phía Nam Thuộc Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Ngôn ngữ Ký hiệu Mỹ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Thái Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Ca-ri-bê"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"Tiếng Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Tìm kiếm theo Phụ âm Đầu Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"Tiếng Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"Tiếng Volapük Hiện đại"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Thổ Nhĩ Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad và Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Đài Loan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Tiếng Asturias"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"Chữ Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Tiếng Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Chữ viết không xác định"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"Chữ Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"Tiếng Aromania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Đông Á"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"Tiếng Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Tiếng Swahili Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Nam Á"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"Tiếng Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Đông Nam Á"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"Tiếng Khách Gia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Thứ tự sắp xếp theo bính âm"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Nam Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Chữ Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Các tiểu đảo xa của Hoa Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Liên hiệp quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Hoa Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Tiếng Hawaii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"Hàn lâm"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Thứ tự sắp xếp theo tiếng Trung giản thể - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Tiếng Prussia"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Tiếng Tamazight Miền Trung Ma-rốc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Thứ tự sắp xếp theo nét chữ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Tiếng Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Thành Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Tiếng Provençal cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent và Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Quần đảo Virgin thuộc Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Quần đảo Virgin thuộc Hoa Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Việt Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"Tiếng Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"Tiếng Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"Tiếng Na Uy cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Tiếng Armenia Miền Tây"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis và Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Thứ tự sắp xếp truyền thống"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Vùng Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Tiếng Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Tiếng Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Chữ số dùng trong tài chính"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"La mã hóa Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Thứ tự sắp xếp trước đây, để tương thích"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Tiếng Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"Chữ Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Chữ số Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"Tiếng Walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Tiếng Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"Tiếng Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"Tiếng Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"Phép chính tả Chuẩn"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"Chữ số Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Chữ Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Chưa có chữ viết"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"Chữ Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"Tiếng Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"Chữ Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"Chữ Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"Tiếng N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Thứ tự sắp xếp chuẩn"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"Tiếng Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Tiếng Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"Tiếng Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Chữ viết Ký hiệu"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Chữ số Chăm"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Nam Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Chữ số Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Kiểu xuống dòng thoáng"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Chữ Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Chữ số Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Thứ tự sắp xếp Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Chữ Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"La Mã hóa Bính âm"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Vùng không xác định"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Chữ Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Hệ mét"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Lịch ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"Tiếng Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"Tiếng Sotho Miền Bắc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Chữ số Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Tiếng Creole Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"Tiếng Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"Chữ Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"Tiếng Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Tiếng Fiji Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Chữ số dùng trong tài chính của tiếng Trung giản thể"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"Tiếng Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Chữ số Ả Rập - Ấn Độ mở rộng"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Tiếng Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"Tiếng Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Chữ số có độ rộng đầy đủ"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Tiếng Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"Tiếng Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Tiếng Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Chữ tượng hình Maya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Tiếng Bắc Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Thứ tự sắp xếp biểu tượng"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"Chữ Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"Tiếng Newari cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"Tiếng Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Chữ Khơ-me"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Lịch Hồi Giáo - Ả Rập Xê-út"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"Chữ Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"Tiếng Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Chữ số La mã"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Tiếng Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Chữ số Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Tiếng Samaritan Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Phương ngữ Liverpool"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Tiếng Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"Tiếng Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Tiếng Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"Chữ Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Tiếng Judeo-Ba Tư"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Chữ số tự nhiên"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"Tiếng Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Chữ Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"Phương ngữ Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"Tiếng Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Chữ số Tirh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Độ rộng tối đa"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"Tiếng Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"Tiếng Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Tiếng Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"Tiếng Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"Tiếng Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"Tiếng Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"Tiếng Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Tiếng Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"Tiếng H’Mông"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"Tiếng Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"Tiếng Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Tiếng Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"Tiếng Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Tiếng Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"Tiếng Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Chữ số Wara"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Tiếng Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"Tiếng Bavaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Tiếng Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Tiếng Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Tiếng Judeo-Ả Rập"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Tiếng Tây Ban Nha (Châu Âu)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"Tiếng Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"Tiếng Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"Tiếng Sicilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"Tiếng Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Tiếng Abkhazia"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"Chữ Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"Tiếng Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Tiếng Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Tiếng Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Tiếng Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Chữ số Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Tiếng Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Tiếng Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"Tiếng Aragon"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Chữ Ả Rập"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Phương ngữ Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Chữ Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Tiếng Ả Rập"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"Bảng ký hiệu âm tiết Tiếng Nhật"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Tiếng Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Chữ Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"Tiếng Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Chữ Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Tiếng Kurd Miền Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"Tiếng Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Tiếng Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"Chữ Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Phương ngữ Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Tiếng Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Trình tự sắp xếp theo bộ-nét"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Tiếng Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Tiếng Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"Tiếng Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Chữ số Java"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"Tiếng Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Tiếng Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tiếng Tây Tạng"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"Tiếng Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Tiếng Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Tiếng Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"Tiếng Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Chữ Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Chữ số Lào"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"Tiếng Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"Chữ N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"Tiếng Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Tiếng Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"Tiếng Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Tiếng Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Tiếng Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Phép chính tả Sửa đổi"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Tiếng Corsica"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"Chữ Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Tiếng Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Tiếng Séc"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Tiếng Slavơ Nhà thờ"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Tiếng Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Tiếng Wales"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Chữ số Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"Chữ Di"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Tiếng Đan Mạch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Tiếng Bồ Đào Nha (Châu Âu)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Tiếng Đức"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Định dạng tiền tệ chuẩn"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"Tiếng Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"Tiếng Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"Tiếng Jutish"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Chữ Bugin"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"Tiếng Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"Tiếng Ai-len cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Chữ số Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Tiếng Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Tiếng Tây Ban Nha (Mỹ La tinh)"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"Tiếng Betawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Tiếng Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"Tiếng Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Lịch Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"Chữ Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Tiếng Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Chữ số Hy Lạp"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"Tiếng Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"Tiếng Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Kiểu xuống dòng thường"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"Tiếng Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Tiếng Hy Lạp"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Tiếng Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Tiếng Quốc Tế Ngữ"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"Tiếng Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Thứ tự sắp xếp theo tiếng Trung phồn thể - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Tiếng Tây Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Tiếng Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Chữ Hán có chú âm"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Tiếng Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"Chữ Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Chữ Hàn"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Chữ Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Tiếng Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Tiếng Thượng Sorbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Chữ Hán"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"Tiếng Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"Chữ Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Tiếng Ba Tư"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Giản thể"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Chữ số phương Tây"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Phồn thể"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Tiếng Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Tiếng Ả-Rập Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Tiếng Tương"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Tiếng Phần Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Tiếng Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"Tiếng Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Tiếng Tây Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Tiếng Quảng Đông"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Tiếng Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Chuyển tự US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"Tiếng Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Tiếng Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"Tiếng Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Tiếng Frisia"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Tiếng Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Tiếng Gael Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Tiếng Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Tiếng Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"Tiếng Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Ngôn ngữ không xác định"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Lịch Ethiopic Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Tiếng Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Lịch Hồi Giáo - Thiên văn"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Tiếng Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Chữ số Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Tiếng Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Tiếng Do Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Tiếng Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"Tiếng Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"Tiếng Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"Tiếng Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"Tiếng Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Tiếng Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Tiếng Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Tiếng Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Tiếng Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"Tiếng Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"Tiếng Pháp Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Ngữ âm học IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Tiếng Khoa Học Quốc Tế"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Chữ Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Tiếng Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Chữ số Tây Tạng"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"Tiếng Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Tiếng Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Tiếng Di Tứ Xuyên"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Tiếng Pháp Trung cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"Tiếng Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Tiếng Pháp cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"Tiếng Arpitan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"Tiếng Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Tiếng Frisian Miền Đông"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"Tiếng Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"Tiếng Frisia Miền Bắc"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Tiếng Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Tiếng Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"Tiếng Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Tiếng Nhật"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Chữ Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"Chữ Nam Ả Rập cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"Chữ Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"Tiếng Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Chữ số Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"Tiếng Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Tiếng Sami Miền Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Tiếng Java"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Chữ Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Tiếng Madura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Tiếng Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"Tiếng Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Tiếng Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Tiếng Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Tiếng Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Tiếng Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"Tiếng Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"Tiếng Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Tiếng Ngô"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Tiếng Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"Tiếng Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"Tiếng Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"Chữ Gô-tích"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Tiếng Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Tiếng Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"Tiếng Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Tiếng Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Tiếng Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Tiếng Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"Tiếng Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Tiếng Hàn"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"Tiếng Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Tiếng Kashmir"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"Chữ Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"Chữ Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Chữ Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Tiếng Kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"Tiếng Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Tiếng Cornwall"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Tiếng Kyrgyz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"Tiếng Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Tiếng La-tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Tiếng Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Chữ số Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"Tiếng Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"Chữ Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"Tiếng Limburg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Chữ Tây Tạng"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Tiếng Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Tiếng Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"Tiếng Lào"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Hệ đo lường Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Chữ số Hora Thái Đam"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Tiếng Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"Tiếng Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Tiếng Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"Tiếng Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Tiếng Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Tiếng Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Thứ tự sắp xếp unicode mặc định"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Tiếng Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Tiếng Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Tiếng Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Tiếng Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Tiếng Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Tiếng Mã Lai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Tiếng Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Tiếng Miến Điện"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"Chữ Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Chữ Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"Tiếng Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"Tiếng Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Tiếng Hạ Sorbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Chữ Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"Tiếng Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Tìm kiếm mục đích chung"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Tiếng Na Uy (Bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Tiếng Ndebele Miền Bắc"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Tiếng Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"Tiếng Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"Tiếng Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Tiếng Hà Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Tiếng Na Uy (Nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Tiếng Na Uy"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Tiếng Ndebele Miền Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Chữ số Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Tiếng Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Tiếng Kara-Kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Tiếng Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"Tiếng Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Tiếng Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Đa âm"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Tiếng Occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"Tiếng Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"Tiếng Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"Tiếng Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"Tiếng Anh Hiện đại Thời kỳ đầu"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"Tiếng Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Tiếng Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Chữ số Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Tiếng Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"Tiếng Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"Tiếng Dusun Miền Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"Tiếng Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Tiếng Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"La Mã hóa ALA-LC, ấn bản năm 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"Tiếng Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"Tiếng Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Tiếng Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"Tiếng Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Tiếng Punjab"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Tiếng Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"Tiếng Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Phương ngữ Lipovaz của người Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"Tiếng Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"Tiếng Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"Tiếng Bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Tiếng Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Tiếng Hà Lan Trung cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Chữ số Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Lịch Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Tiếng Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Tiếng Bồ Đào Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Tiếng Ai-len Trung cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Thứ tự sắp xếp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Bảng chữ cái Bohorič"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"Tiếng Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Tiếng Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Định dạng tiền tệ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Chữ số N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"Tiếng Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Lịch"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"Chữ Lào"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Tiếng Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Hệ thống 24 giờ (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Hệ thống 24 giờ (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"Tiếng Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Chữ số Myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Tiếng Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"Tiếng Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"Tiếng Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"Chữ Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Tiếng Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Chữ Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Hệ thống 12 giờ (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Hệ thống 12 giờ (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Tiếng Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"Tiếng Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Tiền tệ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Tiếng Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Chữ số Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Chữ số thập phân Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Tiếng Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"Tiếng Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Tiếng Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"Ký hiệu Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Tiếng Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"Tiếng Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"Tiếng Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Chữ tốc ký Duployan"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Tiếng Phạn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Phép chính tả Hợp nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"Tiếng Sardinia"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"Tiếng Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"Tiếng Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Tiếng Sami Miền Bắc"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"Tiếng Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Tiếng Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Tiếng Serbo-Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Tiếng Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Tiếng Sumeria"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Tiếng Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Tiếng Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"Chữ Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Tiếng Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Tiếng Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Tiếng Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Chữ số Ả Rập - Ấn Độ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Tiếng Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Tiếng Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"Tiếng Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Định dạng tiền tệ kế toán"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Tiếng Sotho Miền Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"Chữ Java"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Tiếng Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Phương ngữ Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Tiếng Thụy Điển"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Tiếng Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"Chữ số Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Chữ số dùng trong tài chính của tiếng Trung phồn thể"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"Tiếng Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"Tiếng Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Tiếng Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Châu Á"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Tiếng Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Trung Á"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"Tiếng Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Tây Á"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tiếng Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tiếng Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tiếng Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"Tiếng Bugin"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"Tiếng Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Tiếng Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"Tiếng Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"Tiếng Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tiếng Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"Tiếng Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"Tiếng Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Chữ số Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Tiếng Thổ Nhĩ Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"Tiếng Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Tiếng Cômo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"Chữ Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Tiếng Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"Tiếng Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"Tiếng Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Tiếng Tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Phương ngữ San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Châu Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Đông Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of(u"Chữ số Rohg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"Chữ số Mathsanb"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Bắc Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"Tiếng Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Tây Âu"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Tiếng Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Chữ Italic cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Chữ Hàn Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Chung"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Tiếng Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Lịch Copts"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Tiếng Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Phép chính tả Resian Chuẩn hóa"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Tiếng Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"Tiếng Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Tiếng Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"Tiếng Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Phép chính tả Tiếng Đức năm 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Tiếng Hạ Saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Chữ Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"Tiếng Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"Chữ Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Lịch Trung Hoa Dân Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Tiếng Việt"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"Tiếng Khotan"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Tiếng Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Chu kỳ giờ (12 với 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Phép chính tả Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Tiếng Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"Tiếng Syriac cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"Chữ số Mathsans"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Chữ Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Tiếng Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Chữ số Gonm"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"Tiếng Quechua ở Cao nguyên Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"Tiếng Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"Tiếng Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"Tiếng Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"Tiếng Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(u"Chữ số Gong"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Chữ Hy Lạp"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"Tiếng Cám"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"Chữ Lydia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Chữ hình nêm Sumero-Akkadian"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Tiếng Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Tiếng Tamazight Chuẩn của Ma-rốc"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Tiếng Ả Rập Hiện đại"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Âm tiết Thổ dân Canada Hợp nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"Tiếng Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Chữ Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"Tiếng Mãn Châu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Chữ La-tinh Fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Chữ tượng hình Anatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"Tiếng Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Tiếng Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Chữ La tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Chữ La-tinh Xcốt-len"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Chữ số của tiếng Trung giản thể"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Chữ số tiếng Trung phồn thể"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Tiếng Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Chữ số La Mã viết thường"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Tiếng Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"Phương ngữ Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"Chữ Lycia"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"Tiếng Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"Tiếng Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Chữ nổi Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"Tiếng Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Tiếng Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Tiếng Pháp Hiện đại Thời kỳ đầu"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Tiếng Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"Tiếng Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Chữ Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"Chữ Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Tiếng Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Số truyền thống"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Chữ Tây Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"Tiếng Thổ Nhĩ Kỳ Ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Chữ Estrangelo Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"Tiếng Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"Tiếng Choang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"Chữ Caria"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Tiếng Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Tiếng Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"Chữ Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Chữ Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"Chữ Permic cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Kiểu xuống dòng"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Tiếng Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Thứ tự sắp xếp theo danh bạ điện thoại"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Đơn âm"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Chữ Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"Chữ Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"Tiếng Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Chữ số dùng trong tài chính của tiếng Nhật"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Chữ Chăm"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Tiếng Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Chữ Đông Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"Chữ số Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Chữ Bắc Ả Rập cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Chữ số Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Thứ tự sắp xếp đã sửa đổi"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Chữ Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Chữ Ai Cập bình dân"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Chữ Ai Cập thày tu"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"Chữ Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Tiếng Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Chữ tượng hình Ai Cập"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Chữ Khutsuri Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"Tiếng Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Chữ Hungary cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Tiếng Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Phép chính tả Tiếng Đức Truyền thống"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"Tiếng Kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Chữ số Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Chữ Xu-đăng"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"Tiếng Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Chữ số Khơ-me"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"Chữ Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"Tiếng Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Tiếng Valencia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Chứ Síp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Bảng chữ cái La-tinh Tiếng Turk Hợp nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Tiếng Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Chữ số Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Nhiều Ngôn ngữ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Tiếng Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Hệ thống đo lường"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"Tiếng Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"Chữ Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"Tiếng Gilbert"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Phép chính tả Chung"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Chữ Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"Tiếng Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"Tiếng Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Chữ số Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Tiếng Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"Tiếng Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"Tiếng Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"Tiếng Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"Tiếng Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"Tiếng Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Tiếng Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Chữ Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Tiếng Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_vi::LocaleNames_vi() {
}

$Class* LocaleNames_vi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vi, name, initialize, &_LocaleNames_vi_ClassInfo_, allocate$LocaleNames_vi);
	return class$;
}

$Class* LocaleNames_vi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun