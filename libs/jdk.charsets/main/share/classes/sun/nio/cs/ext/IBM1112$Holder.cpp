#include <sun/nio/cs/ext/IBM1112$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1112.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1112 = ::sun::nio::cs::ext::IBM1112;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1112$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1112$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1112$Holder::*)()>(&IBM1112$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1112$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1112$Holder", "sun.nio.cs.ext.IBM1112", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1112$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1112$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1112$Holder_FieldInfo_,
	_IBM1112$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1112$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1112"
};

$Object* allocate$IBM1112$Holder($Class* clazz) {
	return $of($alloc(IBM1112$Holder));
}

$String* IBM1112$Holder::b2cTable = nullptr;
$chars* IBM1112$Holder::b2c = nullptr;
$chars* IBM1112$Holder::c2b = nullptr;
$chars* IBM1112$Holder::c2bIndex = nullptr;

void IBM1112$Holder::init$() {
}

void clinit$IBM1112$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1112$Holder::b2cTable, $cstr({0xD8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xAB, 0xBB, 0x101, 0x17C, 0x144, 0xB1, 0xB0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x156, 0x157, 0xE6, 0x137, 0xC6, 0xA4, 0xB5, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x201D, 0x17A, 0x100, 0x17B, 0x143, 0xAE, '^', 0xA3, 0x12B, 0xB7, 0xA9, 0xA7, 0xB6, 0xBC, 0xBD, 0xBE, '[', ']', 0x179, 0x136, 0x13C, 0xD7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0x14D, 0xF6, 0x146, 0xF3, 0xF5, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xB9, 0x107, 0xFC, 0x142, 0x15B, 0x2019, '\\', 0xF7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xB2, 0x14C, 0xD6, 0x145, 0xD3, 0xD5, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xB3, 0x106, 0xDC, 0x141, 0x15A, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x161, 0xE4, 0x105, 0x12F, 0x16B, 0xE5, 0x113, 0x17E, 0xA2, '.', '<', '(', '+', '|', '&', 0xE9, 0x119, 0x117, 0x10D, 0x173, 0x201E, 0x201C, 0x123, 0xDF, '!', '$', '*', ')', ';', 0xAC, '-', '/', 0x160, 0xC4, 0x104, 0x12E, 0x16A, 0xC5, 0x112, 0x17D, 0xA6, ',', '%', '_', '>', '?', 0xF8, 0xC9, 0x118, 0x116, 0x10C, 0x172, 0x12A, 0x13B, 0x122, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1112$Holder::b2c, $nc(IBM1112$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1112$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM1112$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1112$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM1112$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1112$Holder::c2b, IBM1112$Holder::c2bIndex);
	}
}

IBM1112$Holder::IBM1112$Holder() {
}

$Class* IBM1112$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1112$Holder, name, initialize, &_IBM1112$Holder_ClassInfo_, clinit$IBM1112$Holder, allocate$IBM1112$Holder);
	return class$;
}

$Class* IBM1112$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun