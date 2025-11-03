#include <sun/nio/cs/ext/IBM875$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM875.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM875 = ::sun::nio::cs::ext::IBM875;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM875$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM875$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM875$Holder::*)()>(&IBM875$Holder::init$))},
	{}
};

$InnerClassInfo _IBM875$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM875$Holder", "sun.nio.cs.ext.IBM875", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM875$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM875$Holder",
	"java.lang.Object",
	nullptr,
	_IBM875$Holder_FieldInfo_,
	_IBM875$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM875$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM875"
};

$Object* allocate$IBM875$Holder($Class* clazz) {
	return $of($alloc(IBM875$Holder));
}

$String* IBM875$Holder::b2cTable = nullptr;
$chars* IBM875$Holder::b2c = nullptr;
$chars* IBM875$Holder::c2b = nullptr;
$chars* IBM875$Holder::c2bIndex = nullptr;

void IBM875$Holder::init$() {
}

void clinit$IBM875$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM875$Holder::b2cTable, $cstr({0x385, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x3B1, 0x3B2, 0x3B3, 0x3B4, 0x3B5, 0x3B6, 0xB0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x3B7, 0x3B8, 0x3B9, 0x3BA, 0x3BB, 0x3BC, 0xB4, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x3BD, 0x3BE, 0x3BF, 0x3C0, 0x3C1, 0x3C3, 0xA3, 0x3AC, 0x3AD, 0x3AE, 0x3CA, 0x3AF, 0x3CC, 0x3CD, 0x3CB, 0x3CE, 0x3C2, 0x3C4, 0x3C5, 0x3C6, 0x3C7, 0x3C8, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0x3C9, 0x390, 0x3B0, 0x2018, 0x2015, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xB1, 0xBD, 0xFFFD, 0x387, 0x2019, 0xA6, '\\', 0xFFFD, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xB2, 0xA7, 0xFFFD, 0xFFFD, 0xAB, 0xAC, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xB3, 0xA9, 0xFFFD, 0xFFFD, 0xBB, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0x391, 0x392, 0x393, 0x394, 0x395, 0x396, 0x397, 0x398, 0x399, '[', '.', '<', '(', '+', '!', '&', 0x39A, 0x39B, 0x39C, 0x39D, 0x39E, 0x39F, 0x3A0, 0x3A1, 0x3A3, ']', '$', '*', ')', ';', '^', '-', '/', 0x3A4, 0x3A5, 0x3A6, 0x3A7, 0x3A8, 0x3A9, 0x3AA, 0x3AB, '|', ',', '%', '_', '>', '?', 0xA8, 0x386, 0x388, 0x389, 0xA0, 0x38A, 0x38C, 0x38E, 0x38F, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM875$Holder::b2c, $nc(IBM875$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM875$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM875$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM875$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM875$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM875$Holder::c2b, IBM875$Holder::c2bIndex);
	}
}

IBM875$Holder::IBM875$Holder() {
}

$Class* IBM875$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM875$Holder, name, initialize, &_IBM875$Holder_ClassInfo_, clinit$IBM875$Holder, allocate$IBM875$Holder);
	return class$;
}

$Class* IBM875$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun