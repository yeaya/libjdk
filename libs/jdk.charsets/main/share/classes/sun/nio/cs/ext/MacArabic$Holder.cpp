#include <sun/nio/cs/ext/MacArabic$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacArabic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacArabic = ::sun::nio::cs::ext::MacArabic;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacArabic$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacArabic$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacArabic$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacArabic$Holder::*)()>(&MacArabic$Holder::init$))},
	{}
};

$InnerClassInfo _MacArabic$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacArabic$Holder", "sun.nio.cs.ext.MacArabic", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacArabic$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacArabic$Holder",
	"java.lang.Object",
	nullptr,
	_MacArabic$Holder_FieldInfo_,
	_MacArabic$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacArabic$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacArabic"
};

$Object* allocate$MacArabic$Holder($Class* clazz) {
	return $of($alloc(MacArabic$Holder));
}

$String* MacArabic$Holder::b2cTable = nullptr;
$chars* MacArabic$Holder::b2c = nullptr;
$chars* MacArabic$Holder::c2b = nullptr;
$chars* MacArabic$Holder::c2bIndex = nullptr;

void MacArabic$Holder::init$() {
}

void clinit$MacArabic$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacArabic$Holder::b2cTable, $cstr({0xC4, 0xA0, 0xC7, 0xC9, 0xD1, 0xD6, 0xDC, 0xE1, 0xE0, 0xE2, 0xE4, 0x6BA, 0xAB, 0xE7, 0xE9, 0xE8, 0xEA, 0xEB, 0xED, 0x2026, 0xEE, 0xEF, 0xF1, 0xF3, 0xBB, 0xF4, 0xF6, 0xF7, 0xFA, 0xF9, 0xFB, 0xFC, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x66A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x60C, 0xFFFD, 0xFFFD, 0xFFFD, 0x660, 0x661, 0x662, 0x663, 0x664, 0x665, 0x666, 0x667, 0x668, 0x669, 0xFFFD, 0x61B, 0xFFFD, 0xFFFD, 0xFFFD, 0x61F, 0x66D, 0x621, 0x622, 0x623, 0x624, 0x625, 0x626, 0x627, 0x628, 0x629, 0x62A, 0x62B, 0x62C, 0x62D, 0x62E, 0x62F, 0x630, 0x631, 0x632, 0x633, 0x634, 0x635, 0x636, 0x637, 0x638, 0x639, 0x63A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x640, 0x641, 0x642, 0x643, 0x644, 0x645, 0x646, 0x647, 0x648, 0x649, 0x64A, 0x64B, 0x64C, 0x64D, 0x64E, 0x64F, 0x650, 0x651, 0x652, 0x67E, 0x679, 0x686, 0x6D5, 0x6A4, 0x6AF, 0x688, 0x691, 0xFFFD, 0xFFFD, 0xFFFD, 0x698, 0x6D2, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacArabic$Holder::b2c, $nc(MacArabic$Holder::b2cTable)->toCharArray());
	$assignStatic(MacArabic$Holder::c2b, $new($chars, 1024));
	$assignStatic(MacArabic$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacArabic$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacArabic$Holder::c2b, MacArabic$Holder::c2bIndex);
	}
}

MacArabic$Holder::MacArabic$Holder() {
}

$Class* MacArabic$Holder::load$($String* name, bool initialize) {
	$loadClass(MacArabic$Holder, name, initialize, &_MacArabic$Holder_ClassInfo_, clinit$MacArabic$Holder, allocate$MacArabic$Holder);
	return class$;
}

$Class* MacArabic$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun