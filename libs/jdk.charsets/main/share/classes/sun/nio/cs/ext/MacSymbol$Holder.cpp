#include <sun/nio/cs/ext/MacSymbol$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacSymbol.h>
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

$String* MacSymbol$Holder::b2cTable = nullptr;
$chars* MacSymbol$Holder::b2c = nullptr;
$chars* MacSymbol$Holder::c2b = nullptr;
$chars* MacSymbol$Holder::c2bIndex = nullptr;

void MacSymbol$Holder::init$() {
}

void MacSymbol$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MacSymbol$Holder::b2cTable, $cstr({0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x20ac, 0x03d2, 0x2032, 0x2264, 0x2044, 0x221e, 0x0192, 0x2663, 0x2666, 0x2665, 0x2660, 0x2194, 0x2190, 0x2191, 0x2192, 0x2193, 0xb0, 0xb1, 0x2033, 0x2265, 0xd7, 0x221d, 0x2202, 0x2022, 0xf7, 0x2260, 0x2261, 0x2248, 0x2026, 0xf8e6, 0xf8e7, 0x21b5, 0x2135, 0x2111, 0x211c, 0x2118, 0x2297, 0x2295, 0x2205, 0x2229, 0x222a, 0x2283, 0x2287, 0x2284, 0x2282, 0x2286, 0x2208, 0x2209, 0x2220, 0x2207, 0xae, 0xa9, 0x2122, 0x220f, 0x221a, 0x22c5, 0xac, 0x2227, 0x2228, 0x21d4, 0x21d0, 0x21d1, 0x21d2, 0x21d3, 0x22c4, 0x3008, 0xfffd, 0xfffd, 0xfffd, 0x2211, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xf8f4, 0xf8ff, 0x3009, 0x222b, 0x2320, 0xfffd, 0x2321, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', 0x2200, '#', 0x2203, '%', '&', 0x220d, '(', ')', 0x2217, '+', ',', 0x2212, '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', 0x2245, 0x0391, 0x0392, 0x03a7, 0x0394, 0x0395, 0x03a6, 0x0393, 0x0397, 0x0399, 0x03d1, 0x039a, 0x039b, 0x039c, 0x039d, 0x039f, 0x03a0, 0x0398, 0x03a1, 0x03a3, 0x03a4, 0x03a5, 0x03c2, 0x03a9, 0x039e, 0x03a8, 0x0396, '[', 0x2234, ']', 0x22a5, '_', 0xf8e5, 0x03b1, 0x03b2, 0x03c7, 0x03b4, 0x03b5, 0x03c6, 0x03b3, 0x03b7, 0x03b9, 0x03d5, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03bf, 0x03c0, 0x03b8, 0x03c1, 0x03c3, 0x03c4, 0x03c5, 0x03d6, 0x03c9, 0x03be, 0x03c8, 0x03b6, '{', '|', '}', 0x223c, 0x7f}));
	$assignStatic(MacSymbol$Holder::b2c, MacSymbol$Holder::b2cTable->toCharArray());
	$assignStatic(MacSymbol$Holder::c2b, $new($chars, 2816));
	$assignStatic(MacSymbol$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacSymbol$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacSymbol$Holder::c2b, MacSymbol$Holder::c2bIndex);
	}
}

MacSymbol$Holder::MacSymbol$Holder() {
}

$Class* MacSymbol$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacSymbol$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MacSymbol$Holder", "sun.nio.cs.ext.MacSymbol", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.MacSymbol$Holder",
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
		"sun.nio.cs.ext.MacSymbol"
	};
	$loadClass(MacSymbol$Holder, name, initialize, &classInfo$$, MacSymbol$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacSymbol$Holder);
	});
	return class$;
}

$Class* MacSymbol$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun