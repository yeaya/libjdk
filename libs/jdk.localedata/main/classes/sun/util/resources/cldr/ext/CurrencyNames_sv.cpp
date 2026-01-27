#include <sun/util/resources/cldr/ext/CurrencyNames_sv.h>

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

$MethodInfo _CurrencyNames_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sv_MethodInfo_
};

$Object* allocate$CurrencyNames_sv($Class* clazz) {
	return $of($alloc(CurrencyNames_sv));
}

void CurrencyNames_sv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of("AFN"_s)
		}),
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AMD"_s),
			$of("AMD"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("AOA"_s),
			$of("AOA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AUD"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("AZN"_s),
			$of("AZN"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD"_s),
			$of("BAD"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("Bds$"_s)
		}),
		$$new($ObjectArray, {
			$of("BDT"_s),
			$of("BDT"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BHD"_s),
			$of("BHD"_s)
		}),
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("BIF"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BM$"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("BR$"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BS$"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("BTN"_s)
		}),
		$$new($ObjectArray, {
			$of("BWP"_s),
			$of("BWP"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZ$"_s)
		}),
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("CDF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNX"_s),
			$of("CNX"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of("CNY"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of("CVE"_s)
		}),
		$$new($ObjectArray, {
			$of("CYP"_s),
			$of("CYP"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DJF"_s),
			$of("DJF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("Dkr"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("RD$"_s)
		}),
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DZD"_s)
		}),
		$$new($ObjectArray, {
			$of("EEK"_s),
			$of("Ekr"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of(u"EG£"_s)
		}),
		$$new($ObjectArray, {
			$of("ERN"_s),
			$of("ERN"_s)
		}),
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of("GBP"_s)
		}),
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of("GHS"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("GMD"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HKD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("IEP"_s),
			$of(u"IE£"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
		}),
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of("IQD"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of("IRR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISJ"_s),
			$of("ISJ"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("Ikr"_s)
		}),
		$$new($ObjectArray, {
			$of("ITL"_s),
			$of("ITL"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JM$"_s)
		}),
		$$new($ObjectArray, {
			$of("JOD"_s),
			$of("JOD"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of("JPY"_s)
		}),
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("KES"_s)
		}),
		$$new($ObjectArray, {
			$of("KGS"_s),
			$of("KGS"_s)
		}),
		$$new($ObjectArray, {
			$of("KHR"_s),
			$of("KHR"_s)
		}),
		$$new($ObjectArray, {
			$of("KMF"_s),
			$of("KMF"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of("KRW"_s)
		}),
		$$new($ObjectArray, {
			$of("KWD"_s),
			$of("KWD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("KZT"_s),
			$of("KZT"_s)
		}),
		$$new($ObjectArray, {
			$of("LAK"_s),
			$of("LAK"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("LKR"_s),
			$of("LKR"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("LRD"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
		}),
		$$new($ObjectArray, {
			$of("LYD"_s),
			$of("LYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of("MAD"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("MGA"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MKN"_s),
			$of("MKN"_s)
		}),
		$$new($ObjectArray, {
			$of("MMK"_s),
			$of("MMK"_s)
		}),
		$$new($ObjectArray, {
			$of("MNT"_s),
			$of("MNT"_s)
		}),
		$$new($ObjectArray, {
			$of("MOP"_s),
			$of("MOP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("MTL"_s),
			$of("MTL"_s)
		}),
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("MUR"_s)
		}),
		$$new($ObjectArray, {
			$of("MVP"_s),
			$of("MVP"_s)
		}),
		$$new($ObjectArray, {
			$of("MVR"_s),
			$of("MVR"_s)
		}),
		$$new($ObjectArray, {
			$of("MWK"_s),
			$of("MWK"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("MYR"_s)
		}),
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MZN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of("NGN"_s)
		}),
		$$new($ObjectArray, {
			$of("NIC"_s),
			$of("NIC"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("Nkr"_s)
		}),
		$$new($ObjectArray, {
			$of("NPR"_s),
			$of("NPR"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("NZD"_s)
		}),
		$$new($ObjectArray, {
			$of("OMR"_s),
			$of("OMR"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PGK"_s),
			$of("PGK"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of("PHP"_s)
		}),
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("QAR"_s),
			$of("QAR"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RWF"_s),
			$of("RWF"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SCR"_s),
			$of("SCR"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of("SDG"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("kr"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of("SHP"_s)
		}),
		$$new($ObjectArray, {
			$of("SIT"_s),
			$of("SIT"_s)
		}),
		$$new($ObjectArray, {
			$of("SLL"_s),
			$of("SLL"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("SOS"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of("SSP"_s)
		}),
		$$new($ObjectArray, {
			$of("STD"_s),
			$of("STD"_s)
		}),
		$$new($ObjectArray, {
			$of("SYP"_s),
			$of("SYP"_s)
		}),
		$$new($ObjectArray, {
			$of("SZL"_s),
			$of("SZL"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("TJR"_s),
			$of("TJR"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of("TJS"_s)
		}),
		$$new($ObjectArray, {
			$of("TMT"_s),
			$of("TMT"_s)
		}),
		$$new($ObjectArray, {
			$of("TND"_s),
			$of("TND"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("TOP"_s)
		}),
		$$new($ObjectArray, {
			$of("TRL"_s),
			$of("TRL"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("TWD"_s)
		}),
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TZS"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of("UZS"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("VUV"_s),
			$of("VUV"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("XTS"_s),
			$of("XTS"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("YUD"_s),
			$of("YUD"_s)
		}),
		$$new($ObjectArray, {
			$of("YUM"_s),
			$of("YUM"_s)
		}),
		$$new($ObjectArray, {
			$of("YUN"_s),
			$of("YUN"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorransk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("emiratisk dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghansk afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"albansk lek (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albansk lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armenisk dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Antillergulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolansk kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolansk kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolansk ny kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolansk kwanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentinsk austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"argentisk peso (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"argentisk peso (1881–1969)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinsk peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"österrikisk schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("australisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubansk florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajdzjansk manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("azerbajdzjansk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"bosnisk-hercegovinsk dinar (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosnisk-hercegovinsk mark (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bosnisk-hercegovinsk dinar (1994–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladeshisk taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("belgisk franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("belgisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("belgisk franc (finansiell)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"bulgarisk hård lev (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"bulgarisk lev (1952–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bulgarisk lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"bulgarisk lev (1881–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainsk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("bruneisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviansk boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"boliviansk boliviano (1864–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("boliviansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliviansk mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"brasiliansk cruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("brasiliansk cruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"brasiliansk cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brasiliansk real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("brasiliansk cruzado novo"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("brasiliansk cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"brasiliansk cruzeiro (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutanesisk ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmesisk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswansk pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"vitrysk ny rubel (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("vitrysk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"vitrysk rubel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanadensisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongolesisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euro (konvertibelt konto, WIR Bank, Schweiz)"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("schweizisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("franc (konvertibelt konto, WIR Bank, Schweiz)"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"chilensk escudo (1960–1975)"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("chilensk unidad de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilensk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("kinesisk yuan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of("kinesisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("kinesisk yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("colombiansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("colombiansk unidad de valor real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"costarikansk colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"serbisk dinar (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"tjeckoslovakisk krona (–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("kubansk peso (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("cypriotiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("tjeckisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"östtysk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("tysk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("djiboutisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("dansk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algerisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("ecuadoriansk sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("ecuadoriansk unidad de valor constante"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("estnisk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreansk nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("spansk peseta (konto)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("spansk peseta (konvertibelt konto)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("spansk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopisk birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("finsk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fijidollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Falklandspund"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("fransk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("brittiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("georgisk kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("georgisk lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ghanansk cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ghanansk cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambisk dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("guineansk syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekvatorialguineansk ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("grekisk drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalansk quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugisiska Guinea-escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau-peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyanadollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hongkongdollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduransk lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("kroatisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kroatisk kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitisk gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("ungersk forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indonesisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"irländskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("israeliskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"israelisk shekel (1980–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("israelisk ny shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iransk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"isländsk gammal krona"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"isländsk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("italiensk lire"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaicansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordansk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japansk yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyansk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgizisk som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodjansk riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komorisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("nordkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"sydkoreansk hwan (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"sydkoreansk won (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("sydkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("caymansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazakisk tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laotisk kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("srilankesisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesothisk loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litauisk litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("litauisk talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("luxemburgsk franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("luxemburgsk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("luxemburgsk franc (finansiell)"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lettisk lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("lettisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libysk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marockansk dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("marockansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"monegaskisk franc (–2001)"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"moldavisk cupon (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldavisk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madagaskisk ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("madagaskisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonisk denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"makedonisk denar (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("malisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmarisk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"mongolisk tögrög"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("makanesisk pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mauretansk ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("mauretansk ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("maltesisk lire"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("maltesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauritisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of("maldivisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("maldivisk rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexikansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"mexikansk silverpeso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("mexikansk unidad de inversion"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malaysisk ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"moçambikisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"gammal moçambikisk metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"moçambikisk metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigeriansk naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"nicaraguansk córdoba (1998–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nicaraguansk córdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"nederländsk gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norsk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalesisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"nyzeeländsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omansk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamansk balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("peruansk inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruansk sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"peruansk sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papuansk kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filippinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistansk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("polsk zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"polsk zloty (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("portugisisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayansk guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("qatarisk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("rhodesisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"rumänsk leu (1952–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rumänsk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rysk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rysk rubel (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("rwandisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudisk riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Salomondollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychellisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"sudansk dinar (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudanesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"sudanskt pund (1916–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("svensk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singaporiansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("sankthelenskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("slovensk tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("slovakisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierraleonsk leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somalisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamesisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("surinamesisk gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("sydsudanesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"saotomeansk dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("saotomeansk dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("sovjetisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"salvadoransk colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syriskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"swaziländsk lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"thailändsk baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("tadzjikisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("tadzjikisk somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"turkmenistansk manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmenistansk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunisisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongansk paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"östtimoresisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"turkisk lire (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("turkisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidaddollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("taiwanesisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tanzanisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainsk hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("ukrainsk karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"ugandisk shilling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("amerikansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"US-dollar (nästa dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("US-dollar (samma dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("uruguayansk peso en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"uruguayansk peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uyw"_s),
			$of(u"uruguayansk indexenhet för nominell lön"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("uzbekisk sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"venezuelansk bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelansk bolívar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelansk bolívar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamesisk dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"vietnamesisk dong (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatisk vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"västsamoansk tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("centralafrikansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("silver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("guld"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("europeisk kompositenhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"europeisk monetär enhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("europeisk kontoenhet (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("europeisk kontoenhet (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"östkaribisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"IMF särskild dragningsrätt"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("europeisk valutaenhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("fransk guldfranc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"internationella järnvägsunionens franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"västafrikansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET-fond"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("latinamerikansk sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("testvalutaenhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("afrikansk kontoenhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"okänd valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("jemenitisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenitisk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"jugoslavisk dinar (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"jugoslavisk dinar (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"jugoslavisk dinar (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"jugoslavisk dinar (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("sydafrikansk rand (finansiell)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("sydafrikansk rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambisk kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("zairisk ny zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zairisk zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbabwe-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Zimbabwe-dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Zimbabwe-dollar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_sv::CurrencyNames_sv() {
}

$Class* CurrencyNames_sv::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sv, name, initialize, &_CurrencyNames_sv_ClassInfo_, allocate$CurrencyNames_sv);
	return class$;
}

$Class* CurrencyNames_sv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun