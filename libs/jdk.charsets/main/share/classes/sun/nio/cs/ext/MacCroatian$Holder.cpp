#include <sun/nio/cs/ext/MacCroatian$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacCroatian.h>
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

$String* MacCroatian$Holder::b2cTable = nullptr;
$chars* MacCroatian$Holder::b2c = nullptr;
$chars* MacCroatian$Holder::c2b = nullptr;
$chars* MacCroatian$Holder::c2bIndex = nullptr;

void MacCroatian$Holder::init$() {
}

void MacCroatian$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MacCroatian$Holder::b2cTable, $cstr({0xc4, 0xc5, 0xc7, 0xc9, 0xd1, 0xd6, 0xdc, 0xe1, 0xe0, 0xe2, 0xe4, 0xe3, 0xe5, 0xe7, 0xe9, 0xe8, 0xea, 0xeb, 0xed, 0xec, 0xee, 0xef, 0xf1, 0xf3, 0xf2, 0xf4, 0xf6, 0xf5, 0xfa, 0xf9, 0xfb, 0xfc, 0x2020, 0xb0, 0xa2, 0xa3, 0xa7, 0x2022, 0xb6, 0xdf, 0xae, 0x0160, 0x2122, 0xb4, 0xa8, 0x2260, 0x017d, 0xd8, 0x221e, 0xb1, 0x2264, 0x2265, 0x2206, 0xb5, 0x2202, 0x2211, 0x220f, 0x0161, 0x222b, 0xaa, 0xba, 0x2126, 0x017e, 0xf8, 0xbf, 0xa1, 0xac, 0x221a, 0x0192, 0x2248, 0x0106, 0xab, 0x010c, 0x2026, 0xa0, 0xc0, 0xc3, 0xd5, 0x0152, 0x0153, 0x0110, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0xf7, 0x25ca, 0xf8ff, 0xa9, 0x2044, 0xa4, 0x2039, 0x203a, 0xc6, 0xbb, 0x2013, 0xb7, 0x201a, 0x201e, 0x2030, 0xc2, 0x0107, 0xc1, 0x010d, 0xc8, 0xcd, 0xce, 0xcf, 0xcc, 0xd3, 0xd4, 0x0111, 0xd2, 0xda, 0xdb, 0xd9, 0x0131, 0x02c6, 0x02dc, 0xaf, 0x03c0, 0xcb, 0x02da, 0xb8, 0xca, 0xe6, 0x02c7, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MacCroatian$Holder::b2c, MacCroatian$Holder::b2cTable->toCharArray());
	$assignStatic(MacCroatian$Holder::c2b, $new($chars, 2304));
	$assignStatic(MacCroatian$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacCroatian$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacCroatian$Holder::c2b, MacCroatian$Holder::c2bIndex);
	}
}

MacCroatian$Holder::MacCroatian$Holder() {
}

$Class* MacCroatian$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacCroatian$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MacCroatian$Holder", "sun.nio.cs.ext.MacCroatian", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.MacCroatian$Holder",
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
		"sun.nio.cs.ext.MacCroatian"
	};
	$loadClass(MacCroatian$Holder, name, initialize, &classInfo$$, MacCroatian$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacCroatian$Holder);
	});
	return class$;
}

$Class* MacCroatian$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun