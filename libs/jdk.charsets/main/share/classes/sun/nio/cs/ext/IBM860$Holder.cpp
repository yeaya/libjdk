#include <sun/nio/cs/ext/IBM860$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM860.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM860 = ::sun::nio::cs::ext::IBM860;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM860$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM860$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM860$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM860$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM860$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM860$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM860$Holder::*)()>(&IBM860$Holder::init$))},
	{}
};

$InnerClassInfo _IBM860$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM860$Holder", "sun.nio.cs.ext.IBM860", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM860$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM860$Holder",
	"java.lang.Object",
	nullptr,
	_IBM860$Holder_FieldInfo_,
	_IBM860$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM860$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM860"
};

$Object* allocate$IBM860$Holder($Class* clazz) {
	return $of($alloc(IBM860$Holder));
}

$String* IBM860$Holder::b2cTable = nullptr;
$chars* IBM860$Holder::b2c = nullptr;
$chars* IBM860$Holder::c2b = nullptr;
$chars* IBM860$Holder::c2bIndex = nullptr;

void IBM860$Holder::init$() {
}

void clinit$IBM860$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM860$Holder::b2cTable, $cstr({0xC7, 0xFC, 0xE9, 0xE2, 0xE3, 0xE0, 0xC1, 0xE7, 0xEA, 0xCA, 0xE8, 0xCD, 0xD4, 0xEC, 0xC3, 0xC2, 0xC9, 0xC0, 0xC8, 0xF4, 0xF5, 0xF2, 0xDA, 0xF9, 0xCC, 0xD5, 0xDC, 0xA2, 0xA3, 0xD9, 0x20A7, 0xD3, 0xE1, 0xED, 0xF3, 0xFA, 0xF1, 0xD1, 0xAA, 0xBA, 0xBF, 0xD2, 0xAC, 0xBD, 0xBC, 0xA1, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 0x2563, 0x2551, 0x2557, 0x255D, 0x255C, 0x255B, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x255E, 0x255F, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0x2567, 0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256B, 0x256A, 0x2518, 0x250C, 0x2588, 0x2584, 0x258C, 0x2590, 0x2580, 0x3B1, 0xDF, 0x393, 0x3C0, 0x3A3, 0x3C3, 0xB5, 0x3C4, 0x3A6, 0x398, 0x3A9, 0x3B4, 0x221E, 0x3C6, 0x3B5, 0x2229, 0x2261, 0xB1, 0x2265, 0x2264, 0x2320, 0x2321, 0xF7, 0x2248, 0xB0, 0x2219, 0xB7, 0x221A, 0x207F, 0xB2, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM860$Holder::b2c, $nc(IBM860$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM860$Holder::c2b, $new($chars, 1536));
	$assignStatic(IBM860$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM860$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM860$Holder::c2b, IBM860$Holder::c2bIndex);
	}
}

IBM860$Holder::IBM860$Holder() {
}

$Class* IBM860$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM860$Holder, name, initialize, &_IBM860$Holder_ClassInfo_, clinit$IBM860$Holder, allocate$IBM860$Holder);
	return class$;
}

$Class* IBM860$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun