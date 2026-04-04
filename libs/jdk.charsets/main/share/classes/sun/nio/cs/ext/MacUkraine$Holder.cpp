#include <sun/nio/cs/ext/MacUkraine$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacUkraine.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$String* MacUkraine$Holder::b2cTable = nullptr;
$chars* MacUkraine$Holder::b2c = nullptr;
$chars* MacUkraine$Holder::c2b = nullptr;
$chars* MacUkraine$Holder::c2bIndex = nullptr;

void MacUkraine$Holder::init$() {
}

void MacUkraine$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MacUkraine$Holder::b2cTable, $cstr({0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 0x2020, 0xb0, 0x0490, 0xa3, 0xa7, 0x2022, 0xb6, 0x0406, 0xae, 0xa9, 0x2122, 0x0402, 0x0452, 0x2260, 0x0403, 0x0453, 0x221e, 0xb1, 0x2264, 0x2265, 0x0456, 0xb5, 0x0491, 0x0408, 0x0404, 0x0454, 0x0407, 0x0457, 0x0409, 0x0459, 0x040a, 0x045a, 0x0458, 0x0405, 0xac, 0x221a, 0x0192, 0x2248, 0x2206, 0xab, 0xbb, 0x2026, 0xa0, 0x040b, 0x045b, 0x040c, 0x045c, 0x0455, 0x2013, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0xf7, 0x201e, 0x040e, 0x045e, 0x040f, 0x045f, 0x2116, 0x0401, 0x0451, 0x044f, 0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0xa4, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MacUkraine$Holder::b2c, MacUkraine$Holder::b2cTable->toCharArray());
	$assignStatic(MacUkraine$Holder::c2b, $new($chars, 1536));
	$assignStatic(MacUkraine$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacUkraine$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacUkraine$Holder::c2b, MacUkraine$Holder::c2bIndex);
	}
}

MacUkraine$Holder::MacUkraine$Holder() {
}

$Class* MacUkraine$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacUkraine$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MacUkraine$Holder", "sun.nio.cs.ext.MacUkraine", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.MacUkraine$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.MacUkraine"
	};
	$loadClass(MacUkraine$Holder, name, initialize, &classInfo$$, MacUkraine$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacUkraine$Holder);
	});
	return class$;
}

$Class* MacUkraine$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun