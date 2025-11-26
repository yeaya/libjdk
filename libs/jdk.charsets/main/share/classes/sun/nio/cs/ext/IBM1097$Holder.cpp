#include <sun/nio/cs/ext/IBM1097$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1097.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1097 = ::sun::nio::cs::ext::IBM1097;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1097$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1097$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1097$Holder::*)()>(&IBM1097$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1097$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1097$Holder", "sun.nio.cs.ext.IBM1097", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1097$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1097$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1097$Holder_FieldInfo_,
	_IBM1097$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1097$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1097"
};

$Object* allocate$IBM1097$Holder($Class* clazz) {
	return $of($alloc(IBM1097$Holder));
}

$String* IBM1097$Holder::b2cTable = nullptr;
$chars* IBM1097$Holder::b2c = nullptr;
$chars* IBM1097$Holder::c2b = nullptr;
$chars* IBM1097$Holder::c2bIndex = nullptr;

void IBM1097$Holder::init$() {
}

void clinit$IBM1097$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1097$Holder::b2cTable, $cstr({0xFB8A, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xAB, 0xBB, 0xFEB1, 0xFEB3, 0xFEB5, 0xFEB7, 0xFEB9, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xFEBB, 0xFEBD, 0xFEBF, 0xFEC1, 0xFEC3, 0xFEC5, 0xFEC7, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xFEC9, 0xFECA, 0xFECB, 0xFECC, 0xFECD, 0xFECE, 0xFECF, 0xFED0, 0xFED1, 0xFED3, 0xFED5, 0xFED7, 0xFB8E, 0xFEDB, 0xFB92, 0xFB94, '[', ']', 0xFEDD, 0xFEDF, 0xFEE1, 0xD7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xFEE3, 0xFEE5, 0xFEE7, 0xFEED, 0xFEE9, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xFEEB, 0xFEEC, 0xFBA4, 0xFBFC, 0xFBFD, 0xFBFE, '\\', 0x61F, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x640, 0x6F0, 0x6F1, 0x6F2, 0x6F3, 0x6F4, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x6F5, 0x6F6, 0x6F7, 0x6F8, 0x6F9, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, 0x85, '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x60C, 0x64B, 0xFE81, 0xFE82, 0xF8FA, 0xFE8D, 0xFE8E, 0xF8FB, 0xA4, '.', '<', '(', '+', '|', '&', 0xFE80, 0xFE83, 0xFE84, 0xF8F9, 0xFE85, 0xFE8B, 0xFE8F, 0xFE91, 0xFB56, '!', '$', '*', ')', ';', 0xAC, '-', '/', 0xFB58, 0xFE95, 0xFE97, 0xFE99, 0xFE9B, 0xFE9D, 0xFE9F, 0xFB7A, 0x61B, ',', '%', '_', '>', '?', 0xFB7C, 0xFEA1, 0xFEA3, 0xFEA5, 0xFEA7, 0xFEA9, 0xFEAB, 0xFEAD, 0xFEAF, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1097$Holder::b2c, $nc(IBM1097$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1097$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM1097$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1097$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1097$Holder::c2b, IBM1097$Holder::c2bIndex);
	}
}

IBM1097$Holder::IBM1097$Holder() {
}

$Class* IBM1097$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1097$Holder, name, initialize, &_IBM1097$Holder_ClassInfo_, clinit$IBM1097$Holder, allocate$IBM1097$Holder);
	return class$;
}

$Class* IBM1097$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun