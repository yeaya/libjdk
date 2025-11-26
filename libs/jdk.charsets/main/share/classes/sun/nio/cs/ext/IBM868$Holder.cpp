#include <sun/nio/cs/ext/IBM868$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM868.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM868 = ::sun::nio::cs::ext::IBM868;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM868$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM868$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM868$Holder::*)()>(&IBM868$Holder::init$))},
	{}
};

$InnerClassInfo _IBM868$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM868$Holder", "sun.nio.cs.ext.IBM868", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM868$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM868$Holder",
	"java.lang.Object",
	nullptr,
	_IBM868$Holder_FieldInfo_,
	_IBM868$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM868$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM868"
};

$Object* allocate$IBM868$Holder($Class* clazz) {
	return $of($alloc(IBM868$Holder));
}

$String* IBM868$Holder::b2cTable = nullptr;
$chars* IBM868$Holder::b2c = nullptr;
$chars* IBM868$Holder::c2b = nullptr;
$chars* IBM868$Holder::c2bIndex = nullptr;

void IBM868$Holder::init$() {
}

void clinit$IBM868$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM868$Holder::b2cTable, $cstr({0x6F0, 0x6F1, 0x6F2, 0x6F3, 0x6F4, 0x6F5, 0x6F6, 0x6F7, 0x6F8, 0x6F9, 0x60C, 0x61B, 0x61F, 0xFE81, 0xFE8D, 0xFE8E, 0xF8FB, 0xFE8F, 0xFE91, 0xFB56, 0xFB58, 0xFE93, 0xFE95, 0xFE97, 0xFB66, 0xFB68, 0xFE99, 0xFE9B, 0xFE9D, 0xFE9F, 0xFB7A, 0xFB7C, 0xFEA1, 0xFEA3, 0xFEA5, 0xFEA7, 0xFEA9, 0xFB88, 0xFEAB, 0xFEAD, 0xFB8C, 0xFEAF, 0xFB8A, 0xFEB1, 0xFEB3, 0xFEB5, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xFEB7, 0xFEB9, 0xFEBB, 0xFEBD, 0x2563, 0x2551, 0x2557, 0x255D, 0xFEBF, 0xFEC3, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0xFEC7, 0xFEC9, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xFECA, 0xFECB, 0xFECC, 0xFECD, 0xFECE, 0xFECF, 0xFED0, 0xFED1, 0xFED3, 0xFED5, 0x2518, 0x250C, 0x2588, 0x2584, 0xFED7, 0xFB8E, 0x2580, 0xFEDB, 0xFB92, 0xFB94, 0xFEDD, 0xFEDF, 0xFEE0, 0xFEE1, 0xFEE3, 0xFB9E, 0xFEE5, 0xFEE7, 0xFE85, 0xFEED, 0xFBA6, 0xFBA8, 0xFBA9, 0xAD, 0xFBAA, 0xFE80, 0xFE89, 0xFE8A, 0xFE8B, 0xFBFC, 0xFBFD, 0xFBFE, 0xFBB0, 0xFBAE, 0xFE7C, 0xFE7D, 0xFFFD, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM868$Holder::b2c, $nc(IBM868$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM868$Holder::c2b, $new($chars, 1792));
	$assignStatic(IBM868$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM868$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM868$Holder::c2b, IBM868$Holder::c2bIndex);
	}
}

IBM868$Holder::IBM868$Holder() {
}

$Class* IBM868$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM868$Holder, name, initialize, &_IBM868$Holder_ClassInfo_, clinit$IBM868$Holder, allocate$IBM868$Holder);
	return class$;
}

$Class* IBM868$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun