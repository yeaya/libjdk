#include <sun/nio/cs/ext/IBM869$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM869.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM869 = ::sun::nio::cs::ext::IBM869;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM869$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM869$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM869$Holder::*)()>(&IBM869$Holder::init$))},
	{}
};

$InnerClassInfo _IBM869$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM869$Holder", "sun.nio.cs.ext.IBM869", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM869$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM869$Holder",
	"java.lang.Object",
	nullptr,
	_IBM869$Holder_FieldInfo_,
	_IBM869$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM869$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM869"
};

$Object* allocate$IBM869$Holder($Class* clazz) {
	return $of($alloc(IBM869$Holder));
}

$String* IBM869$Holder::b2cTable = nullptr;
$chars* IBM869$Holder::b2c = nullptr;
$chars* IBM869$Holder::c2b = nullptr;
$chars* IBM869$Holder::c2bIndex = nullptr;

void IBM869$Holder::init$() {
}

void clinit$IBM869$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM869$Holder::b2cTable, $cstr({0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x386, 0xFFFD, 0xB7, 0xAC, 0xA6, 0x2018, 0x2019, 0x388, 0x2015, 0x389, 0x38A, 0x3AA, 0x38C, 0xFFFD, 0xFFFD, 0x38E, 0x3AB, 0xA9, 0x38F, 0xB2, 0xB3, 0x3AC, 0xA3, 0x3AD, 0x3AE, 0x3AF, 0x3CA, 0x390, 0x3CC, 0x3CD, 0x391, 0x392, 0x393, 0x394, 0x395, 0x396, 0x397, 0xBD, 0x398, 0x399, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x39A, 0x39B, 0x39C, 0x39D, 0x2563, 0x2551, 0x2557, 0x255D, 0x39E, 0x39F, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x3A0, 0x3A1, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0x3A3, 0x3A4, 0x3A5, 0x3A6, 0x3A7, 0x3A8, 0x3A9, 0x3B1, 0x3B2, 0x3B3, 0x2518, 0x250C, 0x2588, 0x2584, 0x3B4, 0x3B5, 0x2580, 0x3B6, 0x3B7, 0x3B8, 0x3B9, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BE, 0x3BF, 0x3C0, 0x3C1, 0x3C3, 0x3C2, 0x3C4, 0x384, 0xAD, 0xB1, 0x3C5, 0x3C6, 0x3C7, 0xA7, 0x3C8, 0x385, 0xB0, 0xA8, 0x3C9, 0x3CB, 0x3B0, 0x3CE, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM869$Holder::b2c, $nc(IBM869$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM869$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM869$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM869$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM869$Holder::c2b, IBM869$Holder::c2bIndex);
	}
}

IBM869$Holder::IBM869$Holder() {
}

$Class* IBM869$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM869$Holder, name, initialize, &_IBM869$Holder_ClassInfo_, clinit$IBM869$Holder, allocate$IBM869$Holder);
	return class$;
}

$Class* IBM869$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun