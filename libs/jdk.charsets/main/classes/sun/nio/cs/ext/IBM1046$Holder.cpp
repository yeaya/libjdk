#include <sun/nio/cs/ext/IBM1046$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1046.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1046 = ::sun::nio::cs::ext::IBM1046;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1046$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1046$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1046$Holder::*)()>(&IBM1046$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1046$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1046$Holder", "sun.nio.cs.ext.IBM1046", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1046$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1046$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1046$Holder_FieldInfo_,
	_IBM1046$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1046$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1046"
};

$Object* allocate$IBM1046$Holder($Class* clazz) {
	return $of($alloc(IBM1046$Holder));
}

$String* IBM1046$Holder::b2cTable = nullptr;
$chars* IBM1046$Holder::b2c = nullptr;
$chars* IBM1046$Holder::c2b = nullptr;
$chars* IBM1046$Holder::c2bIndex = nullptr;

void IBM1046$Holder::init$() {
}

void clinit$IBM1046$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1046$Holder::b2cTable, $cstr({0xFE88, 0xD7, 0xF7, 0xF8F6, 0xF8F5, 0xF8F4, 0xF8F7, 0xFE71, 0x88, 0x25A0, 0x2502, 0x2500, 0x2510, 0x250C, 0x2514, 0x2518, 0xFE79, 0xFE7B, 0xFE7D, 0xFE7F, 0xFE77, 0xFE8A, 0xFEF0, 0xFEF3, 0xFEF2, 0xFECE, 0xFECF, 0xFED0, 0xFEF6, 0xFEF8, 0xFEFA, 0xFEFC, 0xA0, 0xF8FA, 0xF8F9, 0xF8F8, 0xA4, 0xF8FB, 0xFE8B, 0xFE91, 0xFE97, 0xFE9B, 0xFE9F, 0xFEA3, 0x60C, 0xAD, 0xFEA7, 0xFEB3, 0x660, 0x661, 0x662, 0x663, 0x664, 0x665, 0x666, 0x667, 0x668, 0x669, 0xFEB7, 0x61B, 0xFEBB, 0xFEBF, 0xFECA, 0x61F, 0xFECB, 0xFE80, 0xFE81, 0xFE83, 0xFE85, 0xFE87, 0xFE89, 0xFE8D, 0xFE8F, 0xFE93, 0xFE95, 0xFE99, 0xFE9D, 0xFEA1, 0xFEA5, 0xFEA9, 0xFEAB, 0xFEAD, 0xFEAF, 0xFEB1, 0xFEB5, 0xFEB9, 0xFEBD, 0xFEC3, 0xFEC7, 0xFEC9, 0xFECD, 0xFECC, 0xFE82, 0xFE84, 0xFE8E, 0xFED3, 0x640, 0xFED1, 0xFED5, 0xFED9, 0xFEDD, 0xFEE1, 0xFEE5, 0xFEEB, 0xFEED, 0xFEEF, 0xFEF1, 0xFE70, 0xFE72, 0xFE74, 0xFE76, 0xFE78, 0xFE7A, 0xFE7C, 0xFE7E, 0xFED7, 0xFEDB, 0xFEDF, 0xF8FC, 0xFEF5, 0xFEF7, 0xFEF9, 0xFEFB, 0xFEE3, 0xFEE7, 0xFEEC, 0xFEE9, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM1046$Holder::b2c, $nc(IBM1046$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1046$Holder::c2b, $new($chars, 1536));
	$assignStatic(IBM1046$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1046$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1046$Holder::c2b, IBM1046$Holder::c2bIndex);
	}
}

IBM1046$Holder::IBM1046$Holder() {
}

$Class* IBM1046$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1046$Holder, name, initialize, &_IBM1046$Holder_ClassInfo_, clinit$IBM1046$Holder, allocate$IBM1046$Holder);
	return class$;
}

$Class* IBM1046$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun