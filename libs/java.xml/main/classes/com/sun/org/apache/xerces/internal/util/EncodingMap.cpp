#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>

#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _EncodingMap_FieldInfo_[] = {
	{"fIANA2JavaMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED | $STATIC | $FINAL, $staticField(EncodingMap, fIANA2JavaMap)},
	{"fJava2IANAMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED | $STATIC | $FINAL, $staticField(EncodingMap, fJava2IANAMap)},
	{}
};

$MethodInfo _EncodingMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EncodingMap, init$, void)},
	{"getIANA2JavaMapping", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodingMap, getIANA2JavaMapping, $String*, $String*)},
	{"getJava2IANAMapping", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodingMap, getJava2IANAMapping, $String*, $String*)},
	{}
};

$ClassInfo _EncodingMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.EncodingMap",
	"java.lang.Object",
	nullptr,
	_EncodingMap_FieldInfo_,
	_EncodingMap_MethodInfo_
};

$Object* allocate$EncodingMap($Class* clazz) {
	return $of($alloc(EncodingMap));
}

$Map* EncodingMap::fIANA2JavaMap = nullptr;
$Map* EncodingMap::fJava2IANAMap = nullptr;

void EncodingMap::init$() {
}

$String* EncodingMap::getIANA2JavaMapping($String* ianaEncoding) {
	$init(EncodingMap);
	return $cast($String, $nc(EncodingMap::fIANA2JavaMap)->get(ianaEncoding));
}

$String* EncodingMap::getJava2IANAMapping($String* javaEncoding) {
	$init(EncodingMap);
	return $cast($String, $nc(EncodingMap::fJava2IANAMap)->get(javaEncoding));
}

void clinit$EncodingMap($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Map, aIANA2JavaMap, $new($HashMap));
		$var($Map, aJava2IANAMap, $new($HashMap));
		aIANA2JavaMap->put("BIG5"_s, "Big5"_s);
		aIANA2JavaMap->put("CSBIG5"_s, "Big5"_s);
		aIANA2JavaMap->put("CP037"_s, "CP037"_s);
		aIANA2JavaMap->put("IBM037"_s, "CP037"_s);
		aIANA2JavaMap->put("CSIBM037"_s, "CP037"_s);
		aIANA2JavaMap->put("EBCDIC-CP-US"_s, "CP037"_s);
		aIANA2JavaMap->put("EBCDIC-CP-CA"_s, "CP037"_s);
		aIANA2JavaMap->put("EBCDIC-CP-NL"_s, "CP037"_s);
		aIANA2JavaMap->put("EBCDIC-CP-WT"_s, "CP037"_s);
		aIANA2JavaMap->put("IBM273"_s, "CP273"_s);
		aIANA2JavaMap->put("CP273"_s, "CP273"_s);
		aIANA2JavaMap->put("CSIBM273"_s, "CP273"_s);
		aIANA2JavaMap->put("IBM277"_s, "CP277"_s);
		aIANA2JavaMap->put("CP277"_s, "CP277"_s);
		aIANA2JavaMap->put("CSIBM277"_s, "CP277"_s);
		aIANA2JavaMap->put("EBCDIC-CP-DK"_s, "CP277"_s);
		aIANA2JavaMap->put("EBCDIC-CP-NO"_s, "CP277"_s);
		aIANA2JavaMap->put("IBM278"_s, "CP278"_s);
		aIANA2JavaMap->put("CP278"_s, "CP278"_s);
		aIANA2JavaMap->put("CSIBM278"_s, "CP278"_s);
		aIANA2JavaMap->put("EBCDIC-CP-FI"_s, "CP278"_s);
		aIANA2JavaMap->put("EBCDIC-CP-SE"_s, "CP278"_s);
		aIANA2JavaMap->put("IBM280"_s, "CP280"_s);
		aIANA2JavaMap->put("CP280"_s, "CP280"_s);
		aIANA2JavaMap->put("CSIBM280"_s, "CP280"_s);
		aIANA2JavaMap->put("EBCDIC-CP-IT"_s, "CP280"_s);
		aIANA2JavaMap->put("IBM284"_s, "CP284"_s);
		aIANA2JavaMap->put("CP284"_s, "CP284"_s);
		aIANA2JavaMap->put("CSIBM284"_s, "CP284"_s);
		aIANA2JavaMap->put("EBCDIC-CP-ES"_s, "CP284"_s);
		aIANA2JavaMap->put("EBCDIC-CP-GB"_s, "CP285"_s);
		aIANA2JavaMap->put("IBM285"_s, "CP285"_s);
		aIANA2JavaMap->put("CP285"_s, "CP285"_s);
		aIANA2JavaMap->put("CSIBM285"_s, "CP285"_s);
		aIANA2JavaMap->put("EBCDIC-JP-KANA"_s, "CP290"_s);
		aIANA2JavaMap->put("IBM290"_s, "CP290"_s);
		aIANA2JavaMap->put("CP290"_s, "CP290"_s);
		aIANA2JavaMap->put("CSIBM290"_s, "CP290"_s);
		aIANA2JavaMap->put("EBCDIC-CP-FR"_s, "CP297"_s);
		aIANA2JavaMap->put("IBM297"_s, "CP297"_s);
		aIANA2JavaMap->put("CP297"_s, "CP297"_s);
		aIANA2JavaMap->put("CSIBM297"_s, "CP297"_s);
		aIANA2JavaMap->put("EBCDIC-CP-AR1"_s, "CP420"_s);
		aIANA2JavaMap->put("IBM420"_s, "CP420"_s);
		aIANA2JavaMap->put("CP420"_s, "CP420"_s);
		aIANA2JavaMap->put("CSIBM420"_s, "CP420"_s);
		aIANA2JavaMap->put("EBCDIC-CP-HE"_s, "CP424"_s);
		aIANA2JavaMap->put("IBM424"_s, "CP424"_s);
		aIANA2JavaMap->put("CP424"_s, "CP424"_s);
		aIANA2JavaMap->put("CSIBM424"_s, "CP424"_s);
		aIANA2JavaMap->put("IBM437"_s, "CP437"_s);
		aIANA2JavaMap->put("437"_s, "CP437"_s);
		aIANA2JavaMap->put("CP437"_s, "CP437"_s);
		aIANA2JavaMap->put("CSPC8CODEPAGE437"_s, "CP437"_s);
		aIANA2JavaMap->put("EBCDIC-CP-CH"_s, "CP500"_s);
		aIANA2JavaMap->put("IBM500"_s, "CP500"_s);
		aIANA2JavaMap->put("CP500"_s, "CP500"_s);
		aIANA2JavaMap->put("CSIBM500"_s, "CP500"_s);
		aIANA2JavaMap->put("EBCDIC-CP-CH"_s, "CP500"_s);
		aIANA2JavaMap->put("EBCDIC-CP-BE"_s, "CP500"_s);
		aIANA2JavaMap->put("IBM775"_s, "CP775"_s);
		aIANA2JavaMap->put("CP775"_s, "CP775"_s);
		aIANA2JavaMap->put("CSPC775BALTIC"_s, "CP775"_s);
		aIANA2JavaMap->put("IBM850"_s, "CP850"_s);
		aIANA2JavaMap->put("850"_s, "CP850"_s);
		aIANA2JavaMap->put("CP850"_s, "CP850"_s);
		aIANA2JavaMap->put("CSPC850MULTILINGUAL"_s, "CP850"_s);
		aIANA2JavaMap->put("IBM852"_s, "CP852"_s);
		aIANA2JavaMap->put("852"_s, "CP852"_s);
		aIANA2JavaMap->put("CP852"_s, "CP852"_s);
		aIANA2JavaMap->put("CSPCP852"_s, "CP852"_s);
		aIANA2JavaMap->put("IBM855"_s, "CP855"_s);
		aIANA2JavaMap->put("855"_s, "CP855"_s);
		aIANA2JavaMap->put("CP855"_s, "CP855"_s);
		aIANA2JavaMap->put("CSIBM855"_s, "CP855"_s);
		aIANA2JavaMap->put("IBM857"_s, "CP857"_s);
		aIANA2JavaMap->put("857"_s, "CP857"_s);
		aIANA2JavaMap->put("CP857"_s, "CP857"_s);
		aIANA2JavaMap->put("CSIBM857"_s, "CP857"_s);
		aIANA2JavaMap->put("IBM00858"_s, "CP858"_s);
		aIANA2JavaMap->put("CP00858"_s, "CP858"_s);
		aIANA2JavaMap->put("CCSID00858"_s, "CP858"_s);
		aIANA2JavaMap->put("IBM860"_s, "CP860"_s);
		aIANA2JavaMap->put("860"_s, "CP860"_s);
		aIANA2JavaMap->put("CP860"_s, "CP860"_s);
		aIANA2JavaMap->put("CSIBM860"_s, "CP860"_s);
		aIANA2JavaMap->put("IBM861"_s, "CP861"_s);
		aIANA2JavaMap->put("861"_s, "CP861"_s);
		aIANA2JavaMap->put("CP861"_s, "CP861"_s);
		aIANA2JavaMap->put("CP-IS"_s, "CP861"_s);
		aIANA2JavaMap->put("CSIBM861"_s, "CP861"_s);
		aIANA2JavaMap->put("IBM862"_s, "CP862"_s);
		aIANA2JavaMap->put("862"_s, "CP862"_s);
		aIANA2JavaMap->put("CP862"_s, "CP862"_s);
		aIANA2JavaMap->put("CSPC862LATINHEBREW"_s, "CP862"_s);
		aIANA2JavaMap->put("IBM863"_s, "CP863"_s);
		aIANA2JavaMap->put("863"_s, "CP863"_s);
		aIANA2JavaMap->put("CP863"_s, "CP863"_s);
		aIANA2JavaMap->put("CSIBM863"_s, "CP863"_s);
		aIANA2JavaMap->put("IBM864"_s, "CP864"_s);
		aIANA2JavaMap->put("CP864"_s, "CP864"_s);
		aIANA2JavaMap->put("CSIBM864"_s, "CP864"_s);
		aIANA2JavaMap->put("IBM865"_s, "CP865"_s);
		aIANA2JavaMap->put("865"_s, "CP865"_s);
		aIANA2JavaMap->put("CP865"_s, "CP865"_s);
		aIANA2JavaMap->put("CSIBM865"_s, "CP865"_s);
		aIANA2JavaMap->put("IBM866"_s, "CP866"_s);
		aIANA2JavaMap->put("866"_s, "CP866"_s);
		aIANA2JavaMap->put("CP866"_s, "CP866"_s);
		aIANA2JavaMap->put("CSIBM866"_s, "CP866"_s);
		aIANA2JavaMap->put("IBM868"_s, "CP868"_s);
		aIANA2JavaMap->put("CP868"_s, "CP868"_s);
		aIANA2JavaMap->put("CSIBM868"_s, "CP868"_s);
		aIANA2JavaMap->put("CP-AR"_s, "CP868"_s);
		aIANA2JavaMap->put("IBM869"_s, "CP869"_s);
		aIANA2JavaMap->put("CP869"_s, "CP869"_s);
		aIANA2JavaMap->put("CSIBM869"_s, "CP869"_s);
		aIANA2JavaMap->put("CP-GR"_s, "CP869"_s);
		aIANA2JavaMap->put("IBM870"_s, "CP870"_s);
		aIANA2JavaMap->put("CP870"_s, "CP870"_s);
		aIANA2JavaMap->put("CSIBM870"_s, "CP870"_s);
		aIANA2JavaMap->put("EBCDIC-CP-ROECE"_s, "CP870"_s);
		aIANA2JavaMap->put("EBCDIC-CP-YU"_s, "CP870"_s);
		aIANA2JavaMap->put("IBM871"_s, "CP871"_s);
		aIANA2JavaMap->put("CP871"_s, "CP871"_s);
		aIANA2JavaMap->put("CSIBM871"_s, "CP871"_s);
		aIANA2JavaMap->put("EBCDIC-CP-IS"_s, "CP871"_s);
		aIANA2JavaMap->put("IBM918"_s, "CP918"_s);
		aIANA2JavaMap->put("CP918"_s, "CP918"_s);
		aIANA2JavaMap->put("CSIBM918"_s, "CP918"_s);
		aIANA2JavaMap->put("EBCDIC-CP-AR2"_s, "CP918"_s);
		aIANA2JavaMap->put("IBM00924"_s, "CP924"_s);
		aIANA2JavaMap->put("CP00924"_s, "CP924"_s);
		aIANA2JavaMap->put("CCSID00924"_s, "CP924"_s);
		aIANA2JavaMap->put("EBCDIC-LATIN9--EURO"_s, "CP924"_s);
		aIANA2JavaMap->put("IBM1026"_s, "CP1026"_s);
		aIANA2JavaMap->put("CP1026"_s, "CP1026"_s);
		aIANA2JavaMap->put("CSIBM1026"_s, "CP1026"_s);
		aIANA2JavaMap->put("IBM01140"_s, "Cp1140"_s);
		aIANA2JavaMap->put("CP01140"_s, "Cp1140"_s);
		aIANA2JavaMap->put("CCSID01140"_s, "Cp1140"_s);
		aIANA2JavaMap->put("IBM01141"_s, "Cp1141"_s);
		aIANA2JavaMap->put("CP01141"_s, "Cp1141"_s);
		aIANA2JavaMap->put("CCSID01141"_s, "Cp1141"_s);
		aIANA2JavaMap->put("IBM01142"_s, "Cp1142"_s);
		aIANA2JavaMap->put("CP01142"_s, "Cp1142"_s);
		aIANA2JavaMap->put("CCSID01142"_s, "Cp1142"_s);
		aIANA2JavaMap->put("IBM01143"_s, "Cp1143"_s);
		aIANA2JavaMap->put("CP01143"_s, "Cp1143"_s);
		aIANA2JavaMap->put("CCSID01143"_s, "Cp1143"_s);
		aIANA2JavaMap->put("IBM01144"_s, "Cp1144"_s);
		aIANA2JavaMap->put("CP01144"_s, "Cp1144"_s);
		aIANA2JavaMap->put("CCSID01144"_s, "Cp1144"_s);
		aIANA2JavaMap->put("IBM01145"_s, "Cp1145"_s);
		aIANA2JavaMap->put("CP01145"_s, "Cp1145"_s);
		aIANA2JavaMap->put("CCSID01145"_s, "Cp1145"_s);
		aIANA2JavaMap->put("IBM01146"_s, "Cp1146"_s);
		aIANA2JavaMap->put("CP01146"_s, "Cp1146"_s);
		aIANA2JavaMap->put("CCSID01146"_s, "Cp1146"_s);
		aIANA2JavaMap->put("IBM01147"_s, "Cp1147"_s);
		aIANA2JavaMap->put("CP01147"_s, "Cp1147"_s);
		aIANA2JavaMap->put("CCSID01147"_s, "Cp1147"_s);
		aIANA2JavaMap->put("IBM01148"_s, "Cp1148"_s);
		aIANA2JavaMap->put("CP01148"_s, "Cp1148"_s);
		aIANA2JavaMap->put("CCSID01148"_s, "Cp1148"_s);
		aIANA2JavaMap->put("IBM01149"_s, "Cp1149"_s);
		aIANA2JavaMap->put("CP01149"_s, "Cp1149"_s);
		aIANA2JavaMap->put("CCSID01149"_s, "Cp1149"_s);
		aIANA2JavaMap->put("EUC-JP"_s, "EUCJIS"_s);
		aIANA2JavaMap->put("CSEUCPKDFMTJAPANESE"_s, "EUCJIS"_s);
		aIANA2JavaMap->put("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE"_s, "EUCJIS"_s);
		aIANA2JavaMap->put("EUC-KR"_s, "KSC5601"_s);
		aIANA2JavaMap->put("CSEUCKR"_s, "KSC5601"_s);
		aIANA2JavaMap->put("KS_C_5601-1987"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("ISO-IR-149"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("KS_C_5601-1989"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("KSC_5601"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("KOREAN"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("CSKSC56011987"_s, "KS_C_5601-1987"_s);
		aIANA2JavaMap->put("GB2312"_s, "GB2312"_s);
		aIANA2JavaMap->put("CSGB2312"_s, "GB2312"_s);
		aIANA2JavaMap->put("ISO-2022-JP"_s, "JIS"_s);
		aIANA2JavaMap->put("CSISO2022JP"_s, "JIS"_s);
		aIANA2JavaMap->put("ISO-2022-KR"_s, "ISO2022KR"_s);
		aIANA2JavaMap->put("CSISO2022KR"_s, "ISO2022KR"_s);
		aIANA2JavaMap->put("ISO-2022-CN"_s, "ISO2022CN"_s);
		aIANA2JavaMap->put("X0201"_s, "JIS0201"_s);
		aIANA2JavaMap->put("CSISO13JISC6220JP"_s, "JIS0201"_s);
		aIANA2JavaMap->put("X0208"_s, "JIS0208"_s);
		aIANA2JavaMap->put("ISO-IR-87"_s, "JIS0208"_s);
		aIANA2JavaMap->put("X0208dbiJIS_X0208-1983"_s, "JIS0208"_s);
		aIANA2JavaMap->put("CSISO87JISX0208"_s, "JIS0208"_s);
		aIANA2JavaMap->put("X0212"_s, "JIS0212"_s);
		aIANA2JavaMap->put("ISO-IR-159"_s, "JIS0212"_s);
		aIANA2JavaMap->put("CSISO159JISX02121990"_s, "JIS0212"_s);
		aIANA2JavaMap->put("GB18030"_s, "GB18030"_s);
		aIANA2JavaMap->put("GBK"_s, "GBK"_s);
		aIANA2JavaMap->put("CP936"_s, "GBK"_s);
		aIANA2JavaMap->put("MS936"_s, "GBK"_s);
		aIANA2JavaMap->put("WINDOWS-936"_s, "GBK"_s);
		aIANA2JavaMap->put("SHIFT_JIS"_s, "SJIS"_s);
		aIANA2JavaMap->put("CSSHIFTJIS"_s, "SJIS"_s);
		aIANA2JavaMap->put("MS_KANJI"_s, "SJIS"_s);
		aIANA2JavaMap->put("WINDOWS-31J"_s, "MS932"_s);
		aIANA2JavaMap->put("CSWINDOWS31J"_s, "MS932"_s);
		aIANA2JavaMap->put("WINDOWS-1250"_s, "Cp1250"_s);
		aIANA2JavaMap->put("WINDOWS-1251"_s, "Cp1251"_s);
		aIANA2JavaMap->put("WINDOWS-1252"_s, "Cp1252"_s);
		aIANA2JavaMap->put("WINDOWS-1253"_s, "Cp1253"_s);
		aIANA2JavaMap->put("WINDOWS-1254"_s, "Cp1254"_s);
		aIANA2JavaMap->put("WINDOWS-1255"_s, "Cp1255"_s);
		aIANA2JavaMap->put("WINDOWS-1256"_s, "Cp1256"_s);
		aIANA2JavaMap->put("WINDOWS-1257"_s, "Cp1257"_s);
		aIANA2JavaMap->put("WINDOWS-1258"_s, "Cp1258"_s);
		aIANA2JavaMap->put("TIS-620"_s, "TIS620"_s);
		aIANA2JavaMap->put("ISO-8859-1"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("ISO-IR-100"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("ISO_8859-1"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("LATIN1"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("CSISOLATIN1"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("L1"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("IBM819"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("CP819"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("ISO-8859-2"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("ISO-IR-101"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("ISO_8859-2"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("LATIN2"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("CSISOLATIN2"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("L2"_s, "ISO8859_2"_s);
		aIANA2JavaMap->put("ISO-8859-3"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("ISO-IR-109"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("ISO_8859-3"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("LATIN3"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("CSISOLATIN3"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("L3"_s, "ISO8859_3"_s);
		aIANA2JavaMap->put("ISO-8859-4"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("ISO-IR-110"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("ISO_8859-4"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("LATIN4"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("CSISOLATIN4"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("L4"_s, "ISO8859_4"_s);
		aIANA2JavaMap->put("ISO-8859-5"_s, "ISO8859_5"_s);
		aIANA2JavaMap->put("ISO-IR-144"_s, "ISO8859_5"_s);
		aIANA2JavaMap->put("ISO_8859-5"_s, "ISO8859_5"_s);
		aIANA2JavaMap->put("CYRILLIC"_s, "ISO8859_5"_s);
		aIANA2JavaMap->put("CSISOLATINCYRILLIC"_s, "ISO8859_5"_s);
		aIANA2JavaMap->put("ISO-8859-6"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ISO-IR-127"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ISO_8859-6"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ECMA-114"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ASMO-708"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ARABIC"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("CSISOLATINARABIC"_s, "ISO8859_6"_s);
		aIANA2JavaMap->put("ISO-8859-7"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("ISO-IR-126"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("ISO_8859-7"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("ELOT_928"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("ECMA-118"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("GREEK"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("CSISOLATINGREEK"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("GREEK8"_s, "ISO8859_7"_s);
		aIANA2JavaMap->put("ISO-8859-8"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("ISO-8859-8-I"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("ISO-IR-138"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("ISO_8859-8"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("HEBREW"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("CSISOLATINHEBREW"_s, "ISO8859_8"_s);
		aIANA2JavaMap->put("ISO-8859-9"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("ISO-IR-148"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("ISO_8859-9"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("LATIN5"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("CSISOLATIN5"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("L5"_s, "ISO8859_9"_s);
		aIANA2JavaMap->put("ISO-8859-13"_s, "ISO8859_13"_s);
		aIANA2JavaMap->put("ISO-8859-15"_s, "ISO8859_15_FDIS"_s);
		aIANA2JavaMap->put("ISO_8859-15"_s, "ISO8859_15_FDIS"_s);
		aIANA2JavaMap->put("LATIN-9"_s, "ISO8859_15_FDIS"_s);
		aIANA2JavaMap->put("KOI8-R"_s, "KOI8_R"_s);
		aIANA2JavaMap->put("CSKOI8R"_s, "KOI8_R"_s);
		aIANA2JavaMap->put("US-ASCII"_s, "ASCII"_s);
		aIANA2JavaMap->put("ISO-IR-6"_s, "ASCII"_s);
		aIANA2JavaMap->put("ANSI_X3.4-1968"_s, "ASCII"_s);
		aIANA2JavaMap->put("ANSI_X3.4-1986"_s, "ASCII"_s);
		aIANA2JavaMap->put("ISO_646.IRV:1991"_s, "ASCII"_s);
		aIANA2JavaMap->put("ASCII"_s, "ASCII"_s);
		aIANA2JavaMap->put("CSASCII"_s, "ASCII"_s);
		aIANA2JavaMap->put("ISO646-US"_s, "ASCII"_s);
		aIANA2JavaMap->put("US"_s, "ASCII"_s);
		aIANA2JavaMap->put("IBM367"_s, "ASCII"_s);
		aIANA2JavaMap->put("CP367"_s, "ASCII"_s);
		aIANA2JavaMap->put("UTF-8"_s, "UTF8"_s);
		aIANA2JavaMap->put("UTF-16"_s, "UTF-16"_s);
		aIANA2JavaMap->put("UTF-16BE"_s, "UnicodeBig"_s);
		aIANA2JavaMap->put("UTF-16LE"_s, "UnicodeLittle"_s);
		aIANA2JavaMap->put("IBM-1047"_s, "Cp1047"_s);
		aIANA2JavaMap->put("IBM1047"_s, "Cp1047"_s);
		aIANA2JavaMap->put("CP1047"_s, "Cp1047"_s);
		aIANA2JavaMap->put("IBM-37"_s, "CP037"_s);
		aIANA2JavaMap->put("IBM-273"_s, "CP273"_s);
		aIANA2JavaMap->put("IBM-277"_s, "CP277"_s);
		aIANA2JavaMap->put("IBM-278"_s, "CP278"_s);
		aIANA2JavaMap->put("IBM-280"_s, "CP280"_s);
		aIANA2JavaMap->put("IBM-284"_s, "CP284"_s);
		aIANA2JavaMap->put("IBM-285"_s, "CP285"_s);
		aIANA2JavaMap->put("IBM-290"_s, "CP290"_s);
		aIANA2JavaMap->put("IBM-297"_s, "CP297"_s);
		aIANA2JavaMap->put("IBM-420"_s, "CP420"_s);
		aIANA2JavaMap->put("IBM-424"_s, "CP424"_s);
		aIANA2JavaMap->put("IBM-437"_s, "CP437"_s);
		aIANA2JavaMap->put("IBM-500"_s, "CP500"_s);
		aIANA2JavaMap->put("IBM-775"_s, "CP775"_s);
		aIANA2JavaMap->put("IBM-850"_s, "CP850"_s);
		aIANA2JavaMap->put("IBM-852"_s, "CP852"_s);
		aIANA2JavaMap->put("IBM-855"_s, "CP855"_s);
		aIANA2JavaMap->put("IBM-857"_s, "CP857"_s);
		aIANA2JavaMap->put("IBM-858"_s, "CP858"_s);
		aIANA2JavaMap->put("IBM-860"_s, "CP860"_s);
		aIANA2JavaMap->put("IBM-861"_s, "CP861"_s);
		aIANA2JavaMap->put("IBM-862"_s, "CP862"_s);
		aIANA2JavaMap->put("IBM-863"_s, "CP863"_s);
		aIANA2JavaMap->put("IBM-864"_s, "CP864"_s);
		aIANA2JavaMap->put("IBM-865"_s, "CP865"_s);
		aIANA2JavaMap->put("IBM-866"_s, "CP866"_s);
		aIANA2JavaMap->put("IBM-868"_s, "CP868"_s);
		aIANA2JavaMap->put("IBM-869"_s, "CP869"_s);
		aIANA2JavaMap->put("IBM-870"_s, "CP870"_s);
		aIANA2JavaMap->put("IBM-871"_s, "CP871"_s);
		aIANA2JavaMap->put("IBM-918"_s, "CP918"_s);
		aIANA2JavaMap->put("IBM-924"_s, "CP924"_s);
		aIANA2JavaMap->put("IBM-1026"_s, "CP1026"_s);
		aIANA2JavaMap->put("IBM-1140"_s, "Cp1140"_s);
		aIANA2JavaMap->put("IBM-1141"_s, "Cp1141"_s);
		aIANA2JavaMap->put("IBM-1142"_s, "Cp1142"_s);
		aIANA2JavaMap->put("IBM-1143"_s, "Cp1143"_s);
		aIANA2JavaMap->put("IBM-1144"_s, "Cp1144"_s);
		aIANA2JavaMap->put("IBM-1145"_s, "Cp1145"_s);
		aIANA2JavaMap->put("IBM-1146"_s, "Cp1146"_s);
		aIANA2JavaMap->put("IBM-1147"_s, "Cp1147"_s);
		aIANA2JavaMap->put("IBM-1148"_s, "Cp1148"_s);
		aIANA2JavaMap->put("IBM-1149"_s, "Cp1149"_s);
		aIANA2JavaMap->put("IBM-819"_s, "ISO8859_1"_s);
		aIANA2JavaMap->put("IBM-367"_s, "ASCII"_s);
		$assignStatic(EncodingMap::fIANA2JavaMap, $Collections::unmodifiableMap(aIANA2JavaMap));
		aJava2IANAMap->put("ISO8859_1"_s, "ISO-8859-1"_s);
		aJava2IANAMap->put("ISO8859_2"_s, "ISO-8859-2"_s);
		aJava2IANAMap->put("ISO8859_3"_s, "ISO-8859-3"_s);
		aJava2IANAMap->put("ISO8859_4"_s, "ISO-8859-4"_s);
		aJava2IANAMap->put("ISO8859_5"_s, "ISO-8859-5"_s);
		aJava2IANAMap->put("ISO8859_6"_s, "ISO-8859-6"_s);
		aJava2IANAMap->put("ISO8859_7"_s, "ISO-8859-7"_s);
		aJava2IANAMap->put("ISO8859_8"_s, "ISO-8859-8"_s);
		aJava2IANAMap->put("ISO8859_9"_s, "ISO-8859-9"_s);
		aJava2IANAMap->put("ISO8859_13"_s, "ISO-8859-13"_s);
		aJava2IANAMap->put("ISO8859_15"_s, "ISO-8859-15"_s);
		aJava2IANAMap->put("ISO8859_15_FDIS"_s, "ISO-8859-15"_s);
		aJava2IANAMap->put("Big5"_s, "BIG5"_s);
		aJava2IANAMap->put("CP037"_s, "EBCDIC-CP-US"_s);
		aJava2IANAMap->put("CP273"_s, "IBM273"_s);
		aJava2IANAMap->put("CP277"_s, "EBCDIC-CP-DK"_s);
		aJava2IANAMap->put("CP278"_s, "EBCDIC-CP-FI"_s);
		aJava2IANAMap->put("CP280"_s, "EBCDIC-CP-IT"_s);
		aJava2IANAMap->put("CP284"_s, "EBCDIC-CP-ES"_s);
		aJava2IANAMap->put("CP285"_s, "EBCDIC-CP-GB"_s);
		aJava2IANAMap->put("CP290"_s, "EBCDIC-JP-KANA"_s);
		aJava2IANAMap->put("CP297"_s, "EBCDIC-CP-FR"_s);
		aJava2IANAMap->put("CP420"_s, "EBCDIC-CP-AR1"_s);
		aJava2IANAMap->put("CP424"_s, "EBCDIC-CP-HE"_s);
		aJava2IANAMap->put("CP437"_s, "IBM437"_s);
		aJava2IANAMap->put("CP500"_s, "EBCDIC-CP-CH"_s);
		aJava2IANAMap->put("CP775"_s, "IBM775"_s);
		aJava2IANAMap->put("CP850"_s, "IBM850"_s);
		aJava2IANAMap->put("CP852"_s, "IBM852"_s);
		aJava2IANAMap->put("CP855"_s, "IBM855"_s);
		aJava2IANAMap->put("CP857"_s, "IBM857"_s);
		aJava2IANAMap->put("CP858"_s, "IBM00858"_s);
		aJava2IANAMap->put("CP860"_s, "IBM860"_s);
		aJava2IANAMap->put("CP861"_s, "IBM861"_s);
		aJava2IANAMap->put("CP862"_s, "IBM862"_s);
		aJava2IANAMap->put("CP863"_s, "IBM863"_s);
		aJava2IANAMap->put("CP864"_s, "IBM864"_s);
		aJava2IANAMap->put("CP865"_s, "IBM865"_s);
		aJava2IANAMap->put("CP866"_s, "IBM866"_s);
		aJava2IANAMap->put("CP868"_s, "IBM868"_s);
		aJava2IANAMap->put("CP869"_s, "IBM869"_s);
		aJava2IANAMap->put("CP870"_s, "EBCDIC-CP-ROECE"_s);
		aJava2IANAMap->put("CP871"_s, "EBCDIC-CP-IS"_s);
		aJava2IANAMap->put("CP918"_s, "EBCDIC-CP-AR2"_s);
		aJava2IANAMap->put("CP924"_s, "IBM00924"_s);
		aJava2IANAMap->put("CP1026"_s, "IBM1026"_s);
		aJava2IANAMap->put("CP1140"_s, "IBM01140"_s);
		aJava2IANAMap->put("CP1141"_s, "IBM01141"_s);
		aJava2IANAMap->put("CP1142"_s, "IBM01142"_s);
		aJava2IANAMap->put("CP1143"_s, "IBM01143"_s);
		aJava2IANAMap->put("CP1144"_s, "IBM01144"_s);
		aJava2IANAMap->put("CP1145"_s, "IBM01145"_s);
		aJava2IANAMap->put("CP1146"_s, "IBM01146"_s);
		aJava2IANAMap->put("CP1147"_s, "IBM01147"_s);
		aJava2IANAMap->put("CP1148"_s, "IBM01148"_s);
		aJava2IANAMap->put("CP1149"_s, "IBM01149"_s);
		aJava2IANAMap->put("EUCJIS"_s, "EUC-JP"_s);
		aJava2IANAMap->put("KS_C_5601-1987"_s, "KS_C_5601-1987"_s);
		aJava2IANAMap->put("GB2312"_s, "GB2312"_s);
		aJava2IANAMap->put("ISO2022KR"_s, "ISO-2022-KR"_s);
		aJava2IANAMap->put("ISO2022CN"_s, "ISO-2022-CN"_s);
		aJava2IANAMap->put("JIS"_s, "ISO-2022-JP"_s);
		aJava2IANAMap->put("KOI8_R"_s, "KOI8-R"_s);
		aJava2IANAMap->put("KSC5601"_s, "EUC-KR"_s);
		aJava2IANAMap->put("GB18030"_s, "GB18030"_s);
		aJava2IANAMap->put("GBK"_s, "GBK"_s);
		aJava2IANAMap->put("SJIS"_s, "SHIFT_JIS"_s);
		aJava2IANAMap->put("MS932"_s, "WINDOWS-31J"_s);
		aJava2IANAMap->put("UTF8"_s, "UTF-8"_s);
		aJava2IANAMap->put("Unicode"_s, "UTF-16"_s);
		aJava2IANAMap->put("UnicodeBig"_s, "UTF-16BE"_s);
		aJava2IANAMap->put("UnicodeLittle"_s, "UTF-16LE"_s);
		aJava2IANAMap->put("JIS0201"_s, "X0201"_s);
		aJava2IANAMap->put("JIS0208"_s, "X0208"_s);
		aJava2IANAMap->put("JIS0212"_s, "ISO-IR-159"_s);
		aJava2IANAMap->put("CP1047"_s, "IBM1047"_s);
		$assignStatic(EncodingMap::fJava2IANAMap, $Collections::unmodifiableMap(aIANA2JavaMap));
	}
}

EncodingMap::EncodingMap() {
}

$Class* EncodingMap::load$($String* name, bool initialize) {
	$loadClass(EncodingMap, name, initialize, &_EncodingMap_ClassInfo_, clinit$EncodingMap, allocate$EncodingMap);
	return class$;
}

$Class* EncodingMap::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com