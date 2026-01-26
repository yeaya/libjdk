#include <sun/nio/cs/ext/IBM420$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM420.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM420$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM420$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(IBM420$Holder, init$, void)},
	{}
};

$InnerClassInfo _IBM420$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM420$Holder", "sun.nio.cs.ext.IBM420", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM420$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM420$Holder",
	"java.lang.Object",
	nullptr,
	_IBM420$Holder_FieldInfo_,
	_IBM420$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM420$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM420"
};

$Object* allocate$IBM420$Holder($Class* clazz) {
	return $of($alloc(IBM420$Holder));
}

$String* IBM420$Holder::b2cTable = nullptr;
$chars* IBM420$Holder::b2c = nullptr;
$chars* IBM420$Holder::c2b = nullptr;
$chars* IBM420$Holder::c2bIndex = nullptr;

void IBM420$Holder::init$() {
}

void clinit$IBM420$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM420$Holder::b2cTable, $cstr({0x634, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xFEB7, 0x635, 0xFEBB, 0x636, 0xFEBF, 0x637, 0x638, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x639, 0xFECA, 0xFECB, 0xFECC, 0x63A, 0xFECE, 0xFECF, 0xF7, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xFED0, 0x641, 0xFED3, 0x642, 0xFED7, 0x643, 0xFEDB, 0x644, 0xFEF5, 0xFEF6, 0xFEF7, 0xFEF8, 0xFFFD, 0xFFFD, 0xFEFB, 0xFEFC, 0xFEDF, 0x645, 0xFEE3, 0x646, 0xFEE7, 0x647, 0x61B, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xFEEB, 0xFFFD, 0xFEEC, 0xFFFD, 0x648, 0x61F, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x649, 0xFEF0, 0x64A, 0xFEF2, 0xFEF3, 0x660, 0xD7, 0xFFFD, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x661, 0x662, 0xFFFD, 0x663, 0x664, 0x665, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xFFFD, 0x666, 0x667, 0x668, 0x669, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x651, 0xFE7D, 0x640, 0x200B, 0x621, 0x622, 0xFE82, 0x623, 0xA2, '.', '<', '(', '+', '|', '&', 0xFE84, 0x624, 0xFFFD, 0xFFFD, 0x626, 0x627, 0xFE8E, 0x628, 0xFE91, '!', '$', '*', ')', ';', 0xAC, '-', '/', 0x629, 0x62A, 0xFE97, 0x62B, 0xFE9B, 0x62C, 0xFE9F, 0x62D, 0xA6, ',', '%', '_', '>', '?', 0xFEA3, 0x62E, 0xFEA7, 0x62F, 0x630, 0x631, 0x632, 0x633, 0xFEB3, 0x60C, ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM420$Holder::b2c, $nc(IBM420$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM420$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM420$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM420$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM420$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, (u"\u0015\u0085BﹼFﺀGﺁIﺃK٬K．L＜M（N＋O｜P＆RﺅRﺆUﺉUﺊUﺋUﺌVإVﺇVﺍWﺈXﺏXﺐYﺒZ！[＄\\٭\\＊]）^；`－a／bﺓbﺔcﺕcﺖdﺘeﺙeﺚfﺜgﺝgﺞhﺠiﺡiﺢk٫k，l٪l％m＿n＞o？pﺤqﺥqﺦrﺨsﺩsﺪtﺫtﺬuﺭuﺮvﺯvﺰwﺱwﺲxﺴz：{＃|＠}＇~＝\u007f＂\u0080ﺵ\u0080ﺶ\u0081ａ\u0082ｂ\u0083ｃ\u0084ｄ\u0085ｅ\u0086ｆ\u0087ｇ\u0088ｈ\u0089ｉ\u008aﺸ\u008bﺹ\u008bﺺ\u008cﺼ\u008dﺽ\u008dﺾ\u008eﻀ\u008fﻁ\u008fﻂ\u008fﻃ\u008fﻄ\u0090ﻅ\u0090ﻆ\u0090ﻇ\u0090ﻈ\u0091ｊ\u0092ｋ\u0093ｌ\u0094ｍ\u0095ｎ\u0096ｏ\u0097ｐ\u0098ｑ\u0099ｒ\u009aﻉ\u009eﻍ¢ｓ£ｔ¤ｕ¥ｖ¦ｗ§ｘ¨ｙ©ｚ«ﻑ«ﻒ¬ﻔ\u00adﻕ\u00adﻖ®ﻘ¯ﻙ¯ﻚ°ﻜ±ﻝ±ﻞ¸ﻹ¹ﻺºﻠ»ﻡ»ﻢ¼ﻤ½ﻥ½ﻦ¾ﻨ¿ﻩ¿ﻪÁＡÂＢÃＣÄＤÅＥÆＦÇＧÈＨÉＩÏﻭÏﻮÑＪÒＫÓＬÔＭÕＮÖＯ×ＰØＱÙＲÚﻯÜﻱÞﻴâＳãＴäＵåＶæＷçＸèＹéＺð０ñ１ò２ó３ô４õ５ö６÷７ø８ù９"_s)->toCharArray());
		$SingleByte::initC2B(b2cMap, c2bNR, IBM420$Holder::c2b, IBM420$Holder::c2bIndex);
	}
}

IBM420$Holder::IBM420$Holder() {
}

$Class* IBM420$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM420$Holder, name, initialize, &_IBM420$Holder_ClassInfo_, clinit$IBM420$Holder, allocate$IBM420$Holder);
	return class$;
}

$Class* IBM420$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun