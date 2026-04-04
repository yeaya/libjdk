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

$String* IBM420$Holder::b2cTable = nullptr;
$chars* IBM420$Holder::b2c = nullptr;
$chars* IBM420$Holder::c2b = nullptr;
$chars* IBM420$Holder::c2bIndex = nullptr;

void IBM420$Holder::init$() {
}

void IBM420$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM420$Holder::b2cTable, $cstr({0x0634, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xfeb7, 0x0635, 0xfebb, 0x0636, 0xfebf, 0x0637, 0x0638, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x0639, 0xfeca, 0xfecb, 0xfecc, 0x063a, 0xfece, 0xfecf, 0xf7, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xfed0, 0x0641, 0xfed3, 0x0642, 0xfed7, 0x0643, 0xfedb, 0x0644, 0xfef5, 0xfef6, 0xfef7, 0xfef8, 0xfffd, 0xfffd, 0xfefb, 0xfefc, 0xfedf, 0x0645, 0xfee3, 0x0646, 0xfee7, 0x0647, 0x061b, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xfeeb, 0xfffd, 0xfeec, 0xfffd, 0x0648, 0x061f, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x0649, 0xfef0, 0x064a, 0xfef2, 0xfef3, 0x0660, 0xd7, 0xfffd, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x0661, 0x0662, 0xfffd, 0x0663, 0x0664, 0x0665, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xfffd, 0x0666, 0x0667, 0x0668, 0x0669, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x0651, 0xfe7d, 0x0640, 0x200b, 0x0621, 0x0622, 0xfe82, 0x0623, 0xa2, '.', '<', '(', '+', '|', '&', 0xfe84, 0x0624, 0xfffd, 0xfffd, 0x0626, 0x0627, 0xfe8e, 0x0628, 0xfe91, '!', '$', '*', ')', ';', 0xac, '-', '/', 0x0629, 0x062a, 0xfe97, 0x062b, 0xfe9b, 0x062c, 0xfe9f, 0x062d, 0xa6, ',', '%', '_', '>', '?', 0xfea3, 0x062e, 0xfea7, 0x062f, 0x0630, 0x0631, 0x0632, 0x0633, 0xfeb3, 0x060c, ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM420$Holder::b2c, IBM420$Holder::b2cTable->toCharArray());
	$assignStatic(IBM420$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM420$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM420$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM420$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, (u"\u0015\u0085BﹼFﺀGﺁIﺃK٬K．L＜M（N＋O｜P＆RﺅRﺆUﺉUﺊUﺋUﺌVإVﺇVﺍWﺈXﺏXﺐYﺒZ！[＄\\٭\\＊]）^；`－a／bﺓbﺔcﺕcﺖdﺘeﺙeﺚfﺜgﺝgﺞhﺠiﺡiﺢk٫k，l٪l％m＿n＞o？pﺤqﺥqﺦrﺨsﺩsﺪtﺫtﺬuﺭuﺮvﺯvﺰwﺱwﺲxﺴz：{＃|＠}＇~＝\u007f＂\u0080ﺵ\u0080ﺶ\u0081ａ\u0082ｂ\u0083ｃ\u0084ｄ\u0085ｅ\u0086ｆ\u0087ｇ\u0088ｈ\u0089ｉ\u008aﺸ\u008bﺹ\u008bﺺ\u008cﺼ\u008dﺽ\u008dﺾ\u008eﻀ\u008fﻁ\u008fﻂ\u008fﻃ\u008fﻄ\u0090ﻅ\u0090ﻆ\u0090ﻇ\u0090ﻈ\u0091ｊ\u0092ｋ\u0093ｌ\u0094ｍ\u0095ｎ\u0096ｏ\u0097ｐ\u0098ｑ\u0099ｒ\u009aﻉ\u009eﻍ¢ｓ£ｔ¤ｕ¥ｖ¦ｗ§ｘ¨ｙ©ｚ«ﻑ«ﻒ¬ﻔ\u00adﻕ\u00adﻖ®ﻘ¯ﻙ¯ﻚ°ﻜ±ﻝ±ﻞ¸ﻹ¹ﻺºﻠ»ﻡ»ﻢ¼ﻤ½ﻥ½ﻦ¾ﻨ¿ﻩ¿ﻪÁＡÂＢÃＣÄＤÅＥÆＦÇＧÈＨÉＩÏﻭÏﻮÑＪÒＫÓＬÔＭÕＮÖＯ×ＰØＱÙＲÚﻯÜﻱÞﻴâＳãＴäＵåＶæＷçＸèＹéＺð０ñ１ò２ó３ô４õ５ö６÷７ø８ù９"_s)->toCharArray());
		$SingleByte::initC2B(b2cMap, c2bNR, IBM420$Holder::c2b, IBM420$Holder::c2bIndex);
	}
}

IBM420$Holder::IBM420$Holder() {
}

$Class* IBM420$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM420$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM420$Holder", "sun.nio.cs.ext.IBM420", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM420$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM420"
	};
	$loadClass(IBM420$Holder, name, initialize, &classInfo$$, IBM420$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM420$Holder);
	});
	return class$;
}

$Class* IBM420$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun