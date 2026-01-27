#include <sun/util/resources/ext/LocaleNames_vi.h>

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

$MethodInfo _LocaleNames_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_vi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_vi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_vi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_vi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_vi_MethodInfo_
};

$Object* allocate$LocaleNames_vi($Class* clazz) {
	return $of($alloc(LocaleNames_vi));
}

void LocaleNames_vi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Các Tiểu Vương quốc A-rập Thống nhất"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Áp-ga-ni-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"An-ti-gu-a và Ba-bu-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("An-ba-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Ác-mê-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ăng-gô-la"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Ác-hen-ti-na"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Áo"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Úc"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Ai-déc-bai-gian"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bô-xni-a Héc-xê-gô-vi-na"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Bác-ba-đốt"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Băng-la-đét"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bỉ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Buốc-ki-na Pha-xô"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bun-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Ba-ren"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Bu-run-đi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Bê-nanh"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Bru-nây"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bô-li-vi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Bra-xin"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Ba-ha-ma"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Bốt-xoa-na"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bê-la-rút"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bê-li-xê"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Ca-na-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Cộng hòa Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Công-gô"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Thụy Sĩ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Bờ Biển Ngà"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Chi-lê"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Ca-mơ-run"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Trung Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Cô-lôm-bi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Cốt-xta Ri-ca"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cu Ba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Cáp-ve"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Síp"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Cộng hòa Séc"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Đức"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Gi-bu-ti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Đan Mạch"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"An-giê-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ê-cu-a-đo"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"E-xtô-ni-a"_s)
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
			$of("ER"_s),
			$of(u"Ê-ri-tơ-rê-a"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Tây Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ê-ti-ô-pi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Phần Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Phi-gi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mi-crô-nê-xi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Ga-bông"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Vương quốc Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Grê-na-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gru-di-a"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gha-na"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Găm-bi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Ghi-nê"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ghi-nê Xích-đạo"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Hy Lạp"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Goa-tê-ma-la"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Ghi-nê Bít-xao"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guy-a-na"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hôn-đu-rát"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Crô-a-ti-a"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Ha-i-ti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hung-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Nam Dương"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ai-len"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("I-xra-en"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Ấn Độ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"I-rắc"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("I-ran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ai-xơ-len"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Ý"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Ha-mai-ca"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Gióc-đa-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Kê-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Cư-rơ-gư-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Campuchia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Ki-ri-ba-ti"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Cô-mô"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Xan-kít và Nê-vi"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Bắc Triều Tiên"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Hàn Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Cô-oét"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Ka-dắc-xtan"_s)
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
			$of("Xan Lu-xi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lich-ten-xtên"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Xri Lan-ca"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Li-bê-ri-a"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Lê-xô-thô"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Li-tu-a-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lúc-xăm-bua"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Lát-vi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Li-bi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Ma-rốc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mô-na-cô"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Môn-đô-va"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Ma-đa-gát-xca"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Quần đảo Mác-san"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Ma-xê-đô-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Ma-li"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mi-an-ma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mô-ri-ta-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Man-ta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Mô-ri-xơ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Man-đi-vơ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Ma-la-uy"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mê-hi-cô"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Ma-lay-xi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mô-dăm-bích"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Nam-mi-bi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Ni-giê"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Ni-giê-ri-a"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Ni-ca-ra-goa"_s)
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
			$of(u"Nê-pan"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Niu Di-lân"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Ô-man"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Pa-na-ma"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pê-ru"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pa-pu-a Niu Ghi-nê"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Phi-lip-pin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pa-ki-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Bồ Đào Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Pa-ra-goay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Ca-ta"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Ru-ma-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ru-an-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"A-rập Xê-út"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Quần đảo Xô-lô-mông"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Xây-sen"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Xu-đăng"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Thụy Điển"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Xin-ga-po"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Xlô-ven-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Xlô-va-ki-a"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Xi-ê-ra Lê-ôn"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Xan Ma-ri-nô"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Xê-nê-gan"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Xô-ma-li"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"Séc-bia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Xu-ri-nam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Xao Tô-mê và Prin-xi-pê"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"En-san-va-đo"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Xi-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Xoa-di-len"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Sát"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Tô-gô"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Thái Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tát-gi-ki-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tuốc-mê-ni-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuy-ni-di"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Tông-ga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Thổ Nhĩ Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tri-ni-đát và Tô-ba-gô"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tu-va-lu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Đài Loan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tan-da-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("U-crai-na"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"U-gan-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Hoa Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("U-ru-goay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"U-dơ-bê-ki-xtan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Va-ti-căng"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Xan Vin-xen và Grê-na-din"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Vê-nê-zu-ê-la"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Việt Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Va-nu-a-tu"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Xa-moa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y-ê-men"_s)
		}),
		$$new($ObjectArray, {
			$of("YU"_s),
			$of(u"Nam Tư"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Nam Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Dăm-bi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Dim-ba-bu-ê"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Tiếng A-rập"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Tiếng Ai-déc-bai-gian"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Tiếng Bê-la-rút"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Tiếng Bun-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tiếng Tây Tạng"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Tiếng Ca-ta-lăng"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Tiếng Séc"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Tiếng Đan Mạch"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Tiếng Đức"_s)
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
			$of("es"_s),
			$of(u"Tiếng Tây Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Tiếng E-xtô-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Tiếng Ba Tư"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Tiếng Phần Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Tiếng Pháp"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Tiếng Ai-len"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Tiếng Hê-brơ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Tiếng Hin-đi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Tiếng Crô-a-ti-a"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Tiếng Hung-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Tiếng Ác-mê-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Tiếng Khoa Học Quốc Tế"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Tiếng In-đô-nê-xia"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Tiếng Ai-xơ-len"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Tiếng Ý"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Tiếng Nhật"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Tiếng Gia-va"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Tiếng Campuchia"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"Tiếng Kan-na-đa"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Tiếng Hàn Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Tiếng La-tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"Tiếng Lào"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Tiếng Lít-va"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Tiếng Lát-vi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Tiếng Ma-xê-đô-ni-a"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Tiếng Mông Cổ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Tiếng Ma-lay-xi-a"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Tiếng Nê-pan"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Tiếng Hà Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Tiếng Na Uy"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Tiếng Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Tiếng Bồ Đào Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Tiếng Ru-ma-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Tiếng Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Tiếng Phạn"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Tiếng Xlô-vác"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Tiếng Xlô-ven"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Tiếng Xô-ma-li"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Tiếng An-ba-ni"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Tiếng Séc-bi"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Tiếng Thụy Điển"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tiếng Thái"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Tiếng Thổ Nhĩ Kỳ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Tiếng U-crai-na"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Tiếng U-dơ-bếch"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Tiếng Việt"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Tiếng Y-đit"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Tiếng Trung Quốc"_s)
		})
	});
}

LocaleNames_vi::LocaleNames_vi() {
}

$Class* LocaleNames_vi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vi, name, initialize, &_LocaleNames_vi_ClassInfo_, allocate$LocaleNames_vi);
	return class$;
}

$Class* LocaleNames_vi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun