#include <sun/nio/cs/ext/IBM856$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM856.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM856 = ::sun::nio::cs::ext::IBM856;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM856$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM856$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM856$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM856$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM856$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM856$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM856$Holder::*)()>(&IBM856$Holder::init$))},
	{}
};

$InnerClassInfo _IBM856$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM856$Holder", "sun.nio.cs.ext.IBM856", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM856$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM856$Holder",
	"java.lang.Object",
	nullptr,
	_IBM856$Holder_FieldInfo_,
	_IBM856$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM856$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM856"
};

$Object* allocate$IBM856$Holder($Class* clazz) {
	return $of($alloc(IBM856$Holder));
}

$String* IBM856$Holder::b2cTable = nullptr;
$chars* IBM856$Holder::b2c = nullptr;
$chars* IBM856$Holder::c2b = nullptr;
$chars* IBM856$Holder::c2bIndex = nullptr;

void IBM856$Holder::init$() {
}

void clinit$IBM856$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM856$Holder::b2cTable, $cstr({0x5D0, 0x5D1, 0x5D2, 0x5D3, 0x5D4, 0x5D5, 0x5D6, 0x5D7, 0x5D8, 0x5D9, 0x5DA, 0x5DB, 0x5DC, 0x5DD, 0x5DE, 0x5DF, 0x5E0, 0x5E1, 0x5E2, 0x5E3, 0x5E4, 0x5E5, 0x5E6, 0x5E7, 0x5E8, 0x5E9, 0x5EA, 0xFFFD, 0xA3, 0xFFFD, 0xD7, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xAE, 0xAC, 0xBD, 0xBC, 0xFFFD, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xFFFD, 0xFFFD, 0xFFFD, 0xA9, 0x2563, 0x2551, 0x2557, 0x255D, 0xA2, 0xA5, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0xFFFD, 0xFFFD, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xA4, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x2518, 0x250C, 0x2588, 0x2584, 0xA6, 0xFFFD, 0x2580, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xB5, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x203E, 0xB4, 0xAD, 0xB1, 0x2017, 0xBE, 0xB6, 0xA7, 0xF7, 0xB8, 0xB0, 0xA8, 0x2022, 0xB9, 0xB3, 0xB2, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM856$Holder::b2c, $nc(IBM856$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM856$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM856$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM856$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM856$Holder::c2b, IBM856$Holder::c2bIndex);
	}
}

IBM856$Holder::IBM856$Holder() {
}

$Class* IBM856$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM856$Holder, name, initialize, &_IBM856$Holder_ClassInfo_, clinit$IBM856$Holder, allocate$IBM856$Holder);
	return class$;
}

$Class* IBM856$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun