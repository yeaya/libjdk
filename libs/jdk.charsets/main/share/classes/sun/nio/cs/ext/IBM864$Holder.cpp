#include <sun/nio/cs/ext/IBM864$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM864.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM864 = ::sun::nio::cs::ext::IBM864;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM864$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM864$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM864$Holder::*)()>(&IBM864$Holder::init$))},
	{}
};

$InnerClassInfo _IBM864$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM864$Holder", "sun.nio.cs.ext.IBM864", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM864$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM864$Holder",
	"java.lang.Object",
	nullptr,
	_IBM864$Holder_FieldInfo_,
	_IBM864$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM864$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM864"
};

$Object* allocate$IBM864$Holder($Class* clazz) {
	return $of($alloc(IBM864$Holder));
}

$String* IBM864$Holder::b2cTable = nullptr;
$chars* IBM864$Holder::b2c = nullptr;
$chars* IBM864$Holder::c2b = nullptr;
$chars* IBM864$Holder::c2bIndex = nullptr;

void IBM864$Holder::init$() {
}

void clinit$IBM864$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM864$Holder::b2cTable, $cstr({0xB0, 0xB7, 0x2219, 0x221A, 0x2592, 0x2500, 0x2502, 0x253C, 0x2524, 0x252C, 0x251C, 0x2534, 0x2510, 0x250C, 0x2514, 0x2518, 0x3B2, 0x221E, 0x3C6, 0xB1, 0xBD, 0xBC, 0x2248, 0xAB, 0xBB, 0xFEF7, 0xFEF8, 0xFFFD, 0xFFFD, 0xFEFB, 0xFEFC, 0xFFFD, 0xA0, 0xAD, 0xFE82, 0xA3, 0xA4, 0xFE84, 0xFFFD, 0xFFFD, 0xFE8E, 0xFE8F, 0xFE95, 0xFE99, 0x60C, 0xFE9D, 0xFEA1, 0xFEA5, 0x660, 0x661, 0x662, 0x663, 0x664, 0x665, 0x666, 0x667, 0x668, 0x669, 0xFED1, 0x61B, 0xFEB1, 0xFEB5, 0xFEB9, 0x61F, 0xA2, 0xFE80, 0xFE81, 0xFE83, 0xFE85, 0xFECA, 0xFE8B, 0xFE8D, 0xFE91, 0xFE93, 0xFE97, 0xFE9B, 0xFE9F, 0xFEA3, 0xFEA7, 0xFEA9, 0xFEAB, 0xFEAD, 0xFEAF, 0xFEB3, 0xFEB7, 0xFEBB, 0xFEBF, 0xFEC1, 0xFEC5, 0xFECB, 0xFECF, 0xA6, 0xAC, 0xF7, 0xD7, 0xFEC9, 0x640, 0xFED3, 0xFED7, 0xFEDB, 0xFEDF, 0xFEE3, 0xFEE7, 0xFEEB, 0xFEED, 0xFEEF, 0xFEF3, 0xFEBD, 0xFECC, 0xFECE, 0xFECD, 0xFEE1, 0xFE7D, 0x651, 0xFEE5, 0xFEE9, 0xFEEC, 0xFEF0, 0xFEF2, 0xFED0, 0xFED5, 0xFEF5, 0xFEF6, 0xFEDD, 0xFED9, 0xFEF1, 0x25A0, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', 0x66A, '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM864$Holder::b2c, $nc(IBM864$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM864$Holder::c2b, $new($chars, 1792));
	$assignStatic(IBM864$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM864$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM864$Holder::c2b, IBM864$Holder::c2bIndex);
	}
}

IBM864$Holder::IBM864$Holder() {
}

$Class* IBM864$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM864$Holder, name, initialize, &_IBM864$Holder_ClassInfo_, clinit$IBM864$Holder, allocate$IBM864$Holder);
	return class$;
}

$Class* IBM864$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun