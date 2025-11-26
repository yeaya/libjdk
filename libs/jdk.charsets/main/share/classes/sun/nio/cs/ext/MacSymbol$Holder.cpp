#include <sun/nio/cs/ext/MacSymbol$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacSymbol.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacSymbol = ::sun::nio::cs::ext::MacSymbol;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacSymbol$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacSymbol$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacSymbol$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacSymbol$Holder::*)()>(&MacSymbol$Holder::init$))},
	{}
};

$InnerClassInfo _MacSymbol$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacSymbol$Holder", "sun.nio.cs.ext.MacSymbol", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacSymbol$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacSymbol$Holder",
	"java.lang.Object",
	nullptr,
	_MacSymbol$Holder_FieldInfo_,
	_MacSymbol$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacSymbol$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacSymbol"
};

$Object* allocate$MacSymbol$Holder($Class* clazz) {
	return $of($alloc(MacSymbol$Holder));
}

$String* MacSymbol$Holder::b2cTable = nullptr;
$chars* MacSymbol$Holder::b2c = nullptr;
$chars* MacSymbol$Holder::c2b = nullptr;
$chars* MacSymbol$Holder::c2bIndex = nullptr;

void MacSymbol$Holder::init$() {
}

void clinit$MacSymbol$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacSymbol$Holder::b2cTable, $cstr({0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x20AC, 0x3D2, 0x2032, 0x2264, 0x2044, 0x221E, 0x192, 0x2663, 0x2666, 0x2665, 0x2660, 0x2194, 0x2190, 0x2191, 0x2192, 0x2193, 0xB0, 0xB1, 0x2033, 0x2265, 0xD7, 0x221D, 0x2202, 0x2022, 0xF7, 0x2260, 0x2261, 0x2248, 0x2026, 0xF8E6, 0xF8E7, 0x21B5, 0x2135, 0x2111, 0x211C, 0x2118, 0x2297, 0x2295, 0x2205, 0x2229, 0x222A, 0x2283, 0x2287, 0x2284, 0x2282, 0x2286, 0x2208, 0x2209, 0x2220, 0x2207, 0xAE, 0xA9, 0x2122, 0x220F, 0x221A, 0x22C5, 0xAC, 0x2227, 0x2228, 0x21D4, 0x21D0, 0x21D1, 0x21D2, 0x21D3, 0x22C4, 0x3008, 0xFFFD, 0xFFFD, 0xFFFD, 0x2211, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xF8F4, 0xF8FF, 0x3009, 0x222B, 0x2320, 0xFFFD, 0x2321, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', 0x2200, '#', 0x2203, '%', '&', 0x220D, '(', ')', 0x2217, '+', ',', 0x2212, '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', 0x2245, 0x391, 0x392, 0x3A7, 0x394, 0x395, 0x3A6, 0x393, 0x397, 0x399, 0x3D1, 0x39A, 0x39B, 0x39C, 0x39D, 0x39F, 0x3A0, 0x398, 0x3A1, 0x3A3, 0x3A4, 0x3A5, 0x3C2, 0x3A9, 0x39E, 0x3A8, 0x396, '[', 0x2234, ']', 0x22A5, '_', 0xF8E5, 0x3B1, 0x3B2, 0x3C7, 0x3B4, 0x3B5, 0x3C6, 0x3B3, 0x3B7, 0x3B9, 0x3D5, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BF, 0x3C0, 0x3B8, 0x3C1, 0x3C3, 0x3C4, 0x3C5, 0x3D6, 0x3C9, 0x3BE, 0x3C8, 0x3B6, '{', '|', '}', 0x223C, 0x7F}));
	$assignStatic(MacSymbol$Holder::b2c, $nc(MacSymbol$Holder::b2cTable)->toCharArray());
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
	$loadClass(MacSymbol$Holder, name, initialize, &_MacSymbol$Holder_ClassInfo_, clinit$MacSymbol$Holder, allocate$MacSymbol$Holder);
	return class$;
}

$Class* MacSymbol$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun