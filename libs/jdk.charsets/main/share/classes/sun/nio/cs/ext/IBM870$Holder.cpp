#include <sun/nio/cs/ext/IBM870$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM870.h>
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

$String* IBM870$Holder::b2cTable = nullptr;
$chars* IBM870$Holder::b2c = nullptr;
$chars* IBM870$Holder::c2b = nullptr;
$chars* IBM870$Holder::c2bIndex = nullptr;

void IBM870$Holder::init$() {
}

void IBM870$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM870$Holder::b2cTable, $cstr({0x02d8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x015b, 0x0148, 0x0111, 0xfd, 0x0159, 0x015f, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x0142, 0x0144, 0x0161, 0xb8, 0x02db, 0xa4, 0x0105, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x015a, 0x0147, 0x0110, 0xdd, 0x0158, 0x015e, 0x02d9, 0x0104, 0x017c, 0x0162, 0x017b, 0xa7, 0x017e, 0x017a, 0x017d, 0x0179, 0x0141, 0x0143, 0x0160, 0xa8, 0xb4, 0xd7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xf4, 0xf6, 0x0155, 0xf3, 0x0151, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x011a, 0x0171, 0xfc, 0x0165, 0xfa, 0x011b, '\\', 0xf7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x010f, 0xd4, 0xd6, 0x0154, 0xd3, 0x0150, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x010e, 0x0170, 0xdc, 0x0164, 0xda, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0xe2, 0xe4, 0x0163, 0xe1, 0x0103, 0x010d, 0xe7, 0x0107, '[', '.', '<', '(', '+', '!', '&', 0xe9, 0x0119, 0xeb, 0x016f, 0xed, 0xee, 0x013e, 0x013a, 0xdf, ']', '$', '*', ')', ';', '^', '-', '/', 0xc2, 0xc4, 0x02dd, 0xc1, 0x0102, 0x010c, 0xc7, 0x0106, '|', ',', '%', '_', '>', '?', 0x02c7, 0xc9, 0x0118, 0xcb, 0x016e, 0xcd, 0xce, 0x013d, 0x0139, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM870$Holder::b2c, IBM870$Holder::b2cTable->toCharArray());
	$assignStatic(IBM870$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM870$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM870$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM870$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM870$Holder::c2b, IBM870$Holder::c2bIndex);
	}
}

IBM870$Holder::IBM870$Holder() {
}

$Class* IBM870$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM870$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM870$Holder", "sun.nio.cs.ext.IBM870", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM870$Holder",
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
		"sun.nio.cs.ext.IBM870"
	};
	$loadClass(IBM870$Holder, name, initialize, &classInfo$$, IBM870$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM870$Holder);
	});
	return class$;
}

$Class* IBM870$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun