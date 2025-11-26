#include <jdk.charsets.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <sun/nio/cs/ext/AbstractCharsetProvider.h>
#include <sun/nio/cs/ext/AbstractCharsetProvider$1.h>
#include <sun/nio/cs/ext/Big5.h>
#include <sun/nio/cs/ext/Big5$DecodeHolder.h>
#include <sun/nio/cs/ext/Big5$EncodeHolder.h>
#include <sun/nio/cs/ext/Big5_HKSCS.h>
#include <sun/nio/cs/ext/Big5_HKSCS$Decoder.h>
#include <sun/nio/cs/ext/Big5_HKSCS$Encoder.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001$Decoder.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001$Encoder.h>
#include <sun/nio/cs/ext/Big5_Solaris.h>
#include <sun/nio/cs/ext/Big5_Solaris$Holder.h>
#include <sun/nio/cs/ext/EUC_CN.h>
#include <sun/nio/cs/ext/EUC_CN$DecodeHolder.h>
#include <sun/nio/cs/ext/EUC_CN$EncodeHolder.h>
#include <sun/nio/cs/ext/EUC_JP.h>
#include <sun/nio/cs/ext/EUC_JP$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP$Encoder.h>
#include <sun/nio/cs/ext/EUC_JP_LINUX.h>
#include <sun/nio/cs/ext/EUC_JP_LINUX$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP_LINUX$Encoder.h>
#include <sun/nio/cs/ext/EUC_JP_Open.h>
#include <sun/nio/cs/ext/EUC_JP_Open$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP_Open$Encoder.h>
#include <sun/nio/cs/ext/EUC_KR.h>
#include <sun/nio/cs/ext/EUC_KR$DecodeHolder.h>
#include <sun/nio/cs/ext/EUC_KR$EncodeHolder.h>
#include <sun/nio/cs/ext/EUC_TW.h>
#include <sun/nio/cs/ext/EUC_TW$Decoder.h>
#include <sun/nio/cs/ext/EUC_TW$Encoder.h>
#include <sun/nio/cs/ext/EUC_TWMapping.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/HKSCS2001Mapping.h>
#include <sun/nio/cs/ext/IBM037.h>
#include <sun/nio/cs/ext/IBM037$Holder.h>
#include <sun/nio/cs/ext/IBM1006.h>
#include <sun/nio/cs/ext/IBM1006$Holder.h>
#include <sun/nio/cs/ext/IBM1025.h>
#include <sun/nio/cs/ext/IBM1025$Holder.h>
#include <sun/nio/cs/ext/IBM1026.h>
#include <sun/nio/cs/ext/IBM1026$Holder.h>
#include <sun/nio/cs/ext/IBM1046.h>
#include <sun/nio/cs/ext/IBM1046$Holder.h>
#include <sun/nio/cs/ext/IBM1047.h>
#include <sun/nio/cs/ext/IBM1047$Holder.h>
#include <sun/nio/cs/ext/IBM1097.h>
#include <sun/nio/cs/ext/IBM1097$Holder.h>
#include <sun/nio/cs/ext/IBM1098.h>
#include <sun/nio/cs/ext/IBM1098$Holder.h>
#include <sun/nio/cs/ext/IBM1112.h>
#include <sun/nio/cs/ext/IBM1112$Holder.h>
#include <sun/nio/cs/ext/IBM1122.h>
#include <sun/nio/cs/ext/IBM1122$Holder.h>
#include <sun/nio/cs/ext/IBM1123.h>
#include <sun/nio/cs/ext/IBM1123$Holder.h>
#include <sun/nio/cs/ext/IBM1124.h>
#include <sun/nio/cs/ext/IBM1124$Holder.h>
#include <sun/nio/cs/ext/IBM1129.h>
#include <sun/nio/cs/ext/IBM1129$Holder.h>
#include <sun/nio/cs/ext/IBM1140.h>
#include <sun/nio/cs/ext/IBM1140$Holder.h>
#include <sun/nio/cs/ext/IBM1141.h>
#include <sun/nio/cs/ext/IBM1141$Holder.h>
#include <sun/nio/cs/ext/IBM1142.h>
#include <sun/nio/cs/ext/IBM1142$Holder.h>
#include <sun/nio/cs/ext/IBM1143.h>
#include <sun/nio/cs/ext/IBM1143$Holder.h>
#include <sun/nio/cs/ext/IBM1144.h>
#include <sun/nio/cs/ext/IBM1144$Holder.h>
#include <sun/nio/cs/ext/IBM1145.h>
#include <sun/nio/cs/ext/IBM1145$Holder.h>
#include <sun/nio/cs/ext/IBM1146.h>
#include <sun/nio/cs/ext/IBM1146$Holder.h>
#include <sun/nio/cs/ext/IBM1147.h>
#include <sun/nio/cs/ext/IBM1147$Holder.h>
#include <sun/nio/cs/ext/IBM1148.h>
#include <sun/nio/cs/ext/IBM1148$Holder.h>
#include <sun/nio/cs/ext/IBM1149.h>
#include <sun/nio/cs/ext/IBM1149$Holder.h>
#include <sun/nio/cs/ext/IBM1166.h>
#include <sun/nio/cs/ext/IBM1166$Holder.h>
#include <sun/nio/cs/ext/IBM1364.h>
#include <sun/nio/cs/ext/IBM1364$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1364$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM1381.h>
#include <sun/nio/cs/ext/IBM1381$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1381$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM1383.h>
#include <sun/nio/cs/ext/IBM1383$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1383$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM273.h>
#include <sun/nio/cs/ext/IBM273$Holder.h>
#include <sun/nio/cs/ext/IBM277.h>
#include <sun/nio/cs/ext/IBM277$Holder.h>
#include <sun/nio/cs/ext/IBM278.h>
#include <sun/nio/cs/ext/IBM278$Holder.h>
#include <sun/nio/cs/ext/IBM280.h>
#include <sun/nio/cs/ext/IBM280$Holder.h>
#include <sun/nio/cs/ext/IBM284.h>
#include <sun/nio/cs/ext/IBM284$Holder.h>
#include <sun/nio/cs/ext/IBM285.h>
#include <sun/nio/cs/ext/IBM285$Holder.h>
#include <sun/nio/cs/ext/IBM290.h>
#include <sun/nio/cs/ext/IBM290$Holder.h>
#include <sun/nio/cs/ext/IBM29626C.h>
#include <sun/nio/cs/ext/IBM29626C$Decoder.h>
#include <sun/nio/cs/ext/IBM29626C$Encoder.h>
#include <sun/nio/cs/ext/IBM297.h>
#include <sun/nio/cs/ext/IBM297$Holder.h>
#include <sun/nio/cs/ext/IBM300.h>
#include <sun/nio/cs/ext/IBM300$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM300$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM33722.h>
#include <sun/nio/cs/ext/IBM33722$Decoder.h>
#include <sun/nio/cs/ext/IBM33722$Encoder.h>
#include <sun/nio/cs/ext/IBM420.h>
#include <sun/nio/cs/ext/IBM420$Holder.h>
#include <sun/nio/cs/ext/IBM424.h>
#include <sun/nio/cs/ext/IBM424$Holder.h>
#include <sun/nio/cs/ext/IBM500.h>
#include <sun/nio/cs/ext/IBM500$Holder.h>
#include <sun/nio/cs/ext/IBM833.h>
#include <sun/nio/cs/ext/IBM833$Holder.h>
#include <sun/nio/cs/ext/IBM834.h>
#include <sun/nio/cs/ext/IBM834$Encoder.h>
#include <sun/nio/cs/ext/IBM838.h>
#include <sun/nio/cs/ext/IBM838$Holder.h>
#include <sun/nio/cs/ext/IBM856.h>
#include <sun/nio/cs/ext/IBM856$Holder.h>
#include <sun/nio/cs/ext/IBM860.h>
#include <sun/nio/cs/ext/IBM860$Holder.h>
#include <sun/nio/cs/ext/IBM861.h>
#include <sun/nio/cs/ext/IBM861$Holder.h>
#include <sun/nio/cs/ext/IBM863.h>
#include <sun/nio/cs/ext/IBM863$Holder.h>
#include <sun/nio/cs/ext/IBM864.h>
#include <sun/nio/cs/ext/IBM864$Holder.h>
#include <sun/nio/cs/ext/IBM865.h>
#include <sun/nio/cs/ext/IBM865$Holder.h>
#include <sun/nio/cs/ext/IBM868.h>
#include <sun/nio/cs/ext/IBM868$Holder.h>
#include <sun/nio/cs/ext/IBM869.h>
#include <sun/nio/cs/ext/IBM869$Holder.h>
#include <sun/nio/cs/ext/IBM870.h>
#include <sun/nio/cs/ext/IBM870$Holder.h>
#include <sun/nio/cs/ext/IBM871.h>
#include <sun/nio/cs/ext/IBM871$Holder.h>
#include <sun/nio/cs/ext/IBM875.h>
#include <sun/nio/cs/ext/IBM875$Holder.h>
#include <sun/nio/cs/ext/IBM918.h>
#include <sun/nio/cs/ext/IBM918$Holder.h>
#include <sun/nio/cs/ext/IBM921.h>
#include <sun/nio/cs/ext/IBM921$Holder.h>
#include <sun/nio/cs/ext/IBM922.h>
#include <sun/nio/cs/ext/IBM922$Holder.h>
#include <sun/nio/cs/ext/IBM930.h>
#include <sun/nio/cs/ext/IBM930$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM930$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM933.h>
#include <sun/nio/cs/ext/IBM933$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM933$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM935.h>
#include <sun/nio/cs/ext/IBM935$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM935$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM937.h>
#include <sun/nio/cs/ext/IBM937$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM937$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM939.h>
#include <sun/nio/cs/ext/IBM939$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM939$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM942.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM942C.h>
#include <sun/nio/cs/ext/IBM942C$Holder.h>
#include <sun/nio/cs/ext/IBM943.h>
#include <sun/nio/cs/ext/IBM943$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM943$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM943C.h>
#include <sun/nio/cs/ext/IBM943C$Holder.h>
#include <sun/nio/cs/ext/IBM948.h>
#include <sun/nio/cs/ext/IBM948$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM948$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM949.h>
#include <sun/nio/cs/ext/IBM949$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM949$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM949C.h>
#include <sun/nio/cs/ext/IBM949C$Holder.h>
#include <sun/nio/cs/ext/IBM950.h>
#include <sun/nio/cs/ext/IBM950$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM950$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM964.h>
#include <sun/nio/cs/ext/IBM964$Decoder.h>
#include <sun/nio/cs/ext/IBM964$Encoder.h>
#include <sun/nio/cs/ext/IBM970.h>
#include <sun/nio/cs/ext/IBM970$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM970$EncodeHolder.h>
#include <sun/nio/cs/ext/ISCII91.h>
#include <sun/nio/cs/ext/ISCII91$Decoder.h>
#include <sun/nio/cs/ext/ISCII91$Encoder.h>
#include <sun/nio/cs/ext/ISO2022.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_CN.h>
#include <sun/nio/cs/ext/ISO2022_CN$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_CN_CNS.h>
#include <sun/nio/cs/ext/ISO2022_CN_CNS$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_CN_GB.h>
#include <sun/nio/cs/ext/ISO2022_CN_GB$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP_2.h>
#include <sun/nio/cs/ext/ISO2022_JP_2$CoderHolder.h>
#include <sun/nio/cs/ext/ISO2022_KR.h>
#include <sun/nio/cs/ext/ISO2022_KR$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_KR$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_KR$Holder.h>
#include <sun/nio/cs/ext/ISO_8859_11.h>
#include <sun/nio/cs/ext/ISO_8859_11$Holder.h>
#include <sun/nio/cs/ext/ISO_8859_3.h>
#include <sun/nio/cs/ext/ISO_8859_3$Holder.h>
#include <sun/nio/cs/ext/ISO_8859_6.h>
#include <sun/nio/cs/ext/ISO_8859_6$Holder.h>
#include <sun/nio/cs/ext/ISO_8859_8.h>
#include <sun/nio/cs/ext/ISO_8859_8$Holder.h>
#include <sun/nio/cs/ext/JISAutoDetect.h>
#include <sun/nio/cs/ext/JISAutoDetect$Decoder.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <sun/nio/cs/ext/JIS_X_0208$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_Solaris.h>
#include <sun/nio/cs/ext/JIS_X_0208_Solaris$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_Solaris$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <sun/nio/cs/ext/JIS_X_0212$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X$EncodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212_Solaris.h>
#include <sun/nio/cs/ext/JIS_X_0212_Solaris$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212_Solaris$EncodeHolder.h>
#include <sun/nio/cs/ext/MS50220.h>
#include <sun/nio/cs/ext/MS50220$Holder.h>
#include <sun/nio/cs/ext/MS50221.h>
#include <sun/nio/cs/ext/MS932_0213.h>
#include <sun/nio/cs/ext/MS932_0213$Decoder.h>
#include <sun/nio/cs/ext/MS932_0213$Encoder.h>
#include <sun/nio/cs/ext/MSISO2022JP.h>
#include <sun/nio/cs/ext/MSISO2022JP$CoderHolder.h>
#include <sun/nio/cs/ext/MacArabic.h>
#include <sun/nio/cs/ext/MacArabic$Holder.h>
#include <sun/nio/cs/ext/MacCentralEurope.h>
#include <sun/nio/cs/ext/MacCentralEurope$Holder.h>
#include <sun/nio/cs/ext/MacCroatian.h>
#include <sun/nio/cs/ext/MacCroatian$Holder.h>
#include <sun/nio/cs/ext/MacCyrillic.h>
#include <sun/nio/cs/ext/MacCyrillic$Holder.h>
#include <sun/nio/cs/ext/MacDingbat.h>
#include <sun/nio/cs/ext/MacDingbat$Holder.h>
#include <sun/nio/cs/ext/MacGreek.h>
#include <sun/nio/cs/ext/MacGreek$Holder.h>
#include <sun/nio/cs/ext/MacHebrew.h>
#include <sun/nio/cs/ext/MacHebrew$Holder.h>
#include <sun/nio/cs/ext/MacIceland.h>
#include <sun/nio/cs/ext/MacIceland$Holder.h>
#include <sun/nio/cs/ext/MacRoman.h>
#include <sun/nio/cs/ext/MacRoman$Holder.h>
#include <sun/nio/cs/ext/MacRomania.h>
#include <sun/nio/cs/ext/MacRomania$Holder.h>
#include <sun/nio/cs/ext/MacSymbol.h>
#include <sun/nio/cs/ext/MacSymbol$Holder.h>
#include <sun/nio/cs/ext/MacThai.h>
#include <sun/nio/cs/ext/MacThai$Holder.h>
#include <sun/nio/cs/ext/MacTurkish.h>
#include <sun/nio/cs/ext/MacTurkish$Holder.h>
#include <sun/nio/cs/ext/MacUkraine.h>
#include <sun/nio/cs/ext/MacUkraine$Holder.h>
#include <sun/nio/cs/ext/PCK.h>
#include <sun/nio/cs/ext/PCK$DecodeHolder.h>
#include <sun/nio/cs/ext/PCK$EncodeHolder.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>
#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder$1.h>
#include <sun/nio/cs/ext/SimpleEUCEncoder.h>
#include <sun/nio/cs/ext/TIS_620.h>
#include <sun/nio/cs/ext/TIS_620$Holder.h>

#undef EUC_CN
#undef EUC_JP
#undef EUC_JP_LINUX
#undef EUC_KR
#undef EUC_TW
#undef IBM942C
#undef IBM943C
#undef IBM949C
#undef ISCII91
#undef PCK

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$charsets_classes_[] = {
	$classEntry("sun.nio.cs.ext.AbstractCharsetProvider", ::sun::nio::cs::ext::AbstractCharsetProvider),
	$classEntry("sun.nio.cs.ext.AbstractCharsetProvider$1", ::sun::nio::cs::ext::AbstractCharsetProvider$1),
	$classEntry("sun.nio.cs.ext.Big5", ::sun::nio::cs::ext::Big5),
	$classEntry("sun.nio.cs.ext.Big5$DecodeHolder", ::sun::nio::cs::ext::Big5$DecodeHolder),
	$classEntry("sun.nio.cs.ext.Big5$EncodeHolder", ::sun::nio::cs::ext::Big5$EncodeHolder),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS", ::sun::nio::cs::ext::Big5_HKSCS),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS$Decoder", ::sun::nio::cs::ext::Big5_HKSCS$Decoder),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS$Encoder", ::sun::nio::cs::ext::Big5_HKSCS$Encoder),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS_2001", ::sun::nio::cs::ext::Big5_HKSCS_2001),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS_2001$Decoder", ::sun::nio::cs::ext::Big5_HKSCS_2001$Decoder),
	$classEntry("sun.nio.cs.ext.Big5_HKSCS_2001$Encoder", ::sun::nio::cs::ext::Big5_HKSCS_2001$Encoder),
	$classEntry("sun.nio.cs.ext.Big5_Solaris", ::sun::nio::cs::ext::Big5_Solaris),
	$classEntry("sun.nio.cs.ext.Big5_Solaris$Holder", ::sun::nio::cs::ext::Big5_Solaris$Holder),
	$classEntry("sun.nio.cs.ext.EUC_CN", ::sun::nio::cs::ext::EUC_CN),
	$classEntry("sun.nio.cs.ext.EUC_CN$DecodeHolder", ::sun::nio::cs::ext::EUC_CN$DecodeHolder),
	$classEntry("sun.nio.cs.ext.EUC_CN$EncodeHolder", ::sun::nio::cs::ext::EUC_CN$EncodeHolder),
	$classEntry("sun.nio.cs.ext.EUC_JP", ::sun::nio::cs::ext::EUC_JP),
	$classEntry("sun.nio.cs.ext.EUC_JP$Decoder", ::sun::nio::cs::ext::EUC_JP$Decoder),
	$classEntry("sun.nio.cs.ext.EUC_JP$Encoder", ::sun::nio::cs::ext::EUC_JP$Encoder),
	$classEntry("sun.nio.cs.ext.EUC_JP_LINUX", ::sun::nio::cs::ext::EUC_JP_LINUX),
	$classEntry("sun.nio.cs.ext.EUC_JP_LINUX$Decoder", ::sun::nio::cs::ext::EUC_JP_LINUX$Decoder),
	$classEntry("sun.nio.cs.ext.EUC_JP_LINUX$Encoder", ::sun::nio::cs::ext::EUC_JP_LINUX$Encoder),
	$classEntry("sun.nio.cs.ext.EUC_JP_Open", ::sun::nio::cs::ext::EUC_JP_Open),
	$classEntry("sun.nio.cs.ext.EUC_JP_Open$Decoder", ::sun::nio::cs::ext::EUC_JP_Open$Decoder),
	$classEntry("sun.nio.cs.ext.EUC_JP_Open$Encoder", ::sun::nio::cs::ext::EUC_JP_Open$Encoder),
	$classEntry("sun.nio.cs.ext.EUC_KR", ::sun::nio::cs::ext::EUC_KR),
	$classEntry("sun.nio.cs.ext.EUC_KR$DecodeHolder", ::sun::nio::cs::ext::EUC_KR$DecodeHolder),
	$classEntry("sun.nio.cs.ext.EUC_KR$EncodeHolder", ::sun::nio::cs::ext::EUC_KR$EncodeHolder),
	$classEntry("sun.nio.cs.ext.EUC_TW", ::sun::nio::cs::ext::EUC_TW),
	$classEntry("sun.nio.cs.ext.EUC_TW$Decoder", ::sun::nio::cs::ext::EUC_TW$Decoder),
	$classEntry("sun.nio.cs.ext.EUC_TW$Encoder", ::sun::nio::cs::ext::EUC_TW$Encoder),
	$classEntry("sun.nio.cs.ext.EUC_TWMapping", ::sun::nio::cs::ext::EUC_TWMapping),
	$classEntry("sun.nio.cs.ext.ExtendedCharsets", ::sun::nio::cs::ext::ExtendedCharsets),
	$classEntry("sun.nio.cs.ext.HKSCS2001Mapping", ::sun::nio::cs::ext::HKSCS2001Mapping),
	$classEntry("sun.nio.cs.ext.IBM037", ::sun::nio::cs::ext::IBM037),
	$classEntry("sun.nio.cs.ext.IBM037$Holder", ::sun::nio::cs::ext::IBM037$Holder),
	$classEntry("sun.nio.cs.ext.IBM1006", ::sun::nio::cs::ext::IBM1006),
	$classEntry("sun.nio.cs.ext.IBM1006$Holder", ::sun::nio::cs::ext::IBM1006$Holder),
	$classEntry("sun.nio.cs.ext.IBM1025", ::sun::nio::cs::ext::IBM1025),
	$classEntry("sun.nio.cs.ext.IBM1025$Holder", ::sun::nio::cs::ext::IBM1025$Holder),
	$classEntry("sun.nio.cs.ext.IBM1026", ::sun::nio::cs::ext::IBM1026),
	$classEntry("sun.nio.cs.ext.IBM1026$Holder", ::sun::nio::cs::ext::IBM1026$Holder),
	$classEntry("sun.nio.cs.ext.IBM1046", ::sun::nio::cs::ext::IBM1046),
	$classEntry("sun.nio.cs.ext.IBM1046$Holder", ::sun::nio::cs::ext::IBM1046$Holder),
	$classEntry("sun.nio.cs.ext.IBM1047", ::sun::nio::cs::ext::IBM1047),
	$classEntry("sun.nio.cs.ext.IBM1047$Holder", ::sun::nio::cs::ext::IBM1047$Holder),
	$classEntry("sun.nio.cs.ext.IBM1097", ::sun::nio::cs::ext::IBM1097),
	$classEntry("sun.nio.cs.ext.IBM1097$Holder", ::sun::nio::cs::ext::IBM1097$Holder),
	$classEntry("sun.nio.cs.ext.IBM1098", ::sun::nio::cs::ext::IBM1098),
	$classEntry("sun.nio.cs.ext.IBM1098$Holder", ::sun::nio::cs::ext::IBM1098$Holder),
	$classEntry("sun.nio.cs.ext.IBM1112", ::sun::nio::cs::ext::IBM1112),
	$classEntry("sun.nio.cs.ext.IBM1112$Holder", ::sun::nio::cs::ext::IBM1112$Holder),
	$classEntry("sun.nio.cs.ext.IBM1122", ::sun::nio::cs::ext::IBM1122),
	$classEntry("sun.nio.cs.ext.IBM1122$Holder", ::sun::nio::cs::ext::IBM1122$Holder),
	$classEntry("sun.nio.cs.ext.IBM1123", ::sun::nio::cs::ext::IBM1123),
	$classEntry("sun.nio.cs.ext.IBM1123$Holder", ::sun::nio::cs::ext::IBM1123$Holder),
	$classEntry("sun.nio.cs.ext.IBM1124", ::sun::nio::cs::ext::IBM1124),
	$classEntry("sun.nio.cs.ext.IBM1124$Holder", ::sun::nio::cs::ext::IBM1124$Holder),
	$classEntry("sun.nio.cs.ext.IBM1129", ::sun::nio::cs::ext::IBM1129),
	$classEntry("sun.nio.cs.ext.IBM1129$Holder", ::sun::nio::cs::ext::IBM1129$Holder),
	$classEntry("sun.nio.cs.ext.IBM1140", ::sun::nio::cs::ext::IBM1140),
	$classEntry("sun.nio.cs.ext.IBM1140$Holder", ::sun::nio::cs::ext::IBM1140$Holder),
	$classEntry("sun.nio.cs.ext.IBM1141", ::sun::nio::cs::ext::IBM1141),
	$classEntry("sun.nio.cs.ext.IBM1141$Holder", ::sun::nio::cs::ext::IBM1141$Holder),
	$classEntry("sun.nio.cs.ext.IBM1142", ::sun::nio::cs::ext::IBM1142),
	$classEntry("sun.nio.cs.ext.IBM1142$Holder", ::sun::nio::cs::ext::IBM1142$Holder),
	$classEntry("sun.nio.cs.ext.IBM1143", ::sun::nio::cs::ext::IBM1143),
	$classEntry("sun.nio.cs.ext.IBM1143$Holder", ::sun::nio::cs::ext::IBM1143$Holder),
	$classEntry("sun.nio.cs.ext.IBM1144", ::sun::nio::cs::ext::IBM1144),
	$classEntry("sun.nio.cs.ext.IBM1144$Holder", ::sun::nio::cs::ext::IBM1144$Holder),
	$classEntry("sun.nio.cs.ext.IBM1145", ::sun::nio::cs::ext::IBM1145),
	$classEntry("sun.nio.cs.ext.IBM1145$Holder", ::sun::nio::cs::ext::IBM1145$Holder),
	$classEntry("sun.nio.cs.ext.IBM1146", ::sun::nio::cs::ext::IBM1146),
	$classEntry("sun.nio.cs.ext.IBM1146$Holder", ::sun::nio::cs::ext::IBM1146$Holder),
	$classEntry("sun.nio.cs.ext.IBM1147", ::sun::nio::cs::ext::IBM1147),
	$classEntry("sun.nio.cs.ext.IBM1147$Holder", ::sun::nio::cs::ext::IBM1147$Holder),
	$classEntry("sun.nio.cs.ext.IBM1148", ::sun::nio::cs::ext::IBM1148),
	$classEntry("sun.nio.cs.ext.IBM1148$Holder", ::sun::nio::cs::ext::IBM1148$Holder),
	$classEntry("sun.nio.cs.ext.IBM1149", ::sun::nio::cs::ext::IBM1149),
	$classEntry("sun.nio.cs.ext.IBM1149$Holder", ::sun::nio::cs::ext::IBM1149$Holder),
	$classEntry("sun.nio.cs.ext.IBM1166", ::sun::nio::cs::ext::IBM1166),
	$classEntry("sun.nio.cs.ext.IBM1166$Holder", ::sun::nio::cs::ext::IBM1166$Holder),
	$classEntry("sun.nio.cs.ext.IBM1364", ::sun::nio::cs::ext::IBM1364),
	$classEntry("sun.nio.cs.ext.IBM1364$DecodeHolder", ::sun::nio::cs::ext::IBM1364$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM1364$EncodeHolder", ::sun::nio::cs::ext::IBM1364$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM1381", ::sun::nio::cs::ext::IBM1381),
	$classEntry("sun.nio.cs.ext.IBM1381$DecodeHolder", ::sun::nio::cs::ext::IBM1381$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM1381$EncodeHolder", ::sun::nio::cs::ext::IBM1381$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM1383", ::sun::nio::cs::ext::IBM1383),
	$classEntry("sun.nio.cs.ext.IBM1383$DecodeHolder", ::sun::nio::cs::ext::IBM1383$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM1383$EncodeHolder", ::sun::nio::cs::ext::IBM1383$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM273", ::sun::nio::cs::ext::IBM273),
	$classEntry("sun.nio.cs.ext.IBM273$Holder", ::sun::nio::cs::ext::IBM273$Holder),
	$classEntry("sun.nio.cs.ext.IBM277", ::sun::nio::cs::ext::IBM277),
	$classEntry("sun.nio.cs.ext.IBM277$Holder", ::sun::nio::cs::ext::IBM277$Holder),
	$classEntry("sun.nio.cs.ext.IBM278", ::sun::nio::cs::ext::IBM278),
	$classEntry("sun.nio.cs.ext.IBM278$Holder", ::sun::nio::cs::ext::IBM278$Holder),
	$classEntry("sun.nio.cs.ext.IBM280", ::sun::nio::cs::ext::IBM280),
	$classEntry("sun.nio.cs.ext.IBM280$Holder", ::sun::nio::cs::ext::IBM280$Holder),
	$classEntry("sun.nio.cs.ext.IBM284", ::sun::nio::cs::ext::IBM284),
	$classEntry("sun.nio.cs.ext.IBM284$Holder", ::sun::nio::cs::ext::IBM284$Holder),
	$classEntry("sun.nio.cs.ext.IBM285", ::sun::nio::cs::ext::IBM285),
	$classEntry("sun.nio.cs.ext.IBM285$Holder", ::sun::nio::cs::ext::IBM285$Holder),
	$classEntry("sun.nio.cs.ext.IBM290", ::sun::nio::cs::ext::IBM290),
	$classEntry("sun.nio.cs.ext.IBM290$Holder", ::sun::nio::cs::ext::IBM290$Holder),
	$classEntry("sun.nio.cs.ext.IBM29626C", ::sun::nio::cs::ext::IBM29626C),
	$classEntry("sun.nio.cs.ext.IBM29626C$Decoder", ::sun::nio::cs::ext::IBM29626C$Decoder),
	$classEntry("sun.nio.cs.ext.IBM29626C$Encoder", ::sun::nio::cs::ext::IBM29626C$Encoder),
	$classEntry("sun.nio.cs.ext.IBM297", ::sun::nio::cs::ext::IBM297),
	$classEntry("sun.nio.cs.ext.IBM297$Holder", ::sun::nio::cs::ext::IBM297$Holder),
	$classEntry("sun.nio.cs.ext.IBM300", ::sun::nio::cs::ext::IBM300),
	$classEntry("sun.nio.cs.ext.IBM300$DecodeHolder", ::sun::nio::cs::ext::IBM300$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM300$EncodeHolder", ::sun::nio::cs::ext::IBM300$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM33722", ::sun::nio::cs::ext::IBM33722),
	$classEntry("sun.nio.cs.ext.IBM33722$Decoder", ::sun::nio::cs::ext::IBM33722$Decoder),
	$classEntry("sun.nio.cs.ext.IBM33722$Encoder", ::sun::nio::cs::ext::IBM33722$Encoder),
	$classEntry("sun.nio.cs.ext.IBM420", ::sun::nio::cs::ext::IBM420),
	$classEntry("sun.nio.cs.ext.IBM420$Holder", ::sun::nio::cs::ext::IBM420$Holder),
	$classEntry("sun.nio.cs.ext.IBM424", ::sun::nio::cs::ext::IBM424),
	$classEntry("sun.nio.cs.ext.IBM424$Holder", ::sun::nio::cs::ext::IBM424$Holder),
	$classEntry("sun.nio.cs.ext.IBM500", ::sun::nio::cs::ext::IBM500),
	$classEntry("sun.nio.cs.ext.IBM500$Holder", ::sun::nio::cs::ext::IBM500$Holder),
	$classEntry("sun.nio.cs.ext.IBM833", ::sun::nio::cs::ext::IBM833),
	$classEntry("sun.nio.cs.ext.IBM833$Holder", ::sun::nio::cs::ext::IBM833$Holder),
	$classEntry("sun.nio.cs.ext.IBM834", ::sun::nio::cs::ext::IBM834),
	$classEntry("sun.nio.cs.ext.IBM834$Encoder", ::sun::nio::cs::ext::IBM834$Encoder),
	$classEntry("sun.nio.cs.ext.IBM838", ::sun::nio::cs::ext::IBM838),
	$classEntry("sun.nio.cs.ext.IBM838$Holder", ::sun::nio::cs::ext::IBM838$Holder),
	$classEntry("sun.nio.cs.ext.IBM856", ::sun::nio::cs::ext::IBM856),
	$classEntry("sun.nio.cs.ext.IBM856$Holder", ::sun::nio::cs::ext::IBM856$Holder),
	$classEntry("sun.nio.cs.ext.IBM860", ::sun::nio::cs::ext::IBM860),
	$classEntry("sun.nio.cs.ext.IBM860$Holder", ::sun::nio::cs::ext::IBM860$Holder),
	$classEntry("sun.nio.cs.ext.IBM861", ::sun::nio::cs::ext::IBM861),
	$classEntry("sun.nio.cs.ext.IBM861$Holder", ::sun::nio::cs::ext::IBM861$Holder),
	$classEntry("sun.nio.cs.ext.IBM863", ::sun::nio::cs::ext::IBM863),
	$classEntry("sun.nio.cs.ext.IBM863$Holder", ::sun::nio::cs::ext::IBM863$Holder),
	$classEntry("sun.nio.cs.ext.IBM864", ::sun::nio::cs::ext::IBM864),
	$classEntry("sun.nio.cs.ext.IBM864$Holder", ::sun::nio::cs::ext::IBM864$Holder),
	$classEntry("sun.nio.cs.ext.IBM865", ::sun::nio::cs::ext::IBM865),
	$classEntry("sun.nio.cs.ext.IBM865$Holder", ::sun::nio::cs::ext::IBM865$Holder),
	$classEntry("sun.nio.cs.ext.IBM868", ::sun::nio::cs::ext::IBM868),
	$classEntry("sun.nio.cs.ext.IBM868$Holder", ::sun::nio::cs::ext::IBM868$Holder),
	$classEntry("sun.nio.cs.ext.IBM869", ::sun::nio::cs::ext::IBM869),
	$classEntry("sun.nio.cs.ext.IBM869$Holder", ::sun::nio::cs::ext::IBM869$Holder),
	$classEntry("sun.nio.cs.ext.IBM870", ::sun::nio::cs::ext::IBM870),
	$classEntry("sun.nio.cs.ext.IBM870$Holder", ::sun::nio::cs::ext::IBM870$Holder),
	$classEntry("sun.nio.cs.ext.IBM871", ::sun::nio::cs::ext::IBM871),
	$classEntry("sun.nio.cs.ext.IBM871$Holder", ::sun::nio::cs::ext::IBM871$Holder),
	$classEntry("sun.nio.cs.ext.IBM875", ::sun::nio::cs::ext::IBM875),
	$classEntry("sun.nio.cs.ext.IBM875$Holder", ::sun::nio::cs::ext::IBM875$Holder),
	$classEntry("sun.nio.cs.ext.IBM918", ::sun::nio::cs::ext::IBM918),
	$classEntry("sun.nio.cs.ext.IBM918$Holder", ::sun::nio::cs::ext::IBM918$Holder),
	$classEntry("sun.nio.cs.ext.IBM921", ::sun::nio::cs::ext::IBM921),
	$classEntry("sun.nio.cs.ext.IBM921$Holder", ::sun::nio::cs::ext::IBM921$Holder),
	$classEntry("sun.nio.cs.ext.IBM922", ::sun::nio::cs::ext::IBM922),
	$classEntry("sun.nio.cs.ext.IBM922$Holder", ::sun::nio::cs::ext::IBM922$Holder),
	$classEntry("sun.nio.cs.ext.IBM930", ::sun::nio::cs::ext::IBM930),
	$classEntry("sun.nio.cs.ext.IBM930$DecodeHolder", ::sun::nio::cs::ext::IBM930$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM930$EncodeHolder", ::sun::nio::cs::ext::IBM930$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM933", ::sun::nio::cs::ext::IBM933),
	$classEntry("sun.nio.cs.ext.IBM933$DecodeHolder", ::sun::nio::cs::ext::IBM933$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM933$EncodeHolder", ::sun::nio::cs::ext::IBM933$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM935", ::sun::nio::cs::ext::IBM935),
	$classEntry("sun.nio.cs.ext.IBM935$DecodeHolder", ::sun::nio::cs::ext::IBM935$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM935$EncodeHolder", ::sun::nio::cs::ext::IBM935$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM937", ::sun::nio::cs::ext::IBM937),
	$classEntry("sun.nio.cs.ext.IBM937$DecodeHolder", ::sun::nio::cs::ext::IBM937$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM937$EncodeHolder", ::sun::nio::cs::ext::IBM937$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM939", ::sun::nio::cs::ext::IBM939),
	$classEntry("sun.nio.cs.ext.IBM939$DecodeHolder", ::sun::nio::cs::ext::IBM939$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM939$EncodeHolder", ::sun::nio::cs::ext::IBM939$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM942", ::sun::nio::cs::ext::IBM942),
	$classEntry("sun.nio.cs.ext.IBM942$DecodeHolder", ::sun::nio::cs::ext::IBM942$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM942$EncodeHolder", ::sun::nio::cs::ext::IBM942$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM942C", ::sun::nio::cs::ext::IBM942C),
	$classEntry("sun.nio.cs.ext.IBM942C$Holder", ::sun::nio::cs::ext::IBM942C$Holder),
	$classEntry("sun.nio.cs.ext.IBM943", ::sun::nio::cs::ext::IBM943),
	$classEntry("sun.nio.cs.ext.IBM943$DecodeHolder", ::sun::nio::cs::ext::IBM943$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM943$EncodeHolder", ::sun::nio::cs::ext::IBM943$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM943C", ::sun::nio::cs::ext::IBM943C),
	$classEntry("sun.nio.cs.ext.IBM943C$Holder", ::sun::nio::cs::ext::IBM943C$Holder),
	$classEntry("sun.nio.cs.ext.IBM948", ::sun::nio::cs::ext::IBM948),
	$classEntry("sun.nio.cs.ext.IBM948$DecodeHolder", ::sun::nio::cs::ext::IBM948$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM948$EncodeHolder", ::sun::nio::cs::ext::IBM948$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM949", ::sun::nio::cs::ext::IBM949),
	$classEntry("sun.nio.cs.ext.IBM949$DecodeHolder", ::sun::nio::cs::ext::IBM949$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM949$EncodeHolder", ::sun::nio::cs::ext::IBM949$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM949C", ::sun::nio::cs::ext::IBM949C),
	$classEntry("sun.nio.cs.ext.IBM949C$Holder", ::sun::nio::cs::ext::IBM949C$Holder),
	$classEntry("sun.nio.cs.ext.IBM950", ::sun::nio::cs::ext::IBM950),
	$classEntry("sun.nio.cs.ext.IBM950$DecodeHolder", ::sun::nio::cs::ext::IBM950$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM950$EncodeHolder", ::sun::nio::cs::ext::IBM950$EncodeHolder),
	$classEntry("sun.nio.cs.ext.IBM964", ::sun::nio::cs::ext::IBM964),
	$classEntry("sun.nio.cs.ext.IBM964$Decoder", ::sun::nio::cs::ext::IBM964$Decoder),
	$classEntry("sun.nio.cs.ext.IBM964$Encoder", ::sun::nio::cs::ext::IBM964$Encoder),
	$classEntry("sun.nio.cs.ext.IBM970", ::sun::nio::cs::ext::IBM970),
	$classEntry("sun.nio.cs.ext.IBM970$DecodeHolder", ::sun::nio::cs::ext::IBM970$DecodeHolder),
	$classEntry("sun.nio.cs.ext.IBM970$EncodeHolder", ::sun::nio::cs::ext::IBM970$EncodeHolder),
	$classEntry("sun.nio.cs.ext.ISCII91", ::sun::nio::cs::ext::ISCII91),
	$classEntry("sun.nio.cs.ext.ISCII91$Decoder", ::sun::nio::cs::ext::ISCII91$Decoder),
	$classEntry("sun.nio.cs.ext.ISCII91$Encoder", ::sun::nio::cs::ext::ISCII91$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022", ::sun::nio::cs::ext::ISO2022),
	$classEntry("sun.nio.cs.ext.ISO2022$Encoder", ::sun::nio::cs::ext::ISO2022$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022_CN", ::sun::nio::cs::ext::ISO2022_CN),
	$classEntry("sun.nio.cs.ext.ISO2022_CN$Decoder", ::sun::nio::cs::ext::ISO2022_CN$Decoder),
	$classEntry("sun.nio.cs.ext.ISO2022_CN_CNS", ::sun::nio::cs::ext::ISO2022_CN_CNS),
	$classEntry("sun.nio.cs.ext.ISO2022_CN_CNS$Encoder", ::sun::nio::cs::ext::ISO2022_CN_CNS$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022_CN_GB", ::sun::nio::cs::ext::ISO2022_CN_GB),
	$classEntry("sun.nio.cs.ext.ISO2022_CN_GB$Encoder", ::sun::nio::cs::ext::ISO2022_CN_GB$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022_JP", ::sun::nio::cs::ext::ISO2022_JP),
	$classEntry("sun.nio.cs.ext.ISO2022_JP$Decoder", ::sun::nio::cs::ext::ISO2022_JP$Decoder),
	$classEntry("sun.nio.cs.ext.ISO2022_JP$Encoder", ::sun::nio::cs::ext::ISO2022_JP$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022_JP_2", ::sun::nio::cs::ext::ISO2022_JP_2),
	$classEntry("sun.nio.cs.ext.ISO2022_JP_2$CoderHolder", ::sun::nio::cs::ext::ISO2022_JP_2$CoderHolder),
	$classEntry("sun.nio.cs.ext.ISO2022_KR", ::sun::nio::cs::ext::ISO2022_KR),
	$classEntry("sun.nio.cs.ext.ISO2022_KR$Decoder", ::sun::nio::cs::ext::ISO2022_KR$Decoder),
	$classEntry("sun.nio.cs.ext.ISO2022_KR$Encoder", ::sun::nio::cs::ext::ISO2022_KR$Encoder),
	$classEntry("sun.nio.cs.ext.ISO2022_KR$Holder", ::sun::nio::cs::ext::ISO2022_KR$Holder),
	$classEntry("sun.nio.cs.ext.ISO_8859_11", ::sun::nio::cs::ext::ISO_8859_11),
	$classEntry("sun.nio.cs.ext.ISO_8859_11$Holder", ::sun::nio::cs::ext::ISO_8859_11$Holder),
	$classEntry("sun.nio.cs.ext.ISO_8859_3", ::sun::nio::cs::ext::ISO_8859_3),
	$classEntry("sun.nio.cs.ext.ISO_8859_3$Holder", ::sun::nio::cs::ext::ISO_8859_3$Holder),
	$classEntry("sun.nio.cs.ext.ISO_8859_6", ::sun::nio::cs::ext::ISO_8859_6),
	$classEntry("sun.nio.cs.ext.ISO_8859_6$Holder", ::sun::nio::cs::ext::ISO_8859_6$Holder),
	$classEntry("sun.nio.cs.ext.ISO_8859_8", ::sun::nio::cs::ext::ISO_8859_8),
	$classEntry("sun.nio.cs.ext.ISO_8859_8$Holder", ::sun::nio::cs::ext::ISO_8859_8$Holder),
	$classEntry("sun.nio.cs.ext.JISAutoDetect", ::sun::nio::cs::ext::JISAutoDetect),
	$classEntry("sun.nio.cs.ext.JISAutoDetect$Decoder", ::sun::nio::cs::ext::JISAutoDetect$Decoder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208", ::sun::nio::cs::ext::JIS_X_0208),
	$classEntry("sun.nio.cs.ext.JIS_X_0208$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0208$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0208$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS5022X", ::sun::nio::cs::ext::JIS_X_0208_MS5022X),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS5022X$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0208_MS5022X$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS5022X$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0208_MS5022X$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS932", ::sun::nio::cs::ext::JIS_X_0208_MS932),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS932$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0208_MS932$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0208_MS932$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_Solaris", ::sun::nio::cs::ext::JIS_X_0208_Solaris),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_Solaris$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0208_Solaris$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0208_Solaris$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0208_Solaris$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212", ::sun::nio::cs::ext::JIS_X_0212),
	$classEntry("sun.nio.cs.ext.JIS_X_0212$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0212$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0212$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_MS5022X", ::sun::nio::cs::ext::JIS_X_0212_MS5022X),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_MS5022X$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0212_MS5022X$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_MS5022X$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0212_MS5022X$EncodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_Solaris", ::sun::nio::cs::ext::JIS_X_0212_Solaris),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_Solaris$DecodeHolder", ::sun::nio::cs::ext::JIS_X_0212_Solaris$DecodeHolder),
	$classEntry("sun.nio.cs.ext.JIS_X_0212_Solaris$EncodeHolder", ::sun::nio::cs::ext::JIS_X_0212_Solaris$EncodeHolder),
	$classEntry("sun.nio.cs.ext.MS50220", ::sun::nio::cs::ext::MS50220),
	$classEntry("sun.nio.cs.ext.MS50220$Holder", ::sun::nio::cs::ext::MS50220$Holder),
	$classEntry("sun.nio.cs.ext.MS50221", ::sun::nio::cs::ext::MS50221),
	$classEntry("sun.nio.cs.ext.MS932_0213", ::sun::nio::cs::ext::MS932_0213),
	$classEntry("sun.nio.cs.ext.MS932_0213$Decoder", ::sun::nio::cs::ext::MS932_0213$Decoder),
	$classEntry("sun.nio.cs.ext.MS932_0213$Encoder", ::sun::nio::cs::ext::MS932_0213$Encoder),
	$classEntry("sun.nio.cs.ext.MSISO2022JP", ::sun::nio::cs::ext::MSISO2022JP),
	$classEntry("sun.nio.cs.ext.MSISO2022JP$CoderHolder", ::sun::nio::cs::ext::MSISO2022JP$CoderHolder),
	$classEntry("sun.nio.cs.ext.MacArabic", ::sun::nio::cs::ext::MacArabic),
	$classEntry("sun.nio.cs.ext.MacArabic$Holder", ::sun::nio::cs::ext::MacArabic$Holder),
	$classEntry("sun.nio.cs.ext.MacCentralEurope", ::sun::nio::cs::ext::MacCentralEurope),
	$classEntry("sun.nio.cs.ext.MacCentralEurope$Holder", ::sun::nio::cs::ext::MacCentralEurope$Holder),
	$classEntry("sun.nio.cs.ext.MacCroatian", ::sun::nio::cs::ext::MacCroatian),
	$classEntry("sun.nio.cs.ext.MacCroatian$Holder", ::sun::nio::cs::ext::MacCroatian$Holder),
	$classEntry("sun.nio.cs.ext.MacCyrillic", ::sun::nio::cs::ext::MacCyrillic),
	$classEntry("sun.nio.cs.ext.MacCyrillic$Holder", ::sun::nio::cs::ext::MacCyrillic$Holder),
	$classEntry("sun.nio.cs.ext.MacDingbat", ::sun::nio::cs::ext::MacDingbat),
	$classEntry("sun.nio.cs.ext.MacDingbat$Holder", ::sun::nio::cs::ext::MacDingbat$Holder),
	$classEntry("sun.nio.cs.ext.MacGreek", ::sun::nio::cs::ext::MacGreek),
	$classEntry("sun.nio.cs.ext.MacGreek$Holder", ::sun::nio::cs::ext::MacGreek$Holder),
	$classEntry("sun.nio.cs.ext.MacHebrew", ::sun::nio::cs::ext::MacHebrew),
	$classEntry("sun.nio.cs.ext.MacHebrew$Holder", ::sun::nio::cs::ext::MacHebrew$Holder),
	$classEntry("sun.nio.cs.ext.MacIceland", ::sun::nio::cs::ext::MacIceland),
	$classEntry("sun.nio.cs.ext.MacIceland$Holder", ::sun::nio::cs::ext::MacIceland$Holder),
	$classEntry("sun.nio.cs.ext.MacRoman", ::sun::nio::cs::ext::MacRoman),
	$classEntry("sun.nio.cs.ext.MacRoman$Holder", ::sun::nio::cs::ext::MacRoman$Holder),
	$classEntry("sun.nio.cs.ext.MacRomania", ::sun::nio::cs::ext::MacRomania),
	$classEntry("sun.nio.cs.ext.MacRomania$Holder", ::sun::nio::cs::ext::MacRomania$Holder),
	$classEntry("sun.nio.cs.ext.MacSymbol", ::sun::nio::cs::ext::MacSymbol),
	$classEntry("sun.nio.cs.ext.MacSymbol$Holder", ::sun::nio::cs::ext::MacSymbol$Holder),
	$classEntry("sun.nio.cs.ext.MacThai", ::sun::nio::cs::ext::MacThai),
	$classEntry("sun.nio.cs.ext.MacThai$Holder", ::sun::nio::cs::ext::MacThai$Holder),
	$classEntry("sun.nio.cs.ext.MacTurkish", ::sun::nio::cs::ext::MacTurkish),
	$classEntry("sun.nio.cs.ext.MacTurkish$Holder", ::sun::nio::cs::ext::MacTurkish$Holder),
	$classEntry("sun.nio.cs.ext.MacUkraine", ::sun::nio::cs::ext::MacUkraine),
	$classEntry("sun.nio.cs.ext.MacUkraine$Holder", ::sun::nio::cs::ext::MacUkraine$Holder),
	$classEntry("sun.nio.cs.ext.PCK", ::sun::nio::cs::ext::PCK),
	$classEntry("sun.nio.cs.ext.PCK$DecodeHolder", ::sun::nio::cs::ext::PCK$DecodeHolder),
	$classEntry("sun.nio.cs.ext.PCK$EncodeHolder", ::sun::nio::cs::ext::PCK$EncodeHolder),
	$classEntry("sun.nio.cs.ext.SJIS_0213", ::sun::nio::cs::ext::SJIS_0213),
	$classEntry("sun.nio.cs.ext.SJIS_0213$Decoder", ::sun::nio::cs::ext::SJIS_0213$Decoder),
	$classEntry("sun.nio.cs.ext.SJIS_0213$Encoder", ::sun::nio::cs::ext::SJIS_0213$Encoder),
	$classEntry("sun.nio.cs.ext.SJIS_0213$Holder", ::sun::nio::cs::ext::SJIS_0213$Holder),
	$classEntry("sun.nio.cs.ext.SJIS_0213$Holder$1", ::sun::nio::cs::ext::SJIS_0213$Holder$1),
	$classEntry("sun.nio.cs.ext.SimpleEUCEncoder", ::sun::nio::cs::ext::SimpleEUCEncoder),
	$classEntry("sun.nio.cs.ext.TIS_620", ::sun::nio::cs::ext::TIS_620),
	$classEntry("sun.nio.cs.ext.TIS_620$Holder", ::sun::nio::cs::ext::TIS_620$Holder)
};

const char* _jdk$charsets_packages_[] = {
	"sun.nio.cs.ext"
};

void jdk$charsets$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$charsets_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$charsets_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$charsets$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$charsets$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$charsets$GetPackages() {
	int32_t length = $lengthOf(_jdk$charsets_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$charsets_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$charsets$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$charsets_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$charsets_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$charsets$GetResource($String* name) {
	return nullptr;
}

void jdk$charsets::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.charsets", "17.35", "",
		&_jdk$charsets_ModuleInfo_,
		jdk$charsets$LibEventAction,
		jdk$charsets$GetPackages,
		jdk$charsets$GetClassEntry,
		jdk$charsets$GetResource
	};
	$System::addLibrary(&lib);
}