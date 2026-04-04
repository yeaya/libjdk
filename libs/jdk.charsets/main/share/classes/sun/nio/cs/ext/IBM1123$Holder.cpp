#include <sun/nio/cs/ext/IBM1123$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1123.h>
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

$String* IBM1123$Holder::b2cTable = nullptr;
$chars* IBM1123$Holder::b2c = nullptr;
$chars* IBM1123$Holder::c2b = nullptr;
$chars* IBM1123$Holder::c2bIndex = nullptr;

void IBM1123$Holder::init$() {
}

void IBM1123$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1123$Holder::b2cTable, $cstr({0x0446, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x0434, 0x0435, 0x0444, 0x0433, 0x0445, 0x0438, 0x0439, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 0x044f, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x0440, 0x0441, 0x0442, 0x0443, 0x0436, 0x0432, 0x044c, 0x044b, 0x0437, 0x0448, 0x044d, 0x0449, 0x0447, 0x044a, 0x042e, 0x0410, 0x0411, 0x0426, 0x0414, 0x0415, 0x0424, 0x0413, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0x0425, 0x0418, 0x0419, 0x041a, 0x041b, 0x041c, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x041d, 0x041e, 0x041f, 0x042f, 0x0420, 0x0421, '\\', 0xa7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x0422, 0x0423, 0x0416, 0x0412, 0x042c, 0x042b, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x0417, 0x0428, 0x042d, 0x0429, 0x0427, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x0452, 0x0491, 0x0451, 0x0454, 0x0455, 0x0456, 0x0457, 0x0458, '[', '.', '<', '(', '+', '!', '&', 0x0459, 0x045a, 0x045b, 0x045c, 0x045e, 0x045f, 0x042a, 0x2116, 0x0402, ']', '$', '*', ')', ';', '^', '-', '/', 0x0490, 0x0401, 0x0404, 0x0405, 0x0406, 0x0407, 0x0408, 0x0409, '|', ',', '%', '_', '>', '?', 0x040a, 0x040b, 0x040c, 0xad, 0x040e, 0x040f, 0x044e, 0x0430, 0x0431, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1123$Holder::b2c, IBM1123$Holder::b2cTable->toCharArray());
	$assignStatic(IBM1123$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM1123$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1123$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM1123$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1123$Holder::c2b, IBM1123$Holder::c2bIndex);
	}
}

IBM1123$Holder::IBM1123$Holder() {
}

$Class* IBM1123$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1123$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1123$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1123$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1123$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM1123$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1123$Holder", "sun.nio.cs.ext.IBM1123", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1123$Holder",
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
		"sun.nio.cs.ext.IBM1123"
	};
	$loadClass(IBM1123$Holder, name, initialize, &classInfo$$, IBM1123$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1123$Holder);
	});
	return class$;
}

$Class* IBM1123$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun