#include <sun/nio/cs/ext/IBM1098$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1098.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1098 = ::sun::nio::cs::ext::IBM1098;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1098$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1098$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1098$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1098$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1098$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1098$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1098$Holder::*)()>(&IBM1098$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1098$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1098$Holder", "sun.nio.cs.ext.IBM1098", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1098$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1098$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1098$Holder_FieldInfo_,
	_IBM1098$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1098$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1098"
};

$Object* allocate$IBM1098$Holder($Class* clazz) {
	return $of($alloc(IBM1098$Holder));
}

$String* IBM1098$Holder::b2cTable = nullptr;
$chars* IBM1098$Holder::b2c = nullptr;
$chars* IBM1098$Holder::c2b = nullptr;
$chars* IBM1098$Holder::c2bIndex = nullptr;

void IBM1098$Holder::init$() {
}

void clinit$IBM1098$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1098$Holder::b2cTable, $cstr({0xFFFD, 0xFFFD, 0x60C, 0x61B, 0x61F, 0x64B, 0xFE81, 0xFE82, 0xF8FA, 0xFE8D, 0xFE8E, 0xF8FB, 0xFE80, 0xFE83, 0xFE84, 0xF8F9, 0xFE85, 0xFE8B, 0xFE8F, 0xFE91, 0xFB56, 0xFB58, 0xFE95, 0xFE97, 0xFE99, 0xFE9B, 0xFE9D, 0xFE9F, 0xFB7A, 0xFB7C, 0xD7, 0xFEA1, 0xFEA3, 0xFEA5, 0xFEA7, 0xFEA9, 0xFEAB, 0xFEAD, 0xFEAF, 0xFB8A, 0xFEB1, 0xFEB3, 0xFEB5, 0xFEB7, 0xFEB9, 0xFEBB, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xFEBD, 0xFEBF, 0xFEC1, 0xFEC3, 0x2563, 0x2551, 0x2557, 0x255D, 0xA4, 0xFEC5, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0xFEC7, 0xFEC9, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xFFFD, 0xFECA, 0xFECB, 0xFECC, 0xFECD, 0xFECE, 0xFECF, 0xFED0, 0xFED1, 0xFED3, 0x2518, 0x250C, 0x2588, 0x2584, 0xFED5, 0xFED7, 0x2580, 0xFB8E, 0xFEDB, 0xFB92, 0xFB94, 0xFEDD, 0xFEDF, 0xFEE1, 0xFEE3, 0xFEE5, 0xFEE7, 0xFEED, 0xFEE9, 0xFEEB, 0xFEEC, 0xFBA4, 0xFBFC, 0xAD, 0xFBFD, 0xFBFE, 0x640, 0x6F0, 0x6F1, 0x6F2, 0x6F3, 0x6F4, 0x6F5, 0x6F6, 0x6F7, 0x6F8, 0x6F9, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM1098$Holder::b2c, $nc(IBM1098$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1098$Holder::c2b, $new($chars, 1792));
	$assignStatic(IBM1098$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1098$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1098$Holder::c2b, IBM1098$Holder::c2bIndex);
	}
}

IBM1098$Holder::IBM1098$Holder() {
}

$Class* IBM1098$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1098$Holder, name, initialize, &_IBM1098$Holder_ClassInfo_, clinit$IBM1098$Holder, allocate$IBM1098$Holder);
	return class$;
}

$Class* IBM1098$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun