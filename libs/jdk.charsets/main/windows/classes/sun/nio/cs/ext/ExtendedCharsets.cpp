#include <sun/nio/cs/ext/ExtendedCharsets.h>

#include <sun/nio/cs/ext/AbstractCharsetProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCharsetProvider = ::sun::nio::cs::ext::AbstractCharsetProvider;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ExtendedCharsets_FieldInfo_[] = {
	{"instance", "Lsun/nio/cs/ext/ExtendedCharsets;", nullptr, $STATIC | $VOLATILE, $staticField(ExtendedCharsets, instance)},
	{}
};

$MethodInfo _ExtendedCharsets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedCharsets::*)()>(&ExtendedCharsets::init$))},
	{"aliasesFor", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&ExtendedCharsets::aliasesFor))},
	{}
};

$ClassInfo _ExtendedCharsets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ExtendedCharsets",
	"sun.nio.cs.ext.AbstractCharsetProvider",
	nullptr,
	_ExtendedCharsets_FieldInfo_,
	_ExtendedCharsets_MethodInfo_
};

$Object* allocate$ExtendedCharsets($Class* clazz) {
	return $of($alloc(ExtendedCharsets));
}

$volatile(ExtendedCharsets*) ExtendedCharsets::instance = nullptr;

void ExtendedCharsets::init$() {
	$useLocalCurrentObjectStackCache();
	$AbstractCharsetProvider::init$("sun.nio.cs.ext"_s);
	charset("Big5"_s, "Big5"_s, $$new($StringArray, {"csBig5"_s}));
	charset("x-EUC-TW"_s, "EUC_TW"_s, $$new($StringArray, {
		"euc_tw"_s,
		"euctw"_s,
		"cns11643"_s,
		"EUC-TW"_s
	}));
	charset("Big5-HKSCS"_s, "Big5_HKSCS"_s, $$new($StringArray, {
		"Big5_HKSCS"_s,
		"big5hk"_s,
		"big5-hkscs"_s,
		"big5hkscs"_s
	}));
	charset("x-Big5-HKSCS-2001"_s, "Big5_HKSCS_2001"_s, $$new($StringArray, {
		"Big5_HKSCS_2001"_s,
		"big5hk-2001"_s,
		"big5-hkscs-2001"_s,
		"big5-hkscs:unicode3.0"_s,
		"big5hkscs-2001"_s
	}));
	charset("x-Big5-Solaris"_s, "Big5_Solaris"_s, $$new($StringArray, {"Big5_Solaris"_s}));
	charset("GB2312"_s, "EUC_CN"_s, $$new($StringArray, {
		"gb2312"_s,
		"gb2312-80"_s,
		"gb2312-1980"_s,
		"euc-cn"_s,
		"euccn"_s,
		"x-EUC-CN"_s,
		"EUC_CN"_s
	}));
	charset("x-JIS0208"_s, "JIS_X_0208"_s, $$new($StringArray, {
		"JIS0208"_s,
		"JIS_C6226-1983"_s,
		"iso-ir-87"_s,
		"x0208"_s,
		"JIS_X0208-1983"_s,
		"csISO87JISX0208"_s
	}));
	charset("JIS_X0212-1990"_s, "JIS_X_0212"_s, $$new($StringArray, {
		"JIS0212"_s,
		"jis_x0212-1990"_s,
		"x0212"_s,
		"iso-ir-159"_s,
		"csISO159JISX02121990"_s
	}));
	charset("x-SJIS_0213"_s, "SJIS_0213"_s, $$new($StringArray, {
		"sjis-0213"_s,
		"sjis_0213"_s,
		"sjis:2004"_s,
		"sjis_0213:2004"_s,
		"shift_jis_0213:2004"_s,
		"shift_jis:2004"_s
	}));
	charset("x-MS932_0213"_s, "MS932_0213"_s, $$new($StringArray, {
		"MS932-0213"_s,
		"MS932_0213"_s,
		"MS932:2004"_s,
		"windows-932-0213"_s,
		"windows-932:2004"_s
	}));
	charset("EUC-JP"_s, "EUC_JP"_s, $$new($StringArray, {
		"euc_jp"_s,
		"eucjis"_s,
		"eucjp"_s,
		"Extended_UNIX_Code_Packed_Format_for_Japanese"_s,
		"csEUCPkdFmtjapanese"_s,
		"x-euc-jp"_s,
		"x-eucjp"_s
	}));
	charset("x-euc-jp-linux"_s, "EUC_JP_LINUX"_s, $$new($StringArray, {
		"euc_jp_linux"_s,
		"euc-jp-linux"_s
	}));
	charset("x-eucJP-Open"_s, "EUC_JP_Open"_s, $$new($StringArray, {
		"EUC_JP_Solaris"_s,
		"eucJP-open"_s
	}));
	charset("x-PCK"_s, "PCK"_s, $$new($StringArray, {"pck"_s}));
	charset("ISO-2022-JP"_s, "ISO2022_JP"_s, $$new($StringArray, {
		"iso2022jp"_s,
		"jis"_s,
		"csISO2022JP"_s,
		"jis_encoding"_s,
		"csjisencoding"_s
	}));
	charset("ISO-2022-JP-2"_s, "ISO2022_JP_2"_s, $$new($StringArray, {
		"csISO2022JP2"_s,
		"iso2022jp2"_s
	}));
	charset("x-windows-50221"_s, "MS50221"_s, $$new($StringArray, {
		"ms50221"_s,
		"cp50221"_s
	}));
	charset("x-windows-50220"_s, "MS50220"_s, $$new($StringArray, {
		"ms50220"_s,
		"cp50220"_s
	}));
	charset("x-windows-iso2022jp"_s, "MSISO2022JP"_s, $$new($StringArray, {"windows-iso2022jp"_s}));
	charset("x-JISAutoDetect"_s, "JISAutoDetect"_s, $$new($StringArray, {"JISAutoDetect"_s}));
	charset("EUC-KR"_s, "EUC_KR"_s, $$new($StringArray, {
		"euc_kr"_s,
		"ksc5601"_s,
		"euckr"_s,
		"ks_c_5601-1987"_s,
		"ksc5601-1987"_s,
		"ksc5601_1987"_s,
		"ksc_5601"_s,
		"csEUCKR"_s,
		"5601"_s
	}));
	charset("ISO-2022-KR"_s, "ISO2022_KR"_s, $$new($StringArray, {
		"ISO2022KR"_s,
		"csISO2022KR"_s
	}));
	charset("ISO-2022-CN"_s, "ISO2022_CN"_s, $$new($StringArray, {
		"ISO2022CN"_s,
		"csISO2022CN"_s
	}));
	charset("x-ISO-2022-CN-CNS"_s, "ISO2022_CN_CNS"_s, $$new($StringArray, {
		"ISO2022CN_CNS"_s,
		"ISO-2022-CN-CNS"_s
	}));
	charset("x-ISO-2022-CN-GB"_s, "ISO2022_CN_GB"_s, $$new($StringArray, {
		"ISO2022CN_GB"_s,
		"ISO-2022-CN-GB"_s
	}));
	charset("x-ISCII91"_s, "ISCII91"_s, $$new($StringArray, {
		"iscii"_s,
		"ST_SEV_358-88"_s,
		"iso-ir-153"_s,
		"csISO153GOST1976874"_s,
		"ISCII91"_s
	}));
	charset("ISO-8859-3"_s, "ISO_8859_3"_s, $$new($StringArray, {
		"iso8859_3"_s,
		"8859_3"_s,
		"ISO_8859-3:1988"_s,
		"iso-ir-109"_s,
		"ISO_8859-3"_s,
		"ISO8859-3"_s,
		"latin3"_s,
		"l3"_s,
		"ibm913"_s,
		"ibm-913"_s,
		"cp913"_s,
		"913"_s,
		"csISOLatin3"_s
	}));
	charset("ISO-8859-6"_s, "ISO_8859_6"_s, $$new($StringArray, {
		"iso8859_6"_s,
		"8859_6"_s,
		"iso-ir-127"_s,
		"ISO_8859-6"_s,
		"ISO_8859-6:1987"_s,
		"ISO8859-6"_s,
		"ECMA-114"_s,
		"ASMO-708"_s,
		"arabic"_s,
		"ibm1089"_s,
		"ibm-1089"_s,
		"cp1089"_s,
		"1089"_s,
		"csISOLatinArabic"_s
	}));
	charset("ISO-8859-8"_s, "ISO_8859_8"_s, $$new($StringArray, {
		"iso8859_8"_s,
		"8859_8"_s,
		"iso-ir-138"_s,
		"ISO_8859-8"_s,
		"ISO_8859-8:1988"_s,
		"ISO8859-8"_s,
		"cp916"_s,
		"916"_s,
		"ibm916"_s,
		"ibm-916"_s,
		"hebrew"_s,
		"csISOLatinHebrew"_s
	}));
	charset("x-iso-8859-11"_s, "ISO_8859_11"_s, $$new($StringArray, {
		"iso-8859-11"_s,
		"iso8859_11"_s
	}));
	charset("TIS-620"_s, "TIS_620"_s, $$new($StringArray, {
		"tis620"_s,
		"tis620.2533"_s
	}));
	charset("x-IBM942"_s, "IBM942"_s, $$new($StringArray, {
		"cp942"_s,
		"ibm942"_s,
		"ibm-942"_s,
		"942"_s
	}));
	charset("x-IBM942C"_s, "IBM942C"_s, $$new($StringArray, {
		"cp942C"_s,
		"ibm942C"_s,
		"ibm-942C"_s,
		"942C"_s,
		"cp932"_s,
		"ibm932"_s,
		"ibm-932"_s,
		"932"_s,
		"x-ibm932"_s
	}));
	charset("x-IBM943"_s, "IBM943"_s, $$new($StringArray, {
		"cp943"_s,
		"ibm943"_s,
		"ibm-943"_s,
		"943"_s
	}));
	charset("x-IBM943C"_s, "IBM943C"_s, $$new($StringArray, {
		"cp943C"_s,
		"ibm943C"_s,
		"ibm-943C"_s,
		"943C"_s
	}));
	charset("x-IBM948"_s, "IBM948"_s, $$new($StringArray, {
		"cp948"_s,
		"ibm948"_s,
		"ibm-948"_s,
		"948"_s
	}));
	charset("x-IBM950"_s, "IBM950"_s, $$new($StringArray, {
		"cp950"_s,
		"ibm950"_s,
		"ibm-950"_s,
		"950"_s
	}));
	charset("x-IBM930"_s, "IBM930"_s, $$new($StringArray, {
		"cp930"_s,
		"ibm930"_s,
		"ibm-930"_s,
		"930"_s
	}));
	charset("x-IBM935"_s, "IBM935"_s, $$new($StringArray, {
		"cp935"_s,
		"ibm935"_s,
		"ibm-935"_s,
		"935"_s
	}));
	charset("x-IBM937"_s, "IBM937"_s, $$new($StringArray, {
		"cp937"_s,
		"ibm937"_s,
		"ibm-937"_s,
		"937"_s
	}));
	charset("x-IBM856"_s, "IBM856"_s, $$new($StringArray, {
		"cp856"_s,
		"ibm-856"_s,
		"ibm856"_s,
		"856"_s
	}));
	charset("IBM860"_s, "IBM860"_s, $$new($StringArray, {
		"cp860"_s,
		"ibm860"_s,
		"ibm-860"_s,
		"860"_s,
		"csIBM860"_s
	}));
	charset("IBM861"_s, "IBM861"_s, $$new($StringArray, {
		"cp861"_s,
		"ibm861"_s,
		"ibm-861"_s,
		"861"_s,
		"csIBM861"_s,
		"cp-is"_s
	}));
	charset("IBM863"_s, "IBM863"_s, $$new($StringArray, {
		"cp863"_s,
		"ibm863"_s,
		"ibm-863"_s,
		"863"_s,
		"csIBM863"_s
	}));
	charset("IBM864"_s, "IBM864"_s, $$new($StringArray, {
		"cp864"_s,
		"ibm864"_s,
		"ibm-864"_s,
		"864"_s,
		"csIBM864"_s
	}));
	charset("IBM865"_s, "IBM865"_s, $$new($StringArray, {
		"cp865"_s,
		"ibm865"_s,
		"ibm-865"_s,
		"865"_s,
		"csIBM865"_s
	}));
	charset("IBM868"_s, "IBM868"_s, $$new($StringArray, {
		"cp868"_s,
		"ibm868"_s,
		"ibm-868"_s,
		"868"_s,
		"cp-ar"_s,
		"csIBM868"_s
	}));
	charset("IBM869"_s, "IBM869"_s, $$new($StringArray, {
		"cp869"_s,
		"ibm869"_s,
		"ibm-869"_s,
		"869"_s,
		"cp-gr"_s,
		"csIBM869"_s
	}));
	charset("x-IBM921"_s, "IBM921"_s, $$new($StringArray, {
		"cp921"_s,
		"ibm921"_s,
		"ibm-921"_s,
		"921"_s
	}));
	charset("x-IBM1006"_s, "IBM1006"_s, $$new($StringArray, {
		"cp1006"_s,
		"ibm1006"_s,
		"ibm-1006"_s,
		"1006"_s
	}));
	charset("x-IBM1046"_s, "IBM1046"_s, $$new($StringArray, {
		"cp1046"_s,
		"ibm1046"_s,
		"ibm-1046"_s,
		"1046"_s
	}));
	charset("IBM1047"_s, "IBM1047"_s, $$new($StringArray, {
		"cp1047"_s,
		"ibm-1047"_s,
		"1047"_s
	}));
	charset("x-IBM1098"_s, "IBM1098"_s, $$new($StringArray, {
		"cp1098"_s,
		"ibm1098"_s,
		"ibm-1098"_s,
		"1098"_s
	}));
	charset("IBM037"_s, "IBM037"_s, $$new($StringArray, {
		"cp037"_s,
		"ibm037"_s,
		"ebcdic-cp-us"_s,
		"ebcdic-cp-ca"_s,
		"ebcdic-cp-wt"_s,
		"ebcdic-cp-nl"_s,
		"csIBM037"_s,
		"cs-ebcdic-cp-us"_s,
		"cs-ebcdic-cp-ca"_s,
		"cs-ebcdic-cp-wt"_s,
		"cs-ebcdic-cp-nl"_s,
		"ibm-037"_s,
		"ibm-37"_s,
		"cpibm37"_s,
		"037"_s
	}));
	charset("x-IBM1025"_s, "IBM1025"_s, $$new($StringArray, {
		"cp1025"_s,
		"ibm1025"_s,
		"ibm-1025"_s,
		"1025"_s
	}));
	charset("IBM1026"_s, "IBM1026"_s, $$new($StringArray, {
		"cp1026"_s,
		"ibm1026"_s,
		"ibm-1026"_s,
		"1026"_s
	}));
	charset("x-IBM1112"_s, "IBM1112"_s, $$new($StringArray, {
		"cp1112"_s,
		"ibm1112"_s,
		"ibm-1112"_s,
		"1112"_s
	}));
	charset("x-IBM1122"_s, "IBM1122"_s, $$new($StringArray, {
		"cp1122"_s,
		"ibm1122"_s,
		"ibm-1122"_s,
		"1122"_s
	}));
	charset("x-IBM1123"_s, "IBM1123"_s, $$new($StringArray, {
		"cp1123"_s,
		"ibm1123"_s,
		"ibm-1123"_s,
		"1123"_s
	}));
	charset("x-IBM1124"_s, "IBM1124"_s, $$new($StringArray, {
		"cp1124"_s,
		"ibm1124"_s,
		"ibm-1124"_s,
		"1124"_s
	}));
	charset("x-IBM1129"_s, "IBM1129"_s, $$new($StringArray, {
		"cp1129"_s,
		"ibm1129"_s,
		"ibm-1129"_s,
		"1129"_s
	}));
	charset("x-IBM1364"_s, "IBM1364"_s, $$new($StringArray, {
		"cp1364"_s,
		"ibm1364"_s,
		"ibm-1364"_s,
		"1364"_s
	}));
	charset("IBM273"_s, "IBM273"_s, $$new($StringArray, {
		"cp273"_s,
		"ibm273"_s,
		"ibm-273"_s,
		"273"_s
	}));
	charset("IBM277"_s, "IBM277"_s, $$new($StringArray, {
		"cp277"_s,
		"ibm277"_s,
		"ibm-277"_s,
		"277"_s
	}));
	charset("IBM278"_s, "IBM278"_s, $$new($StringArray, {
		"cp278"_s,
		"ibm278"_s,
		"ibm-278"_s,
		"278"_s,
		"ebcdic-sv"_s,
		"ebcdic-cp-se"_s,
		"csIBM278"_s
	}));
	charset("IBM280"_s, "IBM280"_s, $$new($StringArray, {
		"cp280"_s,
		"ibm280"_s,
		"ibm-280"_s,
		"280"_s
	}));
	charset("IBM284"_s, "IBM284"_s, $$new($StringArray, {
		"cp284"_s,
		"ibm284"_s,
		"ibm-284"_s,
		"284"_s,
		"csIBM284"_s,
		"cpibm284"_s
	}));
	charset("IBM285"_s, "IBM285"_s, $$new($StringArray, {
		"cp285"_s,
		"ibm285"_s,
		"ibm-285"_s,
		"285"_s,
		"ebcdic-cp-gb"_s,
		"ebcdic-gb"_s,
		"csIBM285"_s,
		"cpibm285"_s
	}));
	charset("IBM297"_s, "IBM297"_s, $$new($StringArray, {
		"cp297"_s,
		"ibm297"_s,
		"ibm-297"_s,
		"297"_s,
		"ebcdic-cp-fr"_s,
		"cpibm297"_s,
		"csIBM297"_s
	}));
	charset("IBM420"_s, "IBM420"_s, $$new($StringArray, {
		"cp420"_s,
		"ibm420"_s,
		"ibm-420"_s,
		"ebcdic-cp-ar1"_s,
		"420"_s,
		"csIBM420"_s
	}));
	charset("IBM424"_s, "IBM424"_s, $$new($StringArray, {
		"cp424"_s,
		"ibm424"_s,
		"ibm-424"_s,
		"424"_s,
		"ebcdic-cp-he"_s,
		"csIBM424"_s
	}));
	charset("IBM500"_s, "IBM500"_s, $$new($StringArray, {
		"cp500"_s,
		"ibm500"_s,
		"ibm-500"_s,
		"500"_s,
		"ebcdic-cp-ch"_s,
		"ebcdic-cp-bh"_s,
		"csIBM500"_s
	}));
	charset("x-IBM833"_s, "IBM833"_s, $$new($StringArray, {
		"cp833"_s,
		"ibm833"_s,
		"ibm-833"_s,
		"833"_s
	}));
	charset("x-IBM834"_s, "IBM834"_s, $$new($StringArray, {
		"cp834"_s,
		"ibm834"_s,
		"834"_s,
		"ibm-834"_s
	}));
	charset("IBM-Thai"_s, "IBM838"_s, $$new($StringArray, {
		"cp838"_s,
		"ibm838"_s,
		"ibm-838"_s,
		"838"_s
	}));
	charset("IBM870"_s, "IBM870"_s, $$new($StringArray, {
		"cp870"_s,
		"ibm870"_s,
		"ibm-870"_s,
		"870"_s,
		"ebcdic-cp-roece"_s,
		"ebcdic-cp-yu"_s,
		"csIBM870"_s
	}));
	charset("IBM871"_s, "IBM871"_s, $$new($StringArray, {
		"cp871"_s,
		"ibm871"_s,
		"ibm-871"_s,
		"871"_s,
		"ebcdic-cp-is"_s,
		"csIBM871"_s
	}));
	charset("x-IBM875"_s, "IBM875"_s, $$new($StringArray, {
		"cp875"_s,
		"ibm875"_s,
		"ibm-875"_s,
		"875"_s
	}));
	charset("IBM918"_s, "IBM918"_s, $$new($StringArray, {
		"cp918"_s,
		"ibm-918"_s,
		"918"_s,
		"ebcdic-cp-ar2"_s
	}));
	charset("x-IBM922"_s, "IBM922"_s, $$new($StringArray, {
		"cp922"_s,
		"ibm922"_s,
		"ibm-922"_s,
		"922"_s
	}));
	charset("x-IBM1097"_s, "IBM1097"_s, $$new($StringArray, {
		"cp1097"_s,
		"ibm1097"_s,
		"ibm-1097"_s,
		"1097"_s
	}));
	charset("x-IBM949"_s, "IBM949"_s, $$new($StringArray, {
		"cp949"_s,
		"ibm949"_s,
		"ibm-949"_s,
		"949"_s
	}));
	charset("x-IBM949C"_s, "IBM949C"_s, $$new($StringArray, {
		"cp949C"_s,
		"ibm949C"_s,
		"ibm-949C"_s,
		"949C"_s
	}));
	charset("x-IBM939"_s, "IBM939"_s, $$new($StringArray, {
		"cp939"_s,
		"ibm939"_s,
		"ibm-939"_s,
		"939"_s
	}));
	charset("x-IBM933"_s, "IBM933"_s, $$new($StringArray, {
		"cp933"_s,
		"ibm933"_s,
		"ibm-933"_s,
		"933"_s
	}));
	charset("x-IBM1381"_s, "IBM1381"_s, $$new($StringArray, {
		"cp1381"_s,
		"ibm1381"_s,
		"ibm-1381"_s,
		"1381"_s
	}));
	charset("x-IBM1383"_s, "IBM1383"_s, $$new($StringArray, {
		"cp1383"_s,
		"ibm1383"_s,
		"ibm-1383"_s,
		"1383"_s,
		"ibmeuccn"_s,
		"ibm-euccn"_s,
		"cpeuccn"_s
	}));
	charset("x-IBM970"_s, "IBM970"_s, $$new($StringArray, {
		"cp970"_s,
		"ibm970"_s,
		"ibm-970"_s,
		"ibm-eucKR"_s,
		"970"_s
	}));
	charset("x-IBM964"_s, "IBM964"_s, $$new($StringArray, {
		"cp964"_s,
		"ibm964"_s,
		"ibm-964"_s,
		"ibm-euctw"_s,
		"964"_s
	}));
	charset("x-IBM29626C"_s, "IBM29626C"_s, $$new($StringArray, {
		"cp29626c"_s,
		"ibm29626c"_s,
		"ibm-29626c"_s,
		"29626c"_s,
		"ibm-eucjp"_s
	}));
	charset("x-IBM33722"_s, "IBM33722"_s, $$new($StringArray, {
		"cp33722"_s,
		"ibm33722"_s,
		"ibm-33722"_s,
		"ibm-5050"_s,
		"ibm-33722_vascii_vpua"_s,
		"33722"_s
	}));
	charset("IBM01140"_s, "IBM1140"_s, $$new($StringArray, {
		"cp1140"_s,
		"ccsid01140"_s,
		"cp01140"_s,
		"1140"_s,
		"ebcdic-us-037+euro"_s,
		"ibm1140"_s,
		"ibm-1140"_s
	}));
	charset("IBM01141"_s, "IBM1141"_s, $$new($StringArray, {
		"cp1141"_s,
		"ccsid01141"_s,
		"cp01141"_s,
		"1141"_s,
		"ebcdic-de-273+euro"_s,
		"ibm1141"_s,
		"ibm-1141"_s
	}));
	charset("IBM01142"_s, "IBM1142"_s, $$new($StringArray, {
		"cp1142"_s,
		"ccsid01142"_s,
		"cp01142"_s,
		"1142"_s,
		"ebcdic-no-277+euro"_s,
		"ebcdic-dk-277+euro"_s,
		"ibm1142"_s,
		"ibm-1142"_s
	}));
	charset("IBM01143"_s, "IBM1143"_s, $$new($StringArray, {
		"cp1143"_s,
		"ccsid01143"_s,
		"cp01143"_s,
		"1143"_s,
		"ebcdic-fi-278+euro"_s,
		"ebcdic-se-278+euro"_s,
		"ibm1143"_s,
		"ibm-1143"_s
	}));
	charset("IBM01144"_s, "IBM1144"_s, $$new($StringArray, {
		"cp1144"_s,
		"ccsid01144"_s,
		"cp01144"_s,
		"1144"_s,
		"ebcdic-it-280+euro"_s,
		"ibm1144"_s,
		"ibm-1144"_s
	}));
	charset("IBM01145"_s, "IBM1145"_s, $$new($StringArray, {
		"cp1145"_s,
		"ccsid01145"_s,
		"cp01145"_s,
		"1145"_s,
		"ebcdic-es-284+euro"_s,
		"ibm1145"_s,
		"ibm-1145"_s
	}));
	charset("IBM01146"_s, "IBM1146"_s, $$new($StringArray, {
		"cp1146"_s,
		"ccsid01146"_s,
		"cp01146"_s,
		"1146"_s,
		"ebcdic-gb-285+euro"_s,
		"ibm1146"_s,
		"ibm-1146"_s
	}));
	charset("IBM01147"_s, "IBM1147"_s, $$new($StringArray, {
		"cp1147"_s,
		"ccsid01147"_s,
		"cp01147"_s,
		"1147"_s,
		"ebcdic-fr-277+euro"_s,
		"ibm1147"_s,
		"ibm-1147"_s
	}));
	charset("IBM01148"_s, "IBM1148"_s, $$new($StringArray, {
		"cp1148"_s,
		"ccsid01148"_s,
		"cp01148"_s,
		"1148"_s,
		"ebcdic-international-500+euro"_s,
		"ibm1148"_s,
		"ibm-1148"_s
	}));
	charset("IBM01149"_s, "IBM1149"_s, $$new($StringArray, {
		"cp1149"_s,
		"ccsid01149"_s,
		"cp01149"_s,
		"1149"_s,
		"ebcdic-s-871+euro"_s,
		"ibm1149"_s,
		"ibm-1149"_s
	}));
	charset("IBM290"_s, "IBM290"_s, $$new($StringArray, {
		"cp290"_s,
		"ibm290"_s,
		"ibm-290"_s,
		"csIBM290"_s,
		"EBCDIC-JP-kana"_s,
		"290"_s
	}));
	charset("x-IBM1166"_s, "IBM1166"_s, $$new($StringArray, {
		"cp1166"_s,
		"ibm1166"_s,
		"ibm-1166"_s,
		"1166"_s
	}));
	charset("x-IBM300"_s, "IBM300"_s, $$new($StringArray, {
		"cp300"_s,
		"ibm300"_s,
		"ibm-300"_s,
		"300"_s
	}));
	charset("x-MacRoman"_s, "MacRoman"_s, $$new($StringArray, {"MacRoman"_s}));
	charset("x-MacCentralEurope"_s, "MacCentralEurope"_s, $$new($StringArray, {"MacCentralEurope"_s}));
	charset("x-MacCroatian"_s, "MacCroatian"_s, $$new($StringArray, {"MacCroatian"_s}));
	charset("x-MacGreek"_s, "MacGreek"_s, $$new($StringArray, {"MacGreek"_s}));
	charset("x-MacCyrillic"_s, "MacCyrillic"_s, $$new($StringArray, {"MacCyrillic"_s}));
	charset("x-MacUkraine"_s, "MacUkraine"_s, $$new($StringArray, {"MacUkraine"_s}));
	charset("x-MacTurkish"_s, "MacTurkish"_s, $$new($StringArray, {"MacTurkish"_s}));
	charset("x-MacArabic"_s, "MacArabic"_s, $$new($StringArray, {"MacArabic"_s}));
	charset("x-MacHebrew"_s, "MacHebrew"_s, $$new($StringArray, {"MacHebrew"_s}));
	charset("x-MacIceland"_s, "MacIceland"_s, $$new($StringArray, {"MacIceland"_s}));
	charset("x-MacRomania"_s, "MacRomania"_s, $$new($StringArray, {"MacRomania"_s}));
	charset("x-MacThai"_s, "MacThai"_s, $$new($StringArray, {"MacThai"_s}));
	charset("x-MacSymbol"_s, "MacSymbol"_s, $$new($StringArray, {"MacSymbol"_s}));
	charset("x-MacDingbat"_s, "MacDingbat"_s, $$new($StringArray, {"MacDingbat"_s}));
	$assignStatic(ExtendedCharsets::instance, this);
}

$StringArray* ExtendedCharsets::aliasesFor($String* charsetName) {
	$init(ExtendedCharsets);
	if (ExtendedCharsets::instance == nullptr) {
		return nullptr;
	}
	return $nc(ExtendedCharsets::instance)->aliases(charsetName);
}

void clinit$ExtendedCharsets($Class* class$) {
	$assignStatic(ExtendedCharsets::instance, nullptr);
}

ExtendedCharsets::ExtendedCharsets() {
}

$Class* ExtendedCharsets::load$($String* name, bool initialize) {
	$loadClass(ExtendedCharsets, name, initialize, &_ExtendedCharsets_ClassInfo_, clinit$ExtendedCharsets, allocate$ExtendedCharsets);
	return class$;
}

$Class* ExtendedCharsets::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun