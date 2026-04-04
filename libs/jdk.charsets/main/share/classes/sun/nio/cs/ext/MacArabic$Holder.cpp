#include <sun/nio/cs/ext/MacArabic$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacArabic.h>
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

$String* MacArabic$Holder::b2cTable = nullptr;
$chars* MacArabic$Holder::b2c = nullptr;
$chars* MacArabic$Holder::c2b = nullptr;
$chars* MacArabic$Holder::c2bIndex = nullptr;

void MacArabic$Holder::init$() {
}

void MacArabic$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MacArabic$Holder::b2cTable, $cstr({0xc4, 0xa0, 0xc7, 0xc9, 0xd1, 0xd6, 0xdc, 0xe1, 0xe0, 0xe2, 0xe4, 0x06ba, 0xab, 0xe7, 0xe9, 0xe8, 0xea, 0xeb, 0xed, 0x2026, 0xee, 0xef, 0xf1, 0xf3, 0xbb, 0xf4, 0xf6, 0xf7, 0xfa, 0xf9, 0xfb, 0xfc, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x066a, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x060c, 0xfffd, 0xfffd, 0xfffd, 0x0660, 0x0661, 0x0662, 0x0663, 0x0664, 0x0665, 0x0666, 0x0667, 0x0668, 0x0669, 0xfffd, 0x061b, 0xfffd, 0xfffd, 0xfffd, 0x061f, 0x066d, 0x0621, 0x0622, 0x0623, 0x0624, 0x0625, 0x0626, 0x0627, 0x0628, 0x0629, 0x062a, 0x062b, 0x062c, 0x062d, 0x062e, 0x062f, 0x0630, 0x0631, 0x0632, 0x0633, 0x0634, 0x0635, 0x0636, 0x0637, 0x0638, 0x0639, 0x063a, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x0640, 0x0641, 0x0642, 0x0643, 0x0644, 0x0645, 0x0646, 0x0647, 0x0648, 0x0649, 0x064a, 0x064b, 0x064c, 0x064d, 0x064e, 0x064f, 0x0650, 0x0651, 0x0652, 0x067e, 0x0679, 0x0686, 0x06d5, 0x06a4, 0x06af, 0x0688, 0x0691, 0xfffd, 0xfffd, 0xfffd, 0x0698, 0x06d2, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MacArabic$Holder::b2c, MacArabic$Holder::b2cTable->toCharArray());
	$assignStatic(MacArabic$Holder::c2b, $new($chars, 1024));
	$assignStatic(MacArabic$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacArabic$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacArabic$Holder::c2b, MacArabic$Holder::c2bIndex);
	}
}

MacArabic$Holder::MacArabic$Holder() {
}

$Class* MacArabic$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacArabic$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MacArabic$Holder", "sun.nio.cs.ext.MacArabic", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.MacArabic$Holder",
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
		"sun.nio.cs.ext.MacArabic"
	};
	$loadClass(MacArabic$Holder, name, initialize, &classInfo$$, MacArabic$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacArabic$Holder);
	});
	return class$;
}

$Class* MacArabic$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun