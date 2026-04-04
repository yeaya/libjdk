#include <sun/nio/cs/ext/MacCentralEurope$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacCentralEurope.h>
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

$String* MacCentralEurope$Holder::b2cTable = nullptr;
$chars* MacCentralEurope$Holder::b2c = nullptr;
$chars* MacCentralEurope$Holder::c2b = nullptr;
$chars* MacCentralEurope$Holder::c2bIndex = nullptr;

void MacCentralEurope$Holder::init$() {
}

void MacCentralEurope$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MacCentralEurope$Holder::b2cTable, $cstr({0xc4, 0x0100, 0x0101, 0xc9, 0x0104, 0xd6, 0xdc, 0xe1, 0x0105, 0x010c, 0xe4, 0x010d, 0x0106, 0x0107, 0xe9, 0x0179, 0x017a, 0x010e, 0xed, 0x010f, 0x0112, 0x0113, 0x0116, 0xf3, 0x0117, 0xf4, 0xf6, 0xf5, 0xfa, 0x011a, 0x011b, 0xfc, 0x2020, 0xb0, 0x0118, 0xa3, 0xa7, 0x2022, 0xb6, 0xdf, 0xae, 0xa9, 0x2122, 0x0119, 0xa8, 0x2260, 0x0123, 0x012e, 0x012f, 0x012a, 0x2264, 0x2265, 0x012b, 0x0136, 0x2202, 0x2211, 0x0142, 0x013b, 0x013c, 0x013d, 0x013e, 0x0139, 0x013a, 0x0145, 0x0146, 0x0143, 0xac, 0x221a, 0x0144, 0x0147, 0x2206, 0xab, 0xbb, 0x2026, 0xa0, 0x0148, 0x0150, 0xd5, 0x0151, 0x014c, 0x2013, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0xf7, 0x25ca, 0x014d, 0x0154, 0x0155, 0x0158, 0x2039, 0x203a, 0x0159, 0x0156, 0x0157, 0x0160, 0x201a, 0x201e, 0x0161, 0x015a, 0x015b, 0xc1, 0x0164, 0x0165, 0xcd, 0x017d, 0x017e, 0x016a, 0xd3, 0xd4, 0x016b, 0x016e, 0xda, 0x016f, 0x0170, 0x0171, 0x0172, 0x0173, 0xdd, 0xfd, 0x0137, 0x017b, 0x0141, 0x017c, 0x0122, 0x02c7, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MacCentralEurope$Holder::b2c, MacCentralEurope$Holder::b2cTable->toCharArray());
	$assignStatic(MacCentralEurope$Holder::c2b, $new($chars, 1792));
	$assignStatic(MacCentralEurope$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacCentralEurope$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacCentralEurope$Holder::c2b, MacCentralEurope$Holder::c2bIndex);
	}
}

MacCentralEurope$Holder::MacCentralEurope$Holder() {
}

$Class* MacCentralEurope$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacCentralEurope$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MacCentralEurope$Holder", "sun.nio.cs.ext.MacCentralEurope", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.MacCentralEurope$Holder",
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
		"sun.nio.cs.ext.MacCentralEurope"
	};
	$loadClass(MacCentralEurope$Holder, name, initialize, &classInfo$$, MacCentralEurope$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacCentralEurope$Holder);
	});
	return class$;
}

$Class* MacCentralEurope$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun